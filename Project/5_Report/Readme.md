# Project - Embedded System For Robotic Arm And UGV

Prepared By: - Ghanamrut.V.Marathe

Version: - 1.0

# **Contents:-**

**1) Abstract**

**2)** [**Requirements**](#_Toc96252514)

**A)** [**High Level Requirements**](#_Toc96252515)

**B)**  [**Low Level Requirements**](#_Toc96252516)

**3)** [**Components Details**](#_Toc96252509)

**A) UGV Simulation**
**B) Arm Simulation**

**4) S.W.O.T Analysis**

**5) 5 Ws 1H**

**6) Structural Design**

**Block Diagram**

**A)UGV**

**B)Robotic Arm**

**7) Behavioral Design**

**Flowchart**

**A) UGV**

**B) Robotic Arm**

**8) Implementation**

**9) Test Plan and Output**

**10) Applications**

**11) Modifications According To Application**

# 

# 

# 1.  **Abstract**: -

Automation and Robotics sector is an advanced and the fastest growing sector in
the industry. Basic products made in robotics would be manipulators, UAVs
(Drones, Quadcopters), UGVs, Medical imaging devices, surgical tools, etc.

Now, there is a vast market of applications for UGVs of Payloads, macro space
movement use, guiding, military uses, etc. And also for end effectors with
robotic arm designs that replicate certain movements of a human hand.

A simple integration of an Unmanned Ground Vehicle (UGV) and a five finger
independent Robotic Arm shall be made using embedded systems circuit design
using various microprocessor (Arduino Uno)and sensors (Ultrasonic,
Potentiometer, Joystick) to facilitate wheel and finger, wrist movement.

# 2.  **Requirements: -**

# **A) High Level Requirements: -**

| ID   | Description                                                                                                                                                                     |
|------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| HR01 | The Joystick sensor Values read by Arduino shall be taken by DC motor and move according to the direction of joystick movement.                                                 |
| HR02 | Servo Motor shall follow the potentiometer and start the movement whether up or down depending on the potentiometer in case of Wrist                                            |
| HR03 | The Servo Motor should do a full 90 degree movement so the wrist can completely move.                                                                                           |
| HR04 | The Finger movement will be captured by potentiometer and then accordingly the servo motors of each finger shall be able to move for the specific setting of the potentiometer. |
| HR05 | The Ultrasonic Sensor shall measure distance between UGV front part and object as the UGV is set in motion.                                                                     |

# **B) Low Level Requirements: -**

| ID   | Description                                                                                                                                                                                                                                                                                                                                                   |
|------|---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| LH01 | When joystick is not active DC motor shall not start. A. For forward motion (when Joystick moves upward) DC motor 1 anti-clockwise and motor 2 clockwise vice versa for backward motion. B. For moving right (when Joystick moves to the right) both motors move in clockwise direction and anticlockwise for moving left (when Joystick moves to the left).  |
| LH02 | A. For vertical upward movement when potentiometer is at max voltage input.(5V) B. For resting/horizontal positon when potentiometer is at medium voltage input.(2.5V) C. To make the servo return to default position which is vertically downward w.r.t wrist when potentiometer is at 0 voltage input.                                                     |
| LH03 | W.R.T finger movement: -Map potentiometer value with correct range for servo motor and use constrain to keep it in required range (0-180 degree).Keeping a delay to wait till servo motor reaches desired position.                                                                                                                                           |
| LH04 | The LCD Display shall show the distance between object and UGV front part as measured by Ultrasonic Sensor                                                                                                                                                                                                                                                    |

# 3.  **Component Details: -**

1.  UGV simulation:-

