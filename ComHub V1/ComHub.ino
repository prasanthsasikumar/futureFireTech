/*
  85K challenge

*/

int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0;  // variable to store the value coming from the sensor
#define filterSamples   13              // filterSamples should  be an odd number, no smaller than 3
int sensSmoothArray1 [filterSamples];   // array for holding raw sensor values for sensor1
int sensSmoothArray2 [filterSamples];   // array for holding raw sensor values for sensor2

int rawData1, smoothData1;  // variables for sensor1 data
int rawData2, smoothData2;  // variables for sensor2 data

int buttonState = 0;         // variable for reading the pushbutton status

const int buttonPin = 2;     // the number of the pushbutton pin

String valueString = "";


void setup() {
  // put your setup code here, to run once:

  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  sensorValue = analogRead(sensorPin);// read the value from the sensor:
  smoothData1 = digitalSmooth(sensorValue, sensSmoothArray1);

  
  valueString = "";
  valueString.concat(":");
  valueString.concat(smoothData1);
  valueString.concat("+");
  valueString.concat(buttonState);
  valueString.concat("-");
  Serial.println(valueString);

}

int digitalSmooth(int rawIn, int *sensSmoothArray) {    // "int *sensSmoothArray" passes an array to the function - the asterisk indicates the array name is a pointer
  int j, k, temp, top, bottom;
  long total;
  static int i;
  // static int raw[filterSamples];
  static int sorted[filterSamples];
  boolean done;

  i = (i + 1) % filterSamples;    // increment counter and roll over if necc. -  % (modulo operator) rolls over variable
  sensSmoothArray[i] = rawIn;                 // input new data into the oldest slot

  // Serial.print("raw = ");

  for (j = 0; j < filterSamples; j++) { // transfer data array into anther array for sorting and averaging
    sorted[j] = sensSmoothArray[j];
  }

  done = 0;                // flag to know when we're done sorting
  while (done != 1) {      // simple swap sort, sorts numbers from lowest to highest
    done = 1;
    for (j = 0; j < (filterSamples - 1); j++) {
      if (sorted[j] > sorted[j + 1]) {    // numbers are out of order - swap
        temp = sorted[j + 1];
        sorted [j + 1] =  sorted[j] ;
        sorted [j] = temp;
        done = 0;
      }
    }
  }

  /*
    for (j = 0; j < (filterSamples); j++){    // print the array to debug
      Serial.print(sorted[j]);
      Serial.print("   ");
    }
    Serial.println();
  */

  // throw out top and bottom 15% of samples - limit to throw out at least one from top and bottom
  bottom = max(((filterSamples * 15)  / 100), 1);
  top = min((((filterSamples * 85) / 100) + 1  ), (filterSamples - 1));   // the + 1 is to make up for asymmetry caused by integer rounding
  k = 0;
  total = 0;
  for ( j = bottom; j < top; j++) {
    total += sorted[j];  // total remaining indices
    k++;
    // Serial.print(sorted[j]);
    // Serial.print("   ");
  }

  //  Serial.println();
  //  Serial.print("average = ");
  //  Serial.println(total/k);
  return total / k;    // divide by number of samples
}

