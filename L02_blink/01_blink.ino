// 01_blink — blink the Arduino Uno's built-in LED (pin 13, labelled "L").
// No external wiring needed: just the USB cable.

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);   // set the on-board LED pin as an output
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // LED on
  delay(1000);                      // wait 1 second
  digitalWrite(LED_BUILTIN, LOW);   // LED off
  delay(1000);                      // wait 1 second
}
