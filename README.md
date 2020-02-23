# F-91wa
-------------------
to save work to github, follow these steps
1. using command prompt, cd into your directory of choice
2. git add -a
  this adds all the changes you made to the directory
3. git commit -m" (place message here)  "
  this commits the changes you made to the system along with a message
4. git push
  this pushes the changes to the github website to be saved
------------------
Notes from Week 4
Relevant pins on an accelerometer
 - VCC, GND, SCL, SDA
  - SCL and SDA are ICC whic hare digital interfaces
  - ADC 0-1023
    - analog to digital conversations
    - 0-2V
    - 10 bits is 2^10 which is 0-1023
    
Accel VCC - 3.3 V Arduino
  - GND - GND
  - SCL - SCL
  - SDA - SDA

-------------------
Features
  - Core
    - Time 12/24 hr
      - 1a button sets 
      - 1b button changes hour
      - 1c button changes minutes
      - 1d button changes seconds
    - date/day of the week
      - 1a button sets
      - 1b button changes date
      - 1c button changes day
    - alarm clock
      - 1a button sets
      - 1b button changes hour
      - 1c button changes minutes
      - 1d button changes seconds
    - stopwatch
      - 1a button starts/stops
      - 1b button laps
    - use 1b button to move around menus
  - Additionally Functionality
    - Temperature and Humidity Sensor
    - speaker/vibration
-----------------------
Some potentially useful links
1. https://randomnerdtutorials.com/guide-for-oled-display-with-arduino/
2. 
