void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void S() { // function to call S for SOS
  digitalWrite(LED_BUILTIN, HIGH); // turn LED on
  delay(500); // wait for half a second
  digitalWrite(LED_BUILTIN, LOW); // turn LED off
  delay(1000); // wait for a second
  digitalWrite(LED_BUILTIN, HIGH); // turn LED on
  delay(500); // wait for half a second
  digitalWrite(LED_BUILTIN, LOW); // turn LED off
  delay(1000); // wait for a second
  digitalWrite(LED_BUILTIN, HIGH); // turn LED on
  delay(500); // wait for half a second
  digitalWrite(LED_BUILTIN, LOW); // turn LED off
}

void O() { //function to call O for SOS
 digitalWrite(LED_BUILTIN, HIGH); // turn the LED on
 delay(250); // wait quarter of a second
 digitalWrite(LED_BUILTIN, LOW); //turn LED off
 delay(500); //wait half a second
 digitalWrite(LED_BUILTIN, HIGH); // turn the LED on
 delay(250); //wait quarter of a second
 digitalWrite(LED_BUILTIN, LOW); // turn LED off
 delay(500); //wait half a second
 digitalWrite(LED_BUILTIN, HIGH); // turn LED on
 delay(250); //wait quarter of a second
 digitalWrite(LED_BUILTIN, LOW); //turn LED off 
}


void loop() {
  //S for SOS
  S();
  delay(1000);

 //O for SOS
 O();
 delay(1000); //wait one second
 
 //S for SOS
 S();
 delay(3000); //long wait to show reset
}

