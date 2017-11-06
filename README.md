# GPIO_rpi
This is a Custom GPIO Driver for RapberryPi ZeroW

**This project is still under development**

This is a GPIO Driver developed to manage 6 GPIOS. It will take in charge only the six ports needed and will return an octet containing the state of each GPIO used.

This driver is then implemented in our custom OS in the raspberry. The buffer resulted will be send in the local server using a TCP protocol by the WiFi module already implemented in the Rpi0W.

## 1. Development Environment
Os : Ubuntu MATE 16.04  
IDE : Visual Code Studio

## 2. Hardware used
-Raspberry Pi0W connected to a Screen and a Keyboard.

-6 buttons remote manufactured by us.

