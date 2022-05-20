void tang_toc()
{
  if(toc_do <200)
  {
    toc_do += 50;
  }
}
void giam_toc()
{
  if(toc_do >50)
  {
    toc_do -= 50;
  }
}
void motor_1(int k) {    
    if (k >0)
    {
        digitalWrite(motor1+1,0);
        analogWrite(motor1, k);    
        digitalWrite(33,0);
        digitalWrite(35,1);
    }
    else
    {
        digitalWrite(motor1+1,0);
        analogWrite(motor1, k);    
        digitalWrite(33,1);
        digitalWrite(35,0);
    }
}


void motor_2(int k) {    
    if (k >0)
    {
        digitalWrite(motor2+1,0);
        analogWrite(motor2, k);    
        digitalWrite(37,0);
        digitalWrite(39,1);
    }
    else
    {
        digitalWrite(motor2+1,0);
        analogWrite(motor2, k);    
        digitalWrite(37,1);
        digitalWrite(39,0);
    }
}


void motor_3(int k) {    
    if (k >0)
    {
        digitalWrite(motor3+1,0);
        analogWrite(motor3, k);    
        digitalWrite(41,0);
        digitalWrite(43,1);
    }
    else
    {
        digitalWrite(motor3+1,0);
        analogWrite(motor3, k);    
        digitalWrite(41,1);
        digitalWrite(43,0);
    }
}


void motor_4(int k) {    
    if (k >0)
    {
        digitalWrite(motor4+1,0);
        analogWrite(motor4, k);    
        digitalWrite(45,0);
        digitalWrite(47,1);
    }
    else
    {
        digitalWrite(motor4+1,0);
        analogWrite(motor4, k);    
        digitalWrite(45,1);
        digitalWrite(47,0);
    }
}


