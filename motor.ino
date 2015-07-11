int B = 21,
    A = 22,
    C = 23;

int steps[][3] = {
                  {128,255,0},
                  {0,255,128},
                  {0,128.255},
                  {128,0,255},
                  {255,0,128},
                  {255,128,0}
                };

int rA,rB,rC;

void setup()
{
  // pinMode(A, OUTPUT);
  // pinMode(B, OUTPUT);
  // pinMode(C, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  for(int i=0; i<6; i++){
      if(steps[i][0] == 128){ pinMode(A, INPUT); }
      else { analogWrite(A,steps[i][0]); }
      if(steps[i][0] == 128){ pinMode(B, INPUT); }
      else { analogWrite(B,steps[i][1]); }
      if(steps[i][0] == 128){ pinMode(C, INPUT); }
      else { analogWrite(C,steps[i][2]); }
      delay(100);
  }
  // analogWrite(A, 0);
  // analogWrite(B, 0);
  // analogWrite(C, 0);
  // Serial.print("Reading: ");
  // rA = touchRead(A);
  // Serial.print(rA);
  // Serial.println();
  // delay(50);
}
