const byte NUMBER_OF_WORDS = 27;
char* words[NUMBER_OF_WORDS] = {
 "neat", "cool", "wicked", "incredible", "excellent", "crack", "exceptional", "fantastic",
 "fabulous", "fine", "first-rate", "marvelous", "super", "terrific", "tremendous", "wonderful",
 "brilliant", "superb", "keen", "laudable", "worthy", "rad", "sweet", "fresh", "dope", "fly", "nifty"
};

void setup(){
 randomSeed(analogRead(0));   //give the random number generator funky data as a seed
 pinMode(0, INPUT_PULLUP);    // saves us from needing to use a resistor in the circuit
 delay(5000);
}

void loop(){
  if (digitalRead(0) == LOW) // is the button pressed?
  {
    Keyboard.print(words[random(0,NUMBER_OF_WORDS)]); // type a randome word from our list
    Keyboard.print(" "); // and add a space
    delay(500); // wait a half a second
  }
}

