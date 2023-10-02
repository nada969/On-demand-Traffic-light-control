# On-demand-Traffic-light-control
# Brief
Traffic lights are devices placed at road intersections, crosswalks, and various points to manage traffic flow. They typically feature three signals that convey instructions to drivers and pedestrians using colors and symbols, including arrows and bicycle icons. In the standard configuration, the traffic light displays colors vertically or horizontally in the order of red, yellow, and green.
The objective here is to create a traffic light system that includes a pedestrian-controlled crosswalk button. When pedestrians intend to cross the street, they can use the crosswalk button to signal the traffic light system. In response, the traffic light adjusts its signals, ensuring that pedestrians have ample time to safely cross the road.
# System Design
  # Hardware:
- AVR ATmega 32.
- Green and Yellow and Red LEDs.
- Push Button.
  # Software 
  - In normal mode:
    - Cars' LEDs will be changed every five seconds starting from Green then yellow then red then yellow then Green.
    - The Yellow LED will blink for five seconds before moving to Green or Red LEDs.
  - In pedestrian mode:
    - Change from normal mode to pedestrian mode when the pedestrian button is pressed.
    - If pressed when the cars' Red LED is on, the pedestrian's Green LED and the cars' Red LEDs will be on for five seconds, this means that pedestrians can cross the street while the pedestrian's Green LED is on.
    - If pressed when the cars' Green LED is on or the cars' Yellow LED is blinking, the pedestrian Red LED will be on then both Yellow LEDs start to blink for five seconds, then the cars' Red LED and pedestrian Green LEDs are on for five seconds, this means that pedestrian must wait until the Green LED is on.
    - At the end of the two states, the cars' Red LED will be off and both Yellow LEDs start blinking for 5 seconds and the pedestrian's Green LED is still on.
    - After the five seconds the pedestrian Green LED will be off and both the pedestrian Red LED and the cars' Green LED will be on.
    - Traffic lights signals are going to the normal mode again.
   
  # I used:
  - Microship Studio
  - Proteus
  
