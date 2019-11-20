
#define S0 4
#define S1 5
#define S2 6
#define S3 7
#define sensorOut 8
int frequency = 0;
int f1 = 0;
int f2 = 0;
int f3 = 0;

void setup() {
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(sensorOut, INPUT);
  
  // Setting frequency-scaling to 20%
  digitalWrite(S0,HIGH);
  digitalWrite(S1,LOW);
  
  Serial.begin(9600);
}
void loop() {
  // Setting red filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,LOW);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  f1 = map(frequency, 25,70,255,0);
  // Printing the value on the serial monitor
  Serial.print("R= ");//printing name
  Serial.print(frequency);//printing RED color frequency
  //Serial.print(" ");
  //Serial.print("RGB model");
  //Serial.print(frequency1);
  Serial.print(" ");
 
  
  delay(100);
  // Setting Green filtered photodiodes to be read
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  f2 = map(frequency, 30,90,255,0);
  // Printing the value on the serial monitor
  Serial.print("G= ");//printing name
 
  Serial.print(frequency);
  //printing RED color frequency
  
  Serial.print(" ");
  //Serial.print("RGB model");
  //Serial.print(frequency1);
  Serial.print("  ");
  
  delay(100);
  // Setting Blue filtered photodiodes to be read
  digitalWrite(S2,LOW);
  digitalWrite(S3,HIGH);
  // Reading the output frequency
  frequency = pulseIn(sensorOut, LOW);
  // Printing the value on the serial monitor
  Serial.print("B= ");//printing name
  Serial.println(frequency);//printing RED color frequency
  //Serial.print("  ");
 // f3 = map(frequency,25,70,255,0);
  //Serial.print("RGB model");
 //Serial.print(frequency1);
  //Serial.println(" ");
  //Serial.print("RGB color code");
  //Serial.print(f1);
  //Serial.print(" ");
  //Serial.print(f2);
  //Serial.print(" ");
  //Serial.println(f3);
 
  
  delay(100);
  
}
