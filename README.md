# Secoority Cam 
Do you have siblings who love "accidentally" wandering into your room and touching all your precious and definitely breakable stuff? Have you ever joked about your room needing more surveillance than your front door because of this very reason? Well it's time to stop joking, because the Secoority Cam is at your service! This is a motion sensor activated camera that sends footage to your phone every time it is activated. Obviously you don't want footage of you rotting in bed, so it also comes with a number pad that you can disable the camera with! You only have 10 seconds to input the right password though, so if you're too slow you'll get embarrasing footage on your computer of you failing to put in a 4 number passcode :P

## How it Works
The number pad (probably even more complex than the cam) is powered by a XIAO esp32, attatched to a PCB that is equipped with a motion sensor and a 0.91 inch OLED for those who can't remember more than two numbers at a time. A 10 second timer automatically starts the moment the motion sensor is activated, so the user has 10 seconds to input the correct password to disable the camera. When 10 seconds are up, the esp32 sends a signal through MQTT to a Raspberry Pi Zero 2 mounted on the far corner of the room, which tells it to activate the camera and save the footage. It stays on for as long as the motion sensor reads HIGH, and then has a 10 second cooldown so if the intruder happens to turn into a puddle, you'll still be able to see them for a little bit. 

## Why I Made This:
I have a little gremlin sibling who shows up randomly when I'm at school/sports practice. My parents refuse to do anything about it because it is "our home" so I was like ykw I'll just figure it out myself. (I also kind of had no other ideas and this seemed pretty cool lmao)

## Numpad
All 3D models are made by the one and only me! The top of this will be white and the base will be *hopefully* orange :D
<img src="https://i.imgur.com/PMPypQV.png" width="100%" height="100%" alt="NUMPAD YAY">

## Raspi Case
The black little cylinder looking thing is my camera model. I made it myself so ik it looks ugly, I just couldn't find anything on the internet.
<img src="https://i.imgur.com/xD8Lgub.png" width="100%" height="100%" alt="RASPI CASE YAY">

## PCB (numpad)

<img src="https://i.imgur.com/cxXzcWT.png" width="100%" height="100%" alt="pcb">

## Schematic (numpad)

<img src="https://i.imgur.com/Bl5TpVU.png" width="100%" height="100%" alt="schematic">

## Raspi Wiring Diagram
This is my first time making a wiring diagram so i apologize for the ugliness lol
<img src="https://i.imgur.com/JveRoyI.jpeg" width="100%" height="100%" alt="wiring">


### BOM
| Item                 | Price  | Quantity| Link  |
|----------------------|--------|---------|-------|
| OV5647 Camera        | $20.96 |    1    | <a href="https://www.aliexpress.us/item/3256806656961286.html">LINK</a> |
| 1N4148 Diodes        | $1.48  |    1    | <a href="https://www.aliexpress.us/item/2255799955957794.html">LINK</a> |
| Motion Sensor        | $1.58  |    1    | <a href="https://www.aliexpress.us/item/3256807881009549.html">LINK</a> |
| Raspberry Pi Zero 2  | $15.00 |    1    | <a href="https://www.seeedstudio.com/Raspberry-Pi-Zero-2-W-p-5197.html">LINK</a> |
| Micro SD (32G)       | $7.69  |    1    | <a href="https://shop.sandisk.com/products/memory-cards/microsd-cards/sandisk-ultra-uhs-i-microsd?sku=SDSQUNC-032G-AN6MA">LINK</a> |
| XIAO ESP32-C3        | $4.99  |    1    | <a href="https://www.seeedstudio.com/Seeed-XIAO-ESP32C3-p-5431.html">LINK</a> |
| Cherry MX Switches   | $4.79  |    2    | <a href="https://a.co/d/3V39xDp">LINK</a> |
| OLED 0.91 Display    | $1.96  |    1    | <a href="https://www.aliexpress.us/item/3256805114690528.html">LINK</a> |
| 7 Pin Header         | $0.20  |    1    | <a href="https://www.seeedstudio.com/XIAO-Series-7-Pin-Male-Header-5-pcs-p-5460.html">LINK</a> |
| Sensor Pin Header    | $1.49  |    1    | <a href="https://www.aliexpress.us/item/2251832777957007.html">LINK</a> |
| DSA Keycaps          | $3.29  |    1    | <a href="https://www.aliexpress.us/item/3256805819590269.html">LINK</a> |
| Raspi Case Screws    | $1.63  |    1    | <a href="https://www.aliexpress.us/item/2251832787469395.html">LINK</a> |
| Raspi Case Heatsets  | $2.00  |    1    | <a href="https://www.aliexpress.us/item/3256807466816961.html">LINK</a> |
| Numpad Screws        | $1.73  |    1    | <a href="https://www.aliexpress.us/item/3256806737710687.html">LINK</a> |
| Numpad Heatsets      | $2.16  |    1    | <a href="https://www.aliexpress.us/item/3256803396040989.html">LINK</a> |
| Micro USB Cable      | $1.74  |    1    | <a href="https://www.aliexpress.us/item/3256805800230315.html">LINK</a> |
| Micro SD Card Reader | $1.25  |    1    | <a href="https://www.aliexpress.us/item/2251832695439636.html">LINK</a> |
| PCB (pcbway)         | $23.76 |    1    | <a href="https://www.pcbway.com/">LINK</a> |
| Shipping (added)     | $24.42 |         |      |
| Sales Tax (added)    | $4.26  |         |      |
| Discounts (added)    | -$24.97|         |      |
| Grand Total          | $106.20|         |      |

*There are descriptions of each product in the BOM.csv file and also descriptions of where the shipping/tax costs are from...*

*I'll also need about $5 for shipping of my 3D printed cases from print legion :3*










