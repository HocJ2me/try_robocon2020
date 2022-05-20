#include "./config.h"
#include "./motor_run.h"

void setup() {
    Serial.begin(9600);  
    pin_setup();
    ps2_setup();
    lcd_begin();   
}

void loop() { 
//******************************************************************

    if(error == 1) //skip loop if no controller found
    {
      return; 
    }
//******************************************************************
    if(type == 2){ //Guitar Hero Controller
  
      ps2x.read_gamepad();          //read controller 
      if(ps2x.ButtonPressed(GREEN_FRET))
        Serial.println("Green Fret Pressed");
      if(ps2x.ButtonPressed(RED_FRET))
        Serial.println("Red Fret Pressed");
      if(ps2x.ButtonPressed(YELLOW_FRET))
        Serial.println("Yellow Fret Pressed");
      if(ps2x.ButtonPressed(BLUE_FRET))
        Serial.println("Blue Fret Pressed");
      if(ps2x.ButtonPressed(ORANGE_FRET))
        Serial.println("Orange Fret Pressed"); 
  
      if(ps2x.ButtonPressed(STAR_POWER))
        Serial.println("Star Power Command");
      
      if(ps2x.Button(UP_STRUM))          //will be TRUE as long as button is pressed
        Serial.println("Up Strum");
      if(ps2x.Button(DOWN_STRUM))
        Serial.println("DOWN Strum");
   
      if(ps2x.Button(PSB_START))         //will be TRUE as long as button is pressed
        Serial.println("Start is being held");
      if(ps2x.Button(PSB_SELECT))
      {
        xe_dung();
        Serial.println("Select is being held");
      }
      if(ps2x.Button(ORANGE_FRET)) {     // print stick value IF TRUE
        Serial.print("Wammy Bar Position:");
        Serial.println(ps2x.Analog(WHAMMY_BAR), DEC); 
      } 
    }
//******************************************************************
    else { //DualShock Controller
          ps2x.read_gamepad(false, vibrate); //read controller and set large motor to spin at 'vibrate' speed
          
          if(ps2x.Button(PSB_START))         //will be TRUE as long as button is pressed
            Serial.println("Start is being held");
          if(ps2x.Button(PSB_SELECT))
            Serial.println("Select is being held");      
      
          if(ps2x.Button(PSB_PAD_UP)) {      //will be TRUE as long as button is pressed
            xe_tien();
            Serial.print("Up held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_UP), DEC);
          }
          if(ps2x.Button(PSB_PAD_RIGHT)){
            xe_phai();
            Serial.print("Right held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_RIGHT), DEC);
          }
          if(ps2x.Button(PSB_PAD_LEFT)){
            xe_trai();
            Serial.print("LEFT held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_LEFT), DEC);
          }
          if(ps2x.Button(PSB_PAD_DOWN)){
            xe_lui();
            Serial.print("DOWN held this hard: ");
            Serial.println(ps2x.Analog(PSAB_PAD_DOWN), DEC);
          }   
  
        vibrate = ps2x.Analog(PSAB_CROSS);  //this will set the large motor vibrate speed based on how hard you press the blue (X) button
        
        if (ps2x.NewButtonState()) 
        {        //will be TRUE if any button changes state (on to off, or off to on)
              if(ps2x.Button(PSB_L3))
                Serial.println("L3 pressed");
              if(ps2x.Button(PSB_R3))
                Serial.println("R3 pressed");
              if(ps2x.Button(PSB_L2))
              {
                Serial.println("L2 pressed");
                giam_toc();
              }
              xe_dung();
              dung_lay();
              if(ps2x.Button(PSB_R2))
              {
                Serial.println("R2 pressed");
                tang_toc();
              }
              if(ps2x.Button(PSB_TRIANGLE))
              {
                gat_len();
                Serial.println("Triangle pressed"); 
              }       
        }
    
        if(ps2x.ButtonPressed(PSB_CIRCLE))               //will be TRUE if button was JUST pressed
        {
          Serial.println("Circle just pressed");
          day_bong();
        }
        if(ps2x.NewButtonState(PSB_CROSS))               //will be TRUE if button was JUST pressed OR released
        {
              Serial.println("X just changed");
        };
        if(ps2x.ButtonReleased(PSB_SQUARE))              //will be TRUE if button was JUST released
        {
            Serial.println("Square just released");     
        }
    
        if(ps2x.Button(PSB_R1))
        {
           xoay_phai();
        }
        if(ps2x.Button(PSB_L1))
        {
           xoay_trai();
        }
        
      if(ps2x.Button(PSB_L1) || ps2x.Button(PSB_R1)) { //print stick values if either is TRUE
          Serial.print("Stick Values:");
          Serial.print(ps2x.Analog(PSS_LY));//, DEC); //Left stick, Y axis. Other options: LX, RY, RX  
          Serial.print(",");
          Serial.print(ps2x.Analog(PSS_LX));//, DEC); 
          Serial.println(",");
          Serial.print(ps2x.Analog(PSS_RY), DEC); 
          Serial.print(",");
          Serial.println(ps2x.Analog(PSS_RX), DEC); 
        
      }    
  //    if (ps2x.Analog(PSS_RX)<100)
  //      {
  //        xoay_trai();
  //      }
  //      if (ps2x.Analog(PSS_RX)>150)
  //      {
  //        xoay_phai();
  //      }
  //      
  //  
  //      if (ps2x.Analog(PSS_LX)<100)
  //      {
  //        xe_trai();
  //      }
  //      if (ps2x.Analog(PSS_LX)>150)
  //      {
  //        xe_phai();
  //      }
  //      
  //      if (ps2x.Analog(PSS_LY)<100)
  //      {
  //        xe_lui();
  //      }
  //      if (ps2x.Analog(PSS_LY)>150)
  //      {
  //        xe_tien();
  //      } 
    }
}
