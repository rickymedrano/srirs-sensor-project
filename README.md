# Overview
This project was a combination Independent Study and Capstone project for undergrad Computer Science students at CSUCI. Not wanting to design another boring app, we decided to tackle a multidisciplinary problem. Santa Rosa Island, off the coast of Southern California, is home to CSUCI's research station. The climate on the island is charaterized by mild Winters and very dry Summers. Combined with severe drought during the past decade, resources on the island are very limited. 

### Authors
Ricky Medrano and Geraldine Salazar-Harms

### Program Prerequisites
- Python 3 with mysql connector library
- Arduino IDE with EmonLib library
- Raspbian (any version with systemd, so Stretch or Buster)

### Hardware Prerequisites
You will need a 3D Printer if you want to print the model.
Here is a list of materials used in the project:

| Item  | Quantity |
| ------------- | ------------- |
| <a href="https://www.amazon.com/gp/product/B01N1LBMPG">Arduino Nano</a> | 2 |
| <a href="https://www.amazon.com/gp/product/B07BDR5PDW">Raspberry Pi 3B+</a>  | 1 |
| <a href="https://www.amazon.com/gp/product/B00MARDJZ4">Raspberry Pi Power Supply</a>  | 1 |
| <a href="https://www.amazon.com/gp/product/B073JWXGNT">32GB SD Card</a>  | 1 |
| <a href="https://www.amazon.com/gp/product/B01KKE602W">Mini Breadboard</a>  | 1 |
| <a href="https://www.amazon.com/gp/product/B003WV5DME">6'' USB to Mini USB Cable</a>  | 2 |
| <a href="https://www.amazon.com/gp/product/B01N1LBMPG">Split Core Transformer</a> | 2 |
| <a href="https://www.amazon.com/gp/product/B00X5KHD66">YF-G1 Flowmeter</a> | 2 |

### Getting Started
* I suggest you start here in order to understand how a CT sensor works and how the EmonLib library works https://learn.openenergymonitor.org/electricity-monitoring/ct-sensors/introduction
* You can read about systemd here https://www.raspberrypi.org/documentation/linux/usage/systemd.md
* Electrical
  * This project involves working with mains power and is therefore very dangerous. If you feel even slightly uncomfortable interacting with your breaker box, get the help of an Electrician to hook up the CT sensors. 
  * This project required two CT sensors since there were two main hot lines at the research station but most likely you'll only need 1 CT sensor if you're trying to implement this in a house.
