// EmonLibrary examples openenergymonitor.org, Licence GNU GPL V3

#include "EmonLib.h"                   // Include Emon Library
EnergyMonitor emon1;                   // CT1
EnergyMonitor emon2;                   // CT2
unsigned long oldTime;
float powerPerMin;
float currPerMin; 
float totalIrms;
void setup()
{ 
  Serial.begin(9600); 
  powerPerMin = 0;
  currPerMin = 0;
  emon1.current(1, 60);             // CT1: input pin, number of max amps the CT can measure
  emon2.current(5, 60);             // CT2: same as CT1
}

void loop()
{
  double Irms1 = emon1.calcIrms(1480);  //1480 is the sampling rate, can also use 1676 //kitchen
  double Irms2 = emon2.calcIrms(1480); //
  //temp code for quickly seeing serial output
//  Serial.print("Irms1: ");
//  Serial.println(Irms1);
//  Serial.print("Irms2: ");
//  Serial.println(Irms2);
  totalIrms += (Irms1 + Irms2);
  //Serial.println(totalIrms);
  //currPerMin += totalIrms;
  //currPerMin += Irms1;
  //temp code end
  if((millis() - oldTime) > 60000) {
      //Serial.println(currPerMin);  // times by 2 to calibrate it with annmeter (old line when only using 1 CT)
      Serial.print(totalIrms);
      //powerPerMin = currPerMin*123.7;
      //Serial.println(powerPerMin);    // Apparent power
      //currPerMin = 0;
      totalIrms = 0;
      oldTime = millis();
  }
}
