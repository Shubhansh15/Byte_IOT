const int blueButton = 2;
const int greenButton = 3;
const int redButton = 4;

const int redPin = 9;
const int greenPin = 10;
const int bluePin = 11;


int blueButtonState = 0;
int greenButtonState = 0;
int redButtonState = 0;

void setup() {
  pinMode(blueButton, INPUT);
  pinMode(greenButton, INPUT);
  pinMode(redButton, INPUT);
  
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  greenButtonState = digitalRead(greenButton);
  blueButtonState = digitalRead(blueButton);
  redButtonState = digitalRead(redButton);
  
  //Serial.println(buttonState);

  if (greenButtonState == LOW) {
    // First press: Red on, Green off, Blue off
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    //delay(500);  // Adjust delay as needed

    

    // Third press: Red off, Green off, Blue on
    //digitalWrite(redPin, LOW);
    //digitalWrite(greenPin, LOW);
    //digitalWrite(bluePin, HIGH);
    //delay(500);  // Adjust delay as needed
  }
  else if (blueButtonState == LOW)
  {
   //Second press: Red off, Green on, Blue off
    digitalWrite(redPin, LOW);
     digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
    //delay(500);  // Adjust delay as needed 
  }
  else if (redButtonState == LOW)
  {
    // Third press: Red off, Green off, Blue on
   digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
    //delay(500);  // Adjust delay as needed
  }
  else{
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
    //delay(500);}
  }}
  
