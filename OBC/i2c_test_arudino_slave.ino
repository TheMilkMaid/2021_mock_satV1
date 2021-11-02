#include <Wire.h>
#define SLAVE_ADDRESS 0x8

const int ledPin = 13; //onboard LED
static_assert(LOW == 0, "Expecting LOW to be 0");
int flag_int_send_to_PI = 0; // can flag be fetched from register?
int flag_int_receive_from_PI = 0; // can flag be fetched from register?

char data_send_to_PI = 't';


void setup()
{
  Wire.begin(SLAVE_ADDRESS);                // join i2c bus with address #8, defined in Pi pytho code as slave_address
  Wire.onReceive(receiveEvent); // register event? receive
  Wire.onRequest(sendEvent); // send
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); //turn LED off
  Serial.begin(9600);           // start serial for output
}


void loop()
{
  delay(100);
}


// function that executes whenever data is received from master
// this function is registered as an event, see setup()
void receiveEvent(int howMany)
{
  while(1 < Wire.available()) // loop through all but the last
  {
    char c = Wire.read(); // receive byte as a character
    digitalWrite(ledPin, c); // make LED on?
    Serial.print(c);         // print the character
  }
  int x = Wire.read();    // receive byte as an integer
  Serial.println(x);         // print the integer
}


void sendEvent()
{
  while(1 < Wire.available())
  {
    Wire.write(data_send_to_PI);
  }
}
