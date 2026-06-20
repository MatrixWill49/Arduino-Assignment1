int startValue = 5;
void flashLED(int times){
  for (int count= 0; count < times; count++){
  digitalWrite(13,HIGH);
  delay(1000);
  digitalWrite(13,LOW);
  delay(1000);
  }
}
void setup(){
  Serial.begin(9600);
  pinMode(13,OUTPUT);

  Serial.print("=== Smart Countdown Starting ===");

  while( startValue >= 1){
    Serial.print("Count: ");
    Serial.println(startValue);
    flashLED(startValue);
    startValue = startValue -1;
  }
  Serial.println("=== Countdown Complete ===");
}
void loop(){

}