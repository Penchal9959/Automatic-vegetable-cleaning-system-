const int motor = 5;
const int submotor = 4;
const int sensor = 2;
const int IR = 10;

void setup() {
  pinMode(motor, OUTPUT);
  pinMode(submotor, OUTPUT);
  pinMode(sensor, INPUT);
  pinMode(IR, INPUT);
  Serial.begin(9600);
}

void loop() {
  //int sensorval = digitalRead(sensor);
  //Serial.println(sensorval);

     if (digitalRead(IR) == 1) 
  {
     Serial.println("sensorval");
     digitalWrite(submotor, HIGH);
     //delay(10);
  }
  else  {
     digitalWrite(submotor, LOW);
     //delay(5000);
  }
  
  if (digitalRead(IR) == 1 )
  {
    //Serial.println("irvalue");
    digitalWrite(motor, HIGH);
    delay(1000);
  }
  else
  {
    digitalWrite(motor, LOW);
    delay(2800);
   }

  

  ///////////////////////////////////////////////////
  
}
