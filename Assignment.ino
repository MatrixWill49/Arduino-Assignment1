int startValue = 5;
void flashLED(int times){
  for (int count= 0; count < times; count++){
  digitalWrite(13,HIGH);
  delay(2000);
  digitalWrite(13,LOW);
  delay(200);
  }
}
void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);

  Serial.println("=== Smart Countdown Starting ===");

  while( startValue >= 1){
    Serial.print("Count: ");
    Serial.println(startValue);
    flashLED(startValue);
    delay(300);
    startValue = startValue -1;
  }
  Serial.println("=== Countdown Complete ===");
}
void loop(){

}
