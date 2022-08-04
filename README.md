# IR_remote_home_automation
Ir remote based home automation system, which can be maulalled controlled by an IR remote.


libraries to be installed:
1. IRremote

Components Required:
1. Arduino
2. IR remote reciever or TSOP reciever
3. 2 channel Relay
4. Jump wires

Procedure:
1. Goto sketch -> include library -> manage libraries.
2. Now search for "IRremote" by Armin Joachimsmeyer, then click on install.
3. Goto => https://github.com/vamshi6763/IR_remote_button_codes_reading , run this program and get the button codes of the remote.
4. Include that codes into the program.
5. Upload the Program by selecting the correct Serial port.
6. Give connections according to the below circuit diagram.
7. For any issues, you can open Serial monitor and check the status of relays and Remote.


Circuit Diagram:
![tsop home automation](https://user-images.githubusercontent.com/101927825/182855333-84652f79-56cf-4ba1-8b5e-e61ef7faf7ae.jpg)




    NOTE: Same code will work for most of the arduino boards and it will also work for ESP8266 and ESP32. 
    Only the connections and pins differ.