void xe_tien() {
//    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    Tien len          ");
    lcd.setCursor(0, 1);
    lcd.print("toc do: ");
    lcd.print(toc_do);
    
        digitalWrite(motor1+1,0);
        analogWrite(motor1, toc_do);    
        digitalWrite(33,1);
        digitalWrite(35,0);

        
        digitalWrite(motor2+1,0);
        analogWrite(motor2, toc_do);    
        digitalWrite(37,0);
        digitalWrite(39,1);


        digitalWrite(motor3+1,0);
        analogWrite(motor3, toc_do);    
        digitalWrite(41,0);
        digitalWrite(43,1);

        
        digitalWrite(motor4+1,0);
        analogWrite(motor4, toc_do);    
        digitalWrite(45,1);
        digitalWrite(47,0);

//    motor_1(toc_do);
//    motor_2(-toc_do);
//    motor_3(-toc_do);
//    motor_4(toc_do);

}
void xe_lui() {
//    lcd.clear();  
    lcd.setCursor(0,0);
    lcd.print("    Lui xuong          ");
    lcd.setCursor(0, 1);
    lcd.print("toc do: ");
    lcd.print(toc_do);
//    motor_1(-toc_do);
//    motor_2(toc_do);
//    motor_3(toc_do);
//    motor_4(-toc_do);

        digitalWrite(motor1+1,0);
        analogWrite(motor1, toc_do);    
        digitalWrite(33,0);
        digitalWrite(35,1);

        
        digitalWrite(motor2+1,0);
        analogWrite(motor2, toc_do);    
        digitalWrite(37,1);
        digitalWrite(39,0);


        digitalWrite(motor3+1,0);
        analogWrite(motor3, toc_do);    
        digitalWrite(41,1);
        digitalWrite(43,0);

        
        digitalWrite(motor4+1,0);
        analogWrite(motor4, toc_do);    
        digitalWrite(45,0);
        digitalWrite(47,1);
}
void xe_trai() {
//      lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    re trai          ");
    lcd.setCursor(0, 1);
    lcd.print("toc do: ");
    lcd.print(toc_do);
//    motor_1(-toc_do);
//    motor_2(toc_do);
//    motor_3(-toc_do);
//    motor_4(toc_do);

        digitalWrite(motor1+1,0);
        analogWrite(motor1, toc_do);    
        digitalWrite(33,0);
        digitalWrite(35,1);

        
        digitalWrite(motor2+1,0);
        analogWrite(motor2, toc_do);    
        digitalWrite(37,0);
        digitalWrite(39,1);


        digitalWrite(motor3+1,0);
        analogWrite(motor3, toc_do);    
        digitalWrite(41,1);
        digitalWrite(43,0);

        
        digitalWrite(motor4+1,0);
        analogWrite(motor4, toc_do);    
        digitalWrite(45,1);
        digitalWrite(47,0);


}
void xe_phai() {
//    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    re phai          ");
    lcd.setCursor(0, 1);
    lcd.print("toc do: ");
    lcd.print(toc_do);
//    motor_1(toc_do);
//    motor_2(-toc_do);
//    motor_3(toc_do);
//    motor_4(-toc_do);

        digitalWrite(motor1+1,0);
        analogWrite(motor1, toc_do);    
        digitalWrite(33,1);
        digitalWrite(35,0);

        
        digitalWrite(motor2+1,0);
        analogWrite(motor2, toc_do);    
        digitalWrite(37,1);
        digitalWrite(39,0);


        digitalWrite(motor3+1,0);
        analogWrite(motor3, toc_do);    
        digitalWrite(41,0);
        digitalWrite(43,1);

        
        digitalWrite(motor4+1,0);
        analogWrite(motor4, toc_do);    
        digitalWrite(45,0);
        digitalWrite(47,1);

}
void xoay_trai()
{//    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    xoay trai          ");
    lcd.setCursor(0, 1);
    lcd.print("toc do: ");
    lcd.print(toc_do);

        digitalWrite(motor1+1,0);
        analogWrite(motor1, toc_do);    
        digitalWrite(33,0);
        digitalWrite(35,1);

        
        digitalWrite(motor2+1,0);
        analogWrite(motor2, toc_do);    
        digitalWrite(37,0);
        digitalWrite(39,1);


        digitalWrite(motor3+1,0);
        analogWrite(motor3, toc_do);    
        digitalWrite(41,0);
        digitalWrite(43,1);

        
        digitalWrite(motor4+1,0);
        analogWrite(motor4, toc_do);    
        digitalWrite(45,0);
        digitalWrite(47,1);

}
void xoay_phai()
{//    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("    xoay trai          ");
    lcd.setCursor(0, 1);
    lcd.print("toc do: ");
    lcd.print(toc_do);

        digitalWrite(motor1+1,0);
        analogWrite(motor1, toc_do);    
        digitalWrite(33,1);
        digitalWrite(35,0);

        
        digitalWrite(motor2+1,0);
        analogWrite(motor2, toc_do);    
        digitalWrite(37,1);
        digitalWrite(39,0);


        digitalWrite(motor3+1,0);
        analogWrite(motor3, toc_do);    
        digitalWrite(41,1);
        digitalWrite(43,0);

        
        digitalWrite(motor4+1,0);
        analogWrite(motor4, toc_do);    
        digitalWrite(45,1);
        digitalWrite(47,0);

}
void xe_dung()
{    
    lcd.setCursor(0,0);
//    lcd.print("    dung yen          ");
    lcd.setCursor(0, 1);
//    lcd.print("toc do:   ");
    lcd.print(0);
    motor_1(0);
    motor_2(0);
    motor_3(0);
    motor_4(0); 
}

void day_bong()
{
//  lcd.clear();    
    lcd.setCursor(0,0);
    lcd.print(" day bong xuong          ");
    lcd.setCursor(0, 1);
    lcd.print("toc_do: 255");
        digitalWrite(14,0);
        analogWrite(15,255);    
        digitalWrite(A8,0);
        digitalWrite(A9,1);
}
void gat_len()
{
//  lcd.clear();
    lcd.setCursor(0,0);
    lcd.print(" keo len vi tri cu        ");
    lcd.setCursor(0, 1);
    lcd.print("toc_do: 255");
        digitalWrite(14,0);
        analogWrite(15, 255);    
        digitalWrite(A8,1);
        digitalWrite(A9,0);
}
void dung_lay()
{
//  lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("ket thuc lay              ");
    lcd.setCursor(0, 1);
    lcd.print("toc_do: 0");
        digitalWrite(14,0);
        digitalWrite(15, 0);    
        digitalWrite(A8,1);
        digitalWrite(A9,0);
}
