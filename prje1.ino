#define motor1 2
#define motor2 3
#define motor3 4
#define motor4 5
#define motor5 6
#define motor6 7

#include <SoftwareSerial.h>
SoftwareSerial BT (11,12);

void setup() {
  BT.begin(9600);
  Serial.begin(9600);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);
  pinMode(motor3,OUTPUT);
  pinMode(motor4,OUTPUT);
  pinMode(motor5,OUTPUT);
  pinMode(motor6,OUTPUT);
 
}

void loop() {
  
  if (Serial.available()){
  char gelen;
  
  gelen = Serial.read();
  Serial.println(gelen);
  
  if (gelen == 3){
    motor(1,0,0,0,0,0);
    }
  
  if (gelen == 2){
    motor(0,1,0,0,0,0);
    }
  if (gelen == 1){
    motor(0,0,1,0,0,0);
    
    }
////////////////////////////////////////////  ///////////////////////////////////////
///////////////////////////////////////////  ///////////////////////////////////////
  if (gelen== 'a'){
    motor(1,0,0,0,0,0);
    Serial.println(gelen);
    }
  
  if (gelen== 'b'){
    motor(1,1,0,0,0,0);
    }
  
  if (gelen== 'c'){
    motor(1,0,0,1,0,0);
    }

  if (gelen== 'ç'){
    motor(1,0,0,0,0,1);
    }
  
  if (gelen== 'd'){
    motor(1,0,0,1,1,0);
    }
  
  if (gelen== 'e'){
    motor(1,0,0,0,1,0);
    }
  
  if (gelen== 'f'){
    motor(1,1,0,1,0,0);
    }
  
  if (gelen== 'g'){
    motor(1,1,0,1,1,0);
    }
  
  if (gelen== 'ğ'){
    motor(1,1,0,0,0,1);
    }
  
  if (gelen== 'h'){
    motor(1,1,0,0,1,0);
    }

  if (gelen== 'ı'){
    motor(0,0,1,0,1,0);
    }
    
  if (gelen== 'i'){
    motor(0,1,0,1,0,0);
    }

  if (gelen== 'j'){
    motor(0,1,0,1,1,0);
    }

  if (gelen== 'k'){
    motor(1,0,1,0,0,0);
    }
  
  if (gelen== 'l'){
    motor(1,1,1,0,0,0);
    }
  
  if (gelen== 'm'){
    motor(1,0,1,1,0,0);
    }
  
  if (gelen== 'n'){
    motor(1,0,1,1,1,0);
    }  
  
  if (gelen== 'o'){
    motor(1,0,1,0,1,0);
    }
  
  if (gelen== 'ö'){
    motor(0,1,0,1,0,1);
    }
  
  if (gelen== 'p'){
    motor(1,1,1,1,0,0);
    }
  
  if (gelen== 'r'){
    motor(1,1,1,0,1,0);
    }

  if (gelen== 'q'){
    motor(1,1,1,1,1,0);
    }
  
  if (gelen== 's'){
    motor(0,1,1,1,0,0);
    }
  
  if (gelen== 'ş'){
    motor(1,0,0,0,1,1);
    }
  
  if (gelen== 't'){
    motor(0,1,1,1,1,0);
    }  
  
  if (gelen== 'u'){
    motor(1,0,1,0,0,1);
    }

  if (gelen== 'ü'){
    motor(1,1,0,0,1,1);
    }
  
  if (gelen== 'v'){
    motor(1,1,1,0,0,1);
    }
  
  if (gelen== 'w'){
    motor(0,1,0,1,1,1);
    }
  
  if (gelen== 'x'){
    motor(1,0,1,1,0,1);
    }
      
  if (gelen== 'y'){
    motor(1,0,1,1,1,1);
    }
  
  if (gelen== 'z'){
    motor(1,0,1,0,1,1);
    }
  
  if (gelen== ','){
    motor(0,1,0,0,0,0);
    }

  if (gelen== ';'){
    motor(0,1,1,0,0,0);
    }

  if (gelen== ':'){
    motor(0,1,0,0,1,0);
    }
  
  if (gelen== '.'){
    motor(0,1,0,0,1,1);
    }
  
  if (gelen== '?'){
    motor(1,0,1,0,1,1);
    }
  
  if (gelen== '!'){
    motor(0,1,1,0,1,0);
    }
  
  if (gelen== '('){
    motor(0,1,1,0,1,1);
    }
  
  }

}

void motor(bool z, bool x, bool c, bool v, bool b, bool n)
{
  digitalWrite(motor1, z);
  digitalWrite(motor2, x);
  digitalWrite(motor3, c);
  digitalWrite(motor4, v);
  digitalWrite(motor5, b);
  digitalWrite(motor6, n);
  
  delay(100);
  
  digitalWrite(motor1, LOW);
  digitalWrite(motor2, LOW);
  digitalWrite(motor3, LOW);
  digitalWrite(motor4, LOW);
  digitalWrite(motor5, LOW);
  digitalWrite(motor6, LOW);
  
}
