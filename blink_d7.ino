// Dan Eastaugh blinkName app
 void blinkname()
 // DAN == -.. .- -. in morse where . is a short blink of 1 second and - is a long blink of 3 seconds
	// we wait 1 second between parts of a letter and 3 seconds between latters
	// D = -..
	//DASH
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
    //DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	//DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	// Delay between letter
	delay(3000);
	
	//A = .-
	//DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	//DASH
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	// Delay between letter
	delay(3000);
	
	//N = -.
    //DASH
	digitalWrite(MY_LED, HIGH);
	delay(3000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
    //DOT
    digitalWrite(MY_LED, HIGH);
	delay(1000);
	digitalWrite(MY_LED, LOW);
	delay(1000);
	
    //delay between word
    delay(7000);
	// And repeat!
void setup() {
	pinMode(MY_LED, OUTPUT);
}

// The loop() method is called frequently.
void loop() {
	
}

