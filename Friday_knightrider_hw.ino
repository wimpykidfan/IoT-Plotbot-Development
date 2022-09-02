int pinArray[] = {1,2, 3, 4, 5, 6, };
int count = 0;       
int timer = 90;


void setup() {

  for (count=0;count<8;count++)  {

    pinMode(pinArray[count], OUTPUT);

  }
}

void loop() {

  // loop from the lowest pin to the highest:

  for (count = 0; count < 8; count++) {

    // turn the pin on:

    digitalWrite(count, HIGH);

    delay(timer);

    // turn the pin off:

    digitalWrite(count, LOW);

  }

  // loop from the highest pin to the lowest:

  for (int count = 8; count >= 0; count--) {

    // turn the pin on:

    digitalWrite(count, HIGH);

    delay(timer);

    // turn the pin off:

    digitalWrite(count, LOW);

  }
}
