
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

![khanacademy courses pt1](https://i.imgur.com/CULSlx9.png)
![khanacademy courses pt2](https://i.imgur.com/HiUPUYP.png)

**Total time spent: 3h**

# July 7: More research on components and began making schematic

I've found majority of the components that I am going to use today! I'm planning on making two parts of my project: the first part will allow a person who knows the pin (me) to enter it into a macropad sort of thing to disable the camera turning on/sending a notification to my phone. I'm planning to use an xiao rp2040 for it along with a distance sensor, and maybe an OLED if I have time to display the numbers pressed. This will be a pcb. The other part will be placed on the corner of my room made from a RaspberryPi Zero 2 with a camera module. I'm still trying to figure out how to make the xiao rp2040 send a remote signal to the raspi to turn it on/off, but I guess I can always do it with a wire...


![schematic work](https://i.imgur.com/hKV9KRm.png)
![google doc of components](https://i.imgur.com/Zl4s0Sl.png)

**Total time spent: 4h**

# July 14: Finishing pcb schematic + editor and planning location of parts
Ended up not doing much for like a week because of the squeak ysws but I did do some research about how to send the data from the xiao rp2040 (i was calling it esp32 this entire time so ill fix that in this commit lol) and I'm probably going to use KMK, though ill have to learn more about that. I finished the schematic of my number pad that I'll be mounting on the wall and arranged it in the pcb editor. it was kind of hard finding the right footprints for the diodes, but I think i figured them out. I added some fun silkscreen because why not (idc that itll be hidden by the 3d cover its my pcb). I also loosely sketched out a plan of where all the parts will be in situated in my room and what I want them all to do since my ideas have been kind of all over the place. I'll try to learn a bit more about programming on arduinos since i barely know anything and start making a basic outline for the code since I know i'll need that for the future.


![schematic](https://i.imgur.com/UhFHWSi.png)
![pcb editor](https://i.imgur.com/dwqTqwN.png)
<img src="https://i.imgur.com/lQOAwBH.jpeg" width="50%" height="50%" alt="basic sketch of parts">


**Total time spent: 3h**

