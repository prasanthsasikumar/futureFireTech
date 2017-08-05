
/*
  85K challenge

*/

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
int buttonState = 0;         // variable for reading the pushbutton status
int buttonPin = 2;     // the number of the pushbutton pin

void setup()
{
  Serial.begin(9600);
  Serial.setTimeout(5);
}

void loop()
{
  if (!Serial.available()) return;

  String str = Serial.readString();

  // command to send a float
  if (str == "float")
  {
    float fVal = 12.34f;
    byte* fBuffer = reinterpret_cast<byte*>(&fVal);
    Serial.write(fBuffer, 4);
  }

  // command to send an integer
  else if (str == "int")
  {
    sensorValue = analogRead(sensorPin);// read the value from the sensor:
    buttonState = digitalRead(buttonPin); // read the state of the pushbutton value:
    //writeVal(sensorValue);
    //writeVal(buttonState);
    Serial.println(sensorValue);
    Serial.println(buttonState);
  }

  // command to send a line
  else if (str == "lines")
  {
    Serial.println("This is a line.");
    Serial.println("This is another line");
  }
}
void writeVal(int val) {
  long int lVal = val;
  byte lBuffer[] = {
    byte(lVal & 0xff),
    byte(lVal >> 8 & 0xff),
    byte(lVal >> 16 & 0xff),
    byte(lVal >> 24 & 0xff)
  };
  Serial.write(lBuffer, 4);
}

