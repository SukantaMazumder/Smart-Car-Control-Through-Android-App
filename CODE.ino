//define relay Input

#define dl_on 3  //Door lock on

#define dl_off 4  //Door lock Off

#define wds_on 5  //Window driver side open

#define wds_off 6  //Window driver side close

#define wps_on 7  //Window passenger side open

#define wps_off 8  //Window passenger side close

#define Ilf 9  //Interior light front ON/OFF

#define Ilm 10  //Interior light middle ON/Off

#define Ilr 11  //Interior light rear ON/OFF

#define Ilrf 12  //Interior light roof ON/OFF

#define Ild 23  //Interior light doors ON/OFF

#define Eldh 25  //Exterior light door handles ON/OFF

#define Eluc 27  //Exterior light under car ON/OFF

#define Ela 29  //Exterior light antenna ON/OFF

#define Elfg 31 //Exterior light Front grille ON/OFF

#define Els 33  //Exterior light Skulls ON/OFF




void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(23, OUTPUT);
  pinMode(25, OUTPUT);
  pinMode(27, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(33, OUTPUT);

  //initially all loads or devices are defined at off state
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(23, HIGH);
  digitalWrite(25, HIGH);
  digitalWrite(27, HIGH);
  digitalWrite(29, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(33, HIGH);

  Serial.begin(9600);

}

void loop() {
  if (Serial.available() > 0)
  {
    int state = Serial.read();

    //Serial.println(state);  //uncomment it to see the incoming data from the app

    //Door lock On
    if (state == 4)
    {
      digitalWrite(3, LOW);
    }

    //Door lock Off
    if (state == 5)
    {
      digitalWrite(4, LOW);
    }

    //Window driver side open
    if (state == 6)
    {
      digitalWrite(5, LOW);
    }
    if (state == 7)
    {
      digitalWrite(5, HIGH);
    }

    //Window driver side close
    if (state == 8)
    {
      digitalWrite(6, LOW);
    }
    if (state == 9)
    {
      digitalWrite(6, HIGH);
    }

    //Window passenger side open
    if (state == 10)
    {
      digitalWrite(7, LOW);
    }
    if (state == 11)
    {
      digitalWrite(7, HIGH);
    }

    //Window passenger side close
    if (state == 12)
    {
      digitalWrite(8, LOW);
    }
    if (state == 13)
    {
      digitalWrite(8, HIGH);
    }

    
    //Interior light front ON/OFF
    if (state == 14)
    {
      digitalWrite(9, LOW);
    }
    if (state == 15)
    {
      digitalWrite(9, HIGH);
    }


    //Interior light middle ON/Of
    if (state == 16)
    {
      digitalWrite(10, LOW);
    }
    if (state == 17)
    {
      digitalWrite(10, HIGH);
    }


    //Interior light rear ON/OFF
    if (state == 18)
    {
      digitalWrite(11, LOW);
    }
    if (state == 19)
    {
      digitalWrite(11, HIGH);
    }


    //Interior light roof ON/OFF
    if (state == 20)
    {
      digitalWrite(12, LOW);
    }
    if (state == 21)
    {
      digitalWrite(12, HIGH);
    }


    //Interior light doors ON/OFF
    if (state == 22)
    {
      digitalWrite(23, LOW);
    }
    if (state == 23)
    {
      digitalWrite(23, HIGH);
    }


    //Exterior light door handles ON/OFF
    if (state == 24)
    {
      digitalWrite(25, LOW);
    }
    if (state == 25)
    {
      digitalWrite(25, HIGH);
    }


    //Exterior light under car ON/OFF
    if (state == 26)
    {
      digitalWrite(27, LOW);
    }
    if (state == 27)
    {
      digitalWrite(27, HIGH);
    }


    //Exterior light antenna ON/OFF
    if (state == 28)
    {
      digitalWrite(29, LOW);
    }
    if (state == 29)
    {
      digitalWrite(29, HIGH);
    }


    //Exterior light Front grille ON/OFF
    if (state == 30)
    {
      digitalWrite(31, LOW);
    }
    if (state == 31)
    {
      digitalWrite(31, HIGH);
    }


    //Exterior light Skulls ON/OFF
    if (state == 32)
    {
      digitalWrite(33, LOW);
    }
    if (state == 33)
    {
      digitalWrite(33, HIGH);
    }

  }
}
