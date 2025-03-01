//Initialising
void setup() {
  pinMode(2, OUTPUT); //Output from pin 2 (Connected to built-in LED)
}

//Loop
void loop() {
  digitalWrite(2, HIGH); //Function to power on
  delay(1000); //delay of 1 second
  digitalWrite(2, LOW); // Function to power off
  delay(1000);
}