![Screenshot (1141)](https://user-images.githubusercontent.com/98812321/157239055-c3db479e-e0d9-49cf-894d-e71ea4b930f5.png)


2.  Arm simulation:-

![Screenshot (1140)](https://user-images.githubusercontent.com/98812321/157239147-4fc48031-c8a3-4537-93d7-0ce8bca85709.png)

1.  Microcontroller: -

    Arduino Uno is a microcontroller board based on the ATmega328P. It has 14
    digital input/output pins (of which 6 can be used as PWM outputs), 6 analog
    inputs, a 16 MHz ceramic resonator (CSTCE16M0V53-R0), a USB connection, a
    power jack, an ICSP header and a reset button. It contains everything needed
    to support the microcontroller; simply connect it to a computer with a USB
    cable or power it with an AC-to-DC adapter or battery to get started.

2.  Joystick Sensor(KY023): -

    X and Y position of the joystick, are output as analog voltage on the output
    pins. X and Y position of the joystick are output as analog voltage on the
    output pins.Here it will be used to sense which movement of wheel the user
    wants in case of UGV thereby actuating the dc motor accordingly

3.  Potentiometer as a Position Sensor:-

    A potentiometer is a three-terminal resistor with a sliding or rotating
    contact that forms an adjustable voltage divider. If only two terminals are
    used, one end and the wiper, it acts as a variable resistor or rheostat.
    Here it will be used as a position sensor as its voltage input shall decide
    the wrist movement as well as independent finger movement, accordingly
    actuating respective servo motors.

4.  Servo Motor:-

    A servomotor (or servo motor) is a rotary actuator or linear actuator that
    allows for precise control of angular or linear position, velocity and
    acceleration. Here it is used to move the wrist and independent finger
    movements.

5.  DC Motor:-

    A DC motor is a type of electric machine that converts electrical energy
    into mechanical energy and is used to provide rotary actuation for various
    purposes. Here it is used to move the wheels of the UGV.

6.  Ultrasonic Sensor(HC-SR04):-

    An ultrasonic sensor is an instrument that measures the distance to an
    object using ultrasonic sound waves. An ultrasonic sensor uses a transducer
    to send and receive ultrasonic pulses that relay back information about an
    object's proximity. Here it is used to sense obstacle to alert user w.r.t
    the UGV movement.

# 4. S.W.O.T Analysis: -

**![Screenshot (1037)](https://user-images.githubusercontent.com/98812321/155835256-7b936db2-d088-49a0-963b-0f28cf3f5b0a.png)**

-   **Strength: -**
1.  **Reduced Task Time: -** The required time for a simple pick and place task
    or a weed plugging task or any other simple task that the system is used for
    is very less compared to a human being involved in the same.

2.  **Cost Effective: -** The embedded system design is very cost effective as
    microcontrollers demand increases and cost decreases day by day giving
    further advantage over high cost and complex machinery.

3.  **Greater Precision: -** A robotic arm gives higher precision than a human
    arm in various tasks such as minute incisions for surgeries, bomb defusal,
    in firecracker industry, etc where the slightest error of a human hand can
    pose a greater risk.

4.  **Adaptability: -** The system can be fitted with the necessary sensors and
    actuators and can be used for various task specific applications just by
    making small changes.

5.  **User Friendly: -** Every attempt of making an embedded system is always
    towards creating a automatic more user friendly tool.

-   **Weakness: -**

1.  **Limitations: -** The System has its limitations when it comes to handling
    a certain amount of weight for carrying an object and in certain cases power
    autonomy issues might be faced but these can be solved through making
    application specific system.

2.  **Supervision Required: -** In certain situations like medical surgeries
    there is always a certain amount of risk and therefore robotic arm systems
    cannot be left fully on their own and need supervision.

3.  **Movement Restriction: -** The system when made with certain limitations
    such as non-inclusion of certain actuators or sensors can deprive it of
    certain movements for example the actual degree of freedom of a human arm is
    difficult to achieve without using certain rotary actuators.

-   **Threat: -**

1.  **Competition to Human Labor: -** As technology advances the human labor
    need reduces and leads to unemployment in various sectors of certain
    industries which is in a way inevitable.

2.  **Human Robot Work Safety: -** The risks of hardware failure or wiring
    issues, etc could lead to different scenarios that pose certain safety
    concerns.

-   **Opportunities: -**

1.  **Boom In Automation Industry: -** The advancement in technology promoting
    more use of automation and robotics is a golden opportunity for such
    projects.

2.  **Increased Availability: -** The demand in robotic equipment and embedded
    system hardware and software required has risen highly leading to their
    availability in the market at low costs.

# 5.  **5 Ws And 1 H: -**

1.  **Why: -** The Project is made to achieve the embedded system design for a
    robotic arm mounted on a UGV used for various functions and applications.

2.  **What: -** The Project utilizes Microcontrollers, various types of analog
    and digital sensors such as Joystick sensor and Ultrasonic sensor to actuate
    different motors which facilitate the movement of the UGV as well as the
    robotic arm.

3.  **Who: -** The Project is aimed for application in sectors such as Medical,
    Military, Industrial, Agriculture and Transport.

4.  **When: -** The Project shall be completed in 4 weeks??? time.

5.  **Where: -** The Project shall be made on Simulide software and visual
    studio code.

6.  **How: -** The Project shall be completed step by step capturing the
    requirements, sketching out the block diagrams and flowchart, deciding the
    components and code design, building the circuit, utilize the code for the
    circuit and upon completion of these steps finally the project shall achieve
    a successful simulation of an embedded system design for a robotic arm
    mounted on a UGV.


# 6.  **Structural Design**
**Block Diagram**
A.  **UGV: -**


![Screenshot (1041)](https://user-images.githubusercontent.com/98812321/155835923-98c1ef07-f2e3-4d22-bc29-32d09ad25b23.png)



Using one Arduino UNO for the operation of DC motors attached at the left and
right wheels for their up, down, left, right movement which are controlled by
the joystick. The Arduino is also used for the Ultrasonic sensor to display the
distance of an object from the UGV.

B.  **Robotic Arm: -**


![Screenshot (1040)](https://user-images.githubusercontent.com/98812321/155835932-c01f86d0-5c1a-406c-9394-fe3ff2fb958d.png)



Using two Arduino UNO:-

1.  For the operation of the wrist (vertical up and down movement) using a
    potentiometer and one servo motor. 2. For the operation of five finger
    independent movement using five potentiometers for every angle movement of a
    finger and five servo motors variated by the use of the potentiometers.

# 7.  **Behavoiral Design**

**Flowchart**


A.  **UGV: -**

![Flowchart](https://user-images.githubusercontent.com/98812321/155835354-f728a72a-9f78-4cad-a101-0fa113aa73e4.png)

B.  **Robotic Arm: -**

 ![Flowchart2 (1)](https://user-images.githubusercontent.com/98812321/155835693-a36a2d3f-e9fc-4a2a-a97d-948a718dd908.png)
    
    
 ![Flowchart1](https://user-images.githubusercontent.com/98812321/155835720-06189d8b-1286-4466-a5fd-1ee68d52c0d6.png)

# 8. Implementation: -
## The Project simulation is done in Simulide software using Arduino code written in Arduino Ide. There are three code files for each Arduino Uno 
## 1) For UGV Simulation 
## 2)For Wrist Movement Simulation 
## 3)Finger Movement Simulation.
## The UGV , Wrist Movement , and Finger movement folders respectively have the .ino, .hex, and .ino files for the codes inside them
## Circuit Diagrams And Code: -
### 1)	UGV
#### Circuit Diagram: -
 ![image](https://user-images.githubusercontent.com/98812321/157229075-587cff09-bda4-4432-950c-0c2f705bdb54.png)



#### Code:- 
#include <LiquidCrystal.h> 

#include <DC_Motor.h>

#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04 

#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

LiquidCrystal lcd(0,1,4,7,8,10);

// defines variables

const int pwm = 13;

const int in_1 = 9;

const int in_2 = 11;

const int pwm1 = 12 ;

const int in_3 = 5 ;

const int in_4 = 6;

//For providing logic to L298 IC to choose the direction of the DC motor 


void setup()

{

  lcd.begin(16,2);
  
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  
  Serial.begin(9600);
  
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
  
  Serial.println("with Arduino UNO R3");
  
  pinMode(A0,INPUT);
  
  pinMode(A1,INPUT);
 
  pinMode(pwm,OUTPUT) ; 
  
  pinMode(pwm1,OUTPUT);//we have to set PWM pin as output
  
  pinMode(in_1,OUTPUT) ;   //Logic pins are also set as output
  
  pinMode(in_2,OUTPUT) ;
  
  pinMode(in_3,OUTPUT);   //Logic pins are also set as output
  
  pinMode(in_4,OUTPUT);
  
  
}

long duration; // variable for the duration of sound wave travel

int distance; // variable for the distance measurement

void loop()

{

   lcd.clear();
   
   lcd.setCursor(0, 0);
   
   lcd.print("Distance : ");
   
   lcd.print(distance);
   
   lcd.println("cm\n ");
   
   if(distance<=20 && distance>0)
   
     lcd.print("\n Warning : Obstacle");
     
   else if(distance>20 && distance>0)
   
     lcd.print("\n Path Clear");
     
   delay(1000);
   
   digitalWrite(trigPin, LOW);
   
   delayMicroseconds(2);
   
// Sets the trigPin HIGH (ACTIVE) for 10 microseconds

   digitalWrite(trigPin, HIGH);
   
   delayMicroseconds(10);
   
   digitalWrite(trigPin, LOW);
   
// Reads the echoPin, returns the sound wave travel time in microseconds

   duration = pulseIn(echoPin, HIGH);
   
// Calculating the distance

   distance = (duration/2)/29.1; //Calculate Distance of object 
   
   int x_value,y_value; //xvalue for up and down movement and y value for left and right movement of josytick 
   
   x_value = analogRead(A0);
   
  
   if((x_value>=490) && (x_value<=530)) //when joystick is in the centre
   
   {
   
//For no movement, in_1= High, in_2= High

//DC Motor 1

    digitalWrite(in_1,HIGH) ;
    
    digitalWrite(in_2,HIGH) ;
    
    digitalWrite(pwm,255) ;
    
    
//DC Motor 2

    digitalWrite(in_3,HIGH) ;
    
    digitalWrite(in_4,HIGH) ;
    
    digitalWrite(pwm1,255) ;
    
  }
  
  if(x_value>550) //when joystick is moved Up
  
   {
   
//For Clock wise motion , in_1 = High , in_2 = Low

//DC Motor 1

    digitalWrite(in_1,HIGH) ;
    
    digitalWrite(in_2,LOW) ;
    
    digitalWrite(pwm,255) ;    
    
//For Anti-clock wise motion , in_1 = High , in_2 = Low

//DC Motor 2

    digitalWrite(in_3,LOW) ;
    
    digitalWrite(in_4,HIGH) ;
    
    digitalWrite(pwm1,255) ;
    
  }
  
  
 if(x_value<470) //when joystick is moved down
 
  {
  
//For Clock wise motion , in_1 = High , in_2 = Low

//DC Motor 1

    digitalWrite(in_1,LOW) ;
    
    digitalWrite(in_2,HIGH) ;
    
    digitalWrite(pwm,255) ;
    
//For Anti-clock wise motion , in_1 = High , in_2 = Low

//DC Motor 2

    digitalWrite(in_3,HIGH) ;
    
    digitalWrite(in_4,LOW) ;
    
    digitalWrite(pwm1,255) ;
    
  }
  
/*setting pwm of the motor to 255
we can change the speed of rotaion
by chaning pwm input but we are only
using arduino so we are using higest
value to driver the motor  */

y_value = analogRead(A1);


 if(y_value<250) //when joystick is moved to the left
 
  {
  
//For Anti Clock-wise motion - IN_1 = LOW , IN_2 = HIGH

//DC Motor1

   digitalWrite(in_1,LOW) ;
   
   digitalWrite(in_2,HIGH) ;
   
   digitalWrite(pwm,255) ;
   
//DC Motor 2

   digitalWrite(in_3,LOW) ;
   
   digitalWrite(in_4,HIGH) ;
   
   digitalWrite(pwm1,255) ;
   
 }
 
 if(y_value>750) ////when joystick is moved to the right
 
  {
  
 //DC Motor 1
 
   digitalWrite(in_1,HIGH) ;
   
   digitalWrite(in_2,LOW) ;
   
   digitalWrite(pwm,255) ;
      
//DC Motor 2
   digitalWrite(in_3,HIGH) ;
   digitalWrite(in_4,LOW) ;
   digitalWrite(pwm1,255) ;
   
 }
 
}

















### 2)	 Wrist Movement: -
#### Circuit Diagram: -
 ![image](https://user-images.githubusercontent.com/98812321/157229184-3ac001f8-3851-4876-a180-313e4a85ced1.png)


#### Code : - 
#include <Servo.h>

Servo wrist;  

int potpin1 = 0;  

int val1; 

void setup()

{

  wrist.attach(3);  
  
}



void loop()

{

  //Mapping the servo motor motion according to the voltage value from potentiometer and achieve accurate angle movement
  
  val1 = analogRead(potpin1);      
  
  val1 = map(val1, 0, 1023, 0, 185 );
  
  wrist.write(val1);    
  
}

### 3)	Finger Movement: -
#### Circuit Diagram: -
 ![image](https://user-images.githubusercontent.com/98812321/157229224-9097c90d-46f5-4684-870f-fd6219915c04.png)


#### Code : - 
#include <Servo.h>

//Declaring Variables for servo motors, potentiometers and the value from the potentiometer

Servo index_finger;  

int potpin1 = 0;  

int val1;    

Servo middle_finger;  

int potpin2 = 1;  

int val2;    

Servo ring_finger;  

int potpin3 = 2;  

int val3;    

Servo little_finger;

int potpin4 = 3;  

int val4;    

Servo thumb;

int potpin5 = 4;  

int val5;

void setup()

{

  index_finger.attach(3);  
  
  middle_finger.attach(5);  
  
  ring_finger.attach(6);  
  
  little_finger.attach(9);  
  
  thumb.attach(10);  
  
}


void loop()

{

  //Mapping the servo motor motion according to the voltage value from potentiometer and achieve accurate angle movement
  
  val1 = analogRead(potpin1);      
  
  val1 = map(val1, 0, 1023, 0, 185 );
  
  index_finger.write(val1);    
  
  val2 = analogRead(potpin2);      
  
  val2 = map(val2, 0, 1023, 0, 185 );
  
  middle_finger.write(val2);   
  
  val3 = analogRead(potpin3);    
  
  val3 = map(val3, 0, 1023, 0, 185 );
  
  ring_finger.write(val3);        
  
  val4 = analogRead(potpin4);      
  
  val4 = map(val4, 0, 1023, 0, 185 );
  
  little_finger.write(val4);          
  
  val5 = analogRead(potpin5);  
  
  val5 = map(val5, 0, 1023, 0, 185 );
  
  thumb.write(val5);          
  

}

???	These Codes are loaded onto the respective three Arduinos by ???Load Firmware??? Option on Simulide and then the Simulations are run to derive needed output.


# 9. Test Plan And Output: -
![WhatsApp Image 2022-03-08 at 10 36 22 PM](https://user-images.githubusercontent.com/98812321/157291529-a1c4307e-b934-4a8e-ad70-bafaf1b13099.jpeg)


# Simulation Images And Videos
## Videos Have been uploaded in the 6_ImagesAndVideos folder 
# 1)UGV
## A) When Distance of nearest object i.e input taken from potentiometer is less than 20 cm

![Screenshot (1152)](https://user-images.githubusercontent.com/98812321/157251149-bb7658a6-d158-475b-bdf7-35cc30f662c6.png)

## B) When Distance of nearest object i.e input taken from potentiometer is greater than 20 cm

![Screenshot (1154)](https://user-images.githubusercontent.com/98812321/157251299-976b0f3a-5a36-49b3-beff-7cc5e3f9f8d7.png)

## C) When there is no input from potentiometer

![Screenshot (1153)](https://user-images.githubusercontent.com/98812321/157251372-ad1d03ee-6e3c-4b26-b1a0-3bc01fcf42d3.png)

## D) When the Joystick is moved upward the move as follows :- DC motor 1 clockwise and DC motor 2 anti-clockwise hence UGV moves forward Note:- this movement is recognisable better in the simulation video

![Screenshot (1155)](https://user-images.githubusercontent.com/98812321/157251663-deea5c7d-1ef3-45ee-b3c1-76b990fffc22.png)

## D) When the Joystick is moved downward the motors move as follows :- DC motor 2 clockwise and DC motor 1 anti-clockwise hence UGV moves backward Note :- this movement is recognisable better in the simulation video

![Screenshot (1164)](https://user-images.githubusercontent.com/98812321/157252142-47fa264d-50ed-4ebb-9d82-68a095093587.png)

## E) When the Josytick is moved to the right the motors follow clockwise motion  Note :- this movement is recognisable better in the simulation video

![Screenshot (1156)](https://user-images.githubusercontent.com/98812321/157252551-f468cfd1-1e48-4fed-b3eb-5dba09f65f9e.png)

![Screenshot (1157)](https://user-images.githubusercontent.com/98812321/157252575-706498b5-c91c-4234-91fe-1d59aad85f68.png)

![Screenshot (1158)](https://user-images.githubusercontent.com/98812321/157252590-ce3aff6b-51eb-4f3e-9cd4-a13b117dc506.png)


## F) When the Josytick is moved to the left the motors follow anti-clockwise motion  Note :- this movement is recognisable better in the simulation video

![Screenshot (1159)](https://user-images.githubusercontent.com/98812321/157252688-4971853a-af4c-4b8f-b270-461664d77512.png)

![Screenshot (1160)](https://user-images.githubusercontent.com/98812321/157252703-ebe6901e-38f2-41cc-a94e-3280ac4ebda3.png)

![Screenshot (1161)](https://user-images.githubusercontent.com/98812321/157252712-87872474-c938-447d-9e85-59b3deaa8d7a.png)

# 2) Wrist Movement
## A) When Potentiometer is at highest input voltage Servo motor moves +180 angle

![Screenshot (1143)](https://user-images.githubusercontent.com/98812321/157253616-23124064-ed99-4df5-8290-e6e3f3ff41bb.png)


## B) When Potentiometer is at lowestt input voltage i.e 0 could mean no input from user or it means user wants the position of Servo motor to be  -180 angle which is the default position for the servo

![Screenshot (1142)](https://user-images.githubusercontent.com/98812321/157253673-09edf378-f257-4f1a-85af-718ce7f9f9c5.png)


## C) When Potentiometer is at any other voltage and ther servo follows the respective angle movement

![Screenshot (1144)](https://user-images.githubusercontent.com/98812321/157253713-27ffe563-aef4-4401-aff7-a0a8beeafe3b.png)

# 3) Finger Movement
 ## A) When no input is given from Potentiometer or the user wants the servo at -180 angle position which is also its default position
 
 ![Screenshot (1145)](https://user-images.githubusercontent.com/98812321/157254350-4f175284-165f-436e-a7cd-46bec82c331b.png)

## B) Random Inputs from potentiometer which displays simultaneous working of all five finger servos proving five finger independent operation

![Screenshot (1147)](https://user-images.githubusercontent.com/98812321/157254590-ba395d95-79d4-4251-8ccf-4b184e821a41.png)


![Screenshot (1166)](https://user-images.githubusercontent.com/98812321/157254611-e9dda0a5-f07a-418f-8b41-f5e7e4dfc761.png)







# **10. Applications**: -

The applications of UGVs and Bionic arms can be combined and integrated ahead to
be converted into other applications such as:-

1) Pick and place functions.

2) Fire extinguishing operations.

3) Bomb defusal.

4) Medical surgery for remote use.

5) Sanitization purposes. (UV light spreading or sanitizer spraying)

6) Agricultural functions (weed plucking, pesticide spraying, etc.).

7) Firecrackers industry.

8) Nuclear plant projects, thermal power plants.

9) Military Applications and operations.

10) Waste management.

# 11.  **Modifications According to Application: -**

1.  Moisture Sensor: - Can be added to below UGV to detect soil moisture if the
    project is to be applied for agricultural purposes.

2.  Sanitizer Spray: - Can be added if project is to be applied in hospitals,
    offices for sanitization processes.

3.  Accelerometers and Gyroscope: - Can be added when the arm is needed for
    higher accuracy purposes such as medical surgery then wrist will require all
    around movement exactly replicating human wrist.

