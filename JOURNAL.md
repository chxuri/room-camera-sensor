
**Description**  
---   
**title**: Room Camera Sensor  
**author**: Rimma  
**description**: Room camera sensor that send a notification to my phone when
someone enters my room, as well as identifies who they are (through height)
and playes an automated voice message!  
**created_at**: 2025-07-02  

<br/>

# July 6: LOTS of research on circuits and components!

I went to khanacademy and watched a bunch of videos in their electrical engineering 
section, since I wanted to be fully comfortable with working with different kinds
of circuits, as well as have more information about current direction and voltage. I 
also did research about a lot of the components I'm planning on using, such as cameras, motion sensors, and the microcontroller. I'm thinking of using a raspberry pi 5 but I feel like that might be too expensive so I'll probably do more research on that too. I looked into YOLO since I want to incorporate object detection into my project, so I'll see how that works with other microcontrollers apart from the raspberry pi.

(ps: I don't know how to make links to my progress pictures so I'll be using imgur to add them!)

<img src="https://i.imgur.com/CULSlx9.png" width="40%" height="40%" alt="khanacademy courses pt1">
<img src="https://i.imgur.com/HiUPUYP.png" width="40%" height="40%" alt="khanacademy courses pt2">

**Total time spent: 3h**

# July 7: More research on components and began making schematic

I've found majority of the components that I am going to use today! I'm planning on making two parts of my project: the first part will allow a person who knows the pin (me) to enter it into a macropad sort of thing to disable the camera turning on/sending a notification to my phone. I'm planning to use an xiao rp2040 for it along with a distance sensor, and maybe an OLED if I have time to display the numbers pressed. This will be a pcb. The other part will be placed on the corner of my room made from a RaspberryPi Zero 2 with a camera module. I'm still trying to figure out how to make the xiao rp2040 send a remote signal to the raspi to turn it on/off, but I guess I can always do it with a wire...


<img src="https://i.imgur.com/hKV9KRm.png" width="40%" height="40%" alt="schematic work">
<img src="https://i.imgur.com/Zl4s0Sl.png" width="40%" height="40%" alt="google doc of components">

**Total time spent: 4h**

# July 14: Finishing pcb schematic + editor and planning location of parts
Ended up not doing much for like a week because of the squeak ysws but I did do some research about how to send the data from the xiao rp2040 (i was calling it esp32 this entire time so ill fix that in this commit lol) and I'm probably going to use KMK, though ill have to learn more about that. I finished the schematic of my number pad that I'll be mounting on the wall and arranged it in the pcb editor. it was kind of hard finding the right footprints for the diodes, but I think i figured them out. I added some fun silkscreen because why not (idc that itll be hidden by the 3d cover its my pcb). I also loosely sketched out a plan of where all the parts will be in situated in my room and what I want them all to do since my ideas have been kind of all over the place. I'll try to learn a bit more about programming on arduinos since i barely know anything and start making a basic outline for the code since I know i'll need that for the future.

<img src="https://i.imgur.com/UhFHWSi.png" width="40%" height="40%" alt="schematic">
<img src="https://i.imgur.com/dwqTqwN.png" width="40%" height="40%" alt="pcb editor">
<img src="https://i.imgur.com/lQOAwBH.jpeg" width="40%" height="40%" alt="basic sketch of parts">


**Total time spent: 3h**


# July 14: Learning more about arduino programming 
I did a little bit more research about the xiao rp2040 microcontroller and realized it doesn't support wifi/bluetooth and it would honestly be a pain to transmit data to the raspi. I decided to switch to the xiao esp32 which is quite close price wise, but it'll be easeir to connect to wifi which I'm happy about. I also began doing research about writing the firmware for the esp32, and I think I've begun to remember some basics about arduino. I began making a rough outline of what I will do for the code, and tested some on online simulations. I'm also considering not using a Raspberry Pi Zero 2 since there might be something a bit simpler out there. I'm willing to do some more research. Also considering adding an OLED screen to the numpad so that you can see which password is being written in. Not necessary but kind of a finishing touch if I have time!

<img src="https://i.imgur.com/z9yrmny.png" width="40%" height="40%" alt="beginning of code">

**Total time spent: 45 mins**


# July 17 & 18: Updating schematic with new components + beginning 3D case
I realized that the best way for me to approach this project would be to leave the code untill the end since Highway is technically a hardware ysws. So I ended up focusing a lot more on the physical components and decided to make the number pad a lot more interesting! I updated the schematic to have pin headers and pin sockets so that it would be easier to attatch the OLED and the pir motion sensor. It was kind of difficult to figure out which pins would go where (like the SCL and SDA), since so far I'd only been working with gpio pins. The routing took a little while and I wasn't sure if it would work since with the stuff I added everything started looking a lot messier. I posted pics of my schematic and pcb editor into slack and they got approved! I also realized that it would be a good idea to get myself some female to female wires into my list of materials so I wouldn't have to be forced to put the pir monitor right on top of the pcb. I started making the 3D case for the number pad, though fusion took a little while to set up since 1. I don't really make 3D models often, and 2. I used onshape last time. It actually wasn't that bad and I feel like I made some decent progress these past couple days!

<img src="https://i.imgur.com/XZkucs8.png" width="40%" height="40%" alt="finished pcb editor">
<img src="https://i.imgur.com/r2iHJbG.png" width="40%" height="40%" alt="finished pcb schematic">
<img src="https://i.imgur.com/hkXibef.png" width="40%" height="40%" alt="3D model base">

**Total time spent: 3h**



# July 19: Continuing 3D case and finding better parts
I finished the guide that was posted for hackpad so I could have an idea of what I was doing, and then I started making the 3d model of my number pad. The hardest part was probably making everything fit, since I have 12 keys on my numpad and I had to joint every single one of them along with the keycaps. Finding 3D models of everything was also quite challenging because some of the parts I sourced were hard to find replicas of. I also realized that AliExpress was probably a better place for me to source my parts, so I worked a little bit on making my BOM cheaper and choosing better components. The motion sensor in particular was hard to find since I didn't want one that would need > 3.3V energy (which is how much the esp32 can provide), and also making sure that it wasn't too big. When I imported the 3D model into fusion though, it overlapped slightly with the keys. It doesn't acutally touch them so it's not that big of a problem but it pisses me off so bad I'll have to fix it tomorrow T-T. Also with the new pir the GND and OUT pins are switched so I'll have to update my schematic for that too... hardware is hard guys. 
(uhh i looked at the model again and lwk idk if i want to fix the overlap with keys like i just spent an hour trying to center them fhwhfhewjfbjwebfdjed im so done with fusion)

<img src="https://i.imgur.com/iluV6jj.png" width="40%" height="40%" alt="3D model so far">
<img src="https://i.imgur.com/WOMw0Bm.png" width="40%" height="40%" alt="updates on materials list">


**Total time spent: 4h (me eyes hurty)**

