//============ LIBRARY INCLUDE ==============
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include <IRremote.h>
#include <PS2X_lib.h>  //for v1.6


//===========set up =======================
LiquidCrystal_I2C lcd(0x27, 16, 2);
int RECV_PIN = A7;

IRrecv irrecv(RECV_PIN);
decode_results results;


//*****************************************
#define PS2_DAT        52  // SCK    
#define PS2_CMD        51  // MOSI
#define PS2_SEL        53  // SS
#define PS2_CLK        50  // MISO

#define pressures   true
//#define pressures   false
//#define rumble      true
#define rumble      false


PS2X ps2x; // create PS2 Controller Class

int error = 0;
byte type = 0;
byte vibrate = 0;
//****************************************
#define motor1 8
#define motor2 6
#define motor3 4
#define motor4 2

int toc_do = 50;
//****************************************
#define bat 15
//*****************************************

//int data_post[9];
/*
 * data 0  speed
 * data 1  công tắc hành trình trước
 * data 2 công tắc hành trình sau
 * data 3 cảm biến hồng ngoại 
 * data 4 5 6 7 motor 1 2 3 4
 * data 8 motor day bong
 */
//============================== PS2 setup ========================================--
void ps2_setup()
{
  error = ps2x.config_gamepad(PS2_CLK, PS2_CMD, PS2_SEL, PS2_DAT, pressures, rumble);
  
  if(error == 0){
    Serial.print("Found Controller, configured successful ");
    Serial.print("pressures = ");
  if (pressures)
    Serial.println("true ");
  else
    Serial.println("false");
  Serial.print("rumble = ");
  if (rumble)
    Serial.println("true)");
  else
    Serial.println("false");
    Serial.println("Try out all the buttons, X will vibrate the controller, faster as you press harder;");
    Serial.println("holding L1 or R1 will print out the analog stick values.");
    Serial.println("Note: Go to www.billporter.info for updates and to report bugs.");
  }  
  else if(error == 1)
    Serial.println("No controller found, check wiring, see readme.txt to enable debug. visit www.billporter.info for troubleshooting tips");
   
  else if(error == 2)
    Serial.println("Controller found but not accepting commands. see readme.txt to enable debug. Visit www.billporter.info for troubleshooting tips");

  else if(error == 3)
    Serial.println("Controller refusing to enter Pressures mode, may not support it. ");
  type = ps2x.readType(); 
  switch(type) {
    case 0:
      Serial.print("Unknown Controller type found ");
      break;
    case 1:
      Serial.print("DualShock Controller found ");
      break;
    case 2:
      Serial.print("GuitarHero Controller found ");
      break;
  case 3:
      Serial.print("Wireless Sony DualShock Controller found ");
      break;
   }
}
//========================== LCD Display setup ============================================
void lcd_begin()
{      
    lcd.begin();
    lcd.backlight();
    lcd.clear();
    lcd.print("Start Robot");
}
//============================ Pin Mode ===========================================
void pin_setup()
{
    pinMode(33,OUTPUT);
    pinMode(35,OUTPUT);
    pinMode(37,OUTPUT);
    pinMode(39,OUTPUT);
    pinMode(41,OUTPUT);
    pinMode(43,OUTPUT);
    pinMode(45,OUTPUT);
    pinMode(47,OUTPUT);

    pinMode(motor1,OUTPUT);
    pinMode(motor1,OUTPUT);
    pinMode(motor1,OUTPUT);
    pinMode(motor1,OUTPUT);
    pinMode(motor1 + 1,OUTPUT);
    pinMode(motor2 + 1,OUTPUT);
    pinMode(motor3 + 1,OUTPUT);
    pinMode(motor4 + 1,OUTPUT);


    pinMode(A8, OUTPUT);
    pinMode(A9, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(15, OUTPUT);
}
