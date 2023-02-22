#define L1 8
#define L2 9

#define Red 2
#define Green 3

char ui[8];
int i = 0;
char Rcv;
bool Status;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);

  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  if (Serial.available() > 0) {

    ui[i] = Serial.read();
    i = i + 1;


  }




  if (i == 8&&(ui[1]=='9'||ui[1]=='9') {
    if (ui[0] == '#' && ui[1] == '9' && ui[2] == '1' && ui[3] == '2' && ui[4] == '3' && ui[5] == '4' && ui[6] == '5' && ui[7] == '*') {
      Serial.print("Activated");
      Status = true;
    } else if (ui[0] == '#' && ui[1] == '8' && ui[2] == '5' && ui[3] == '4' && ui[4] == '3' && ui[5] == '2' && ui[6] == '1' && ui[7] == '*') {
      Serial.print("Deactivated");
      Status = false;
    }
    i = 0;

  }
  if (i == 6 && ui[1] == '7') {
    if (Status == true) {
      if (ui[0] == '#' && ui[1] == '7' && ui[2] == '0' && ui[3] == '1' && ui[4] == '1' && ui[5] == '*') {
        Serial.print("Red led on");
      } else if (ui[0] == '#' && ui[1] == '7' && ui[2] == '0' && ui[3] == '2' && ui[4] == '1' && ui[5] == '*') {
        Serial.print("Green led on");
      } else if (ui[0] == '#' && ui[1] == '7' && ui[2] == '0' && ui[3] == '1' && ui[4] == '0' && ui[5] == '*') {
        Serial.print("Red led off");
      } else if (ui[0] == '#' && ui[1] == '7' && ui[2] == '0' && ui[3] == '2' && ui[4] == '0' && ui[5] == '*') {
        Serial.print("Green led off");
      }

    }
    i=0;

  }


  if (i == 8 && ui[1] == '6') {
    if(){
      
    }

  }


}
