# IOT
TOUCHLESS FAUCET WITH AUTOMATIC DOOR CONTROL SYSTEM FOR COVID-19 USING IOT
✔ Abstract
✔ Existing System and Proposed System
✔ Application
✔ System Requirements
✔ Future Scope
✔ Conclusion
✔ Report

ABSTRACT:

- - > To make sure everybody sanitizes their hands.
- - > To monitor the people who have normal body temperature.
- - > To provide access only if the above constraints are satisfied.
- - > By the above methods, we control the spread of coronavirus.

PROBLEM STATEMENT:

- - >  Quarantine alone may not be sufficient to prevent the spread of covid 19,hand hygiene is also quite necessary.
- - >  If someone touches the surface which was touched by a virus carrier, there is a high chance that the person could also get infected and the spread is also increased.
- - >  Corona virus could exist on a contaminated surface from several hours to days depending on the environmental conditions such as humidity and temperature.

EXISTING SYSTEM:

- - > The Existing system contains, the automatic door opening system and automatic water dispensing faucet, but the temperature detecting facility is not provided.

PROPOSED SYSTEM:

- - > The person will be insisted to wash their hands for 20s, when the detected temperature is normal, the lcd will display “you are safe now” then door will be opened for 10 seconds.   
- - > If the detected temperature is high, the lcd monitor will display “your temperature is  high” and the door will not be opened.
- - > People who satisfy the above constraints(Normal body temperature ,Sanitized hand for 20 sec) will be permitted in.
- - > he person will be insisted to wash their hands for 20s, when the detected temperature is normal, the lcd will display “you are safe now” then door will be opened for 10 seconds.   
- - > If the detected temperature is high, the lcd monitor will display “your temperature is  high” and the door will not be opened.
- - > People who satisfy the above constraints(Normal body temperature ,Sanitized hand for 20 sec) will be permitted in.

PROPOSED SYSTEM-Pros:

- - > This model could be used in places with automatic sliding doors or automatic door system, by replacing the single channel relay module with solid state relay module.
- - > Because of its modern appearance, it attracts attention which can increase hand hygiene compliance.
- - > It is very easy to install and use, particularly for people that struggle to reach over countertops to access the dispenser.
- - > It delivers a standardized dose of hand soap or sanitizer.
- - > It eliminates common contact point where germs can be transferred.
- - > Contactless hand sanitizer dispensers usually have a sleek and stylish design. They also add a modern appeal to places they are installed in.
- - > Besides hand sanitizer, the dispenser's structure also works for other liquids like lotion, laundry detergent etc.
- - > The wide range of responsibilities widen the use of dispenser to various locations.

APPLICATION:

This project can be installed at every crowded place such as
  Malls
  Railway stations
  Education premises 
  Industries
  Hotels
  Bus terminals

SYSTEM REQUIREMENTS:

- - > Software Requirements
Platform   	 :	Tinkercad
Technology       :	IOT
Languages         :	C
Software	:	Arduino IDE

- - > Hardware Requirements
 Ultrasonic sensor
 Arduino UNO
 LM35 Temperature Sensor
 Servo motor
 Relay module
 LCD Display
 Small water pump
 Buck converter

IN FUTURE:

- - > Face mask detection and social distancing using  a neural network model is to be created with sensor 
- - > This system can be integrated with people, standing in a queue whether they are maintaining social distance between them.
- - >  The above can be achieved by, fixing a sensor within a specific range, if they are not following buzzer sound is raised to alert them. 
- - >  And we can use ultrasonic sensor to detect the space between the people. If it is less than 3metres in distance, a buzzer will be given 
- - >  Also we can allow limited number of people to be in a hall if the number of people exceeds the limited number of people

CONCLUSION:

- - > By installing this prototype in real time, the spread of covid virus can be literally minimized. It is not expected that how soon we will get out of this pandemic. 
- - > Hence maintaining hygiene is very important to lead a happy and healthy life. It is our responsibility to protect ourselves and our neighborhood during this pandemic situation by maintaining hygiene

REPORTS:

- - > All the components are interfaced with the Arduino UNO, a microcontroller unit and the code required for ultrasonic sensor, LM35 temperature sensor, servo motor, LCD and relay module is loaded into the microcontroller via Arduino IDE. Figure shows the complete hardware setup of touchless faucet with door control system.

BLOCK DIAGRAM AND ARCHITECTURE:

![image](https://github.com/RishikaE/IOT/assets/119498804/8e66a358-39b4-4955-9027-1520df0afba3)


SIMULATION MODEL:

![image](https://github.com/RishikaE/IOT/assets/119498804/b49d293a-5ea4-4c86-a06f-7d63206a2b9e)


SAMPLE OUTPUT - 

![image](https://github.com/RishikaE/IOT/assets/119498804/af5aa232-486f-4925-b950-b24d0272f949)


![image](https://github.com/RishikaE/IOT/assets/119498804/da000dff-27fa-4cfc-b6ba-498c0f792705)


CASE 1:

- - > When ultrasonic sensor detects the target, it sends signal to the Arduino via echo pin and then the LCD displays the below status for 10 seconds. As per the given condition the sanitizer is let out of the faucet for five seconds through submersible pump which is connected to the relay.

![image](https://github.com/RishikaE/IOT/assets/119498804/36131df3-180b-4897-8f4c-a99c51ad18b4)

CASE 2:

- - > When the temperature sensed by LM35 is normal then the servo motor is operated for the opening of door and the below status is displayed on LCD.

![image](https://github.com/RishikaE/IOT/assets/119498804/05dff5b8-8022-41f2-b712-49dc5207ba69)

CASE 3:

- - > When the temperature of the person is high then the servo motor does not operate and the door is not opened. And then the LCD displays the below status.

![image](https://github.com/RishikaE/IOT/assets/119498804/297f735a-bd04-418c-9c39-6a86edb9aef7)

