#include <IRremote.h>

int count1=0,count2=0;
const int RECV_PIN = 12;

IRrecv irrecv(RECV_PIN);
decode_results results;

void setup(){
  Serial.begin(9600);
  irrecv.enableIRIn();
  irrecv.blink13(true);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
  digitalWrite(11,HIGH);
  digitalWrite(10,HIGH);
}

void loop(){
  if (irrecv.decode(&results)){
    
    Serial.println(results.value);
    irrecv.resume();
    
    if(results.value == __________ )   //Remote Button 1 code
    {
       Serial.println("Button1");
       count1++;
    }
    
    if(results.value == __________ )   //Remote Button 2 code
    {
       Serial.println("Button2");
       count2++;
    }
    
  }
  
  if(count1==0)
  {
    Serial.print("LED1 OFF");
    digitalWrite(11,HIGH);
  }
  
  if(count1==1)
  {
    Serial.print("LED1 ON");
    digitalWrite(11,LOW);
  }
  
  if(count1==2)
  {
    count1=0;
  }
  
  if(count2==0)
  {
    Serial.println("  LED2 OFF");
    digitalWrite(10,HIGH);
  }
  
  if(count2==1)
  {
    Serial.println("  LED2 ON");
    digitalWrite(10,LOW);
  }
  
  if(count2==2)
  {
    count2=0;
  }
  
}
