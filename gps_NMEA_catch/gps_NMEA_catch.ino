#define total_char 100

char *p;

char GPTXT[5] = {'G', 'P', 'T', 'X', 'T'};
char GNGGA[5] = {'G', 'N', 'G', 'G', 'A'};
char GNGLL[5] = {'G', 'N', 'G', 'L', 'L'};
char GPGSA[5] = {'G', 'P', 'G', 'S', 'A'};
char BDGSA[5] = {'B', 'D', 'G', 'S', 'A'};
char GPGSV[5] = {'G', 'P', 'G', 'S', 'V'};
char BDGSV[5] = {'B', 'D', 'G', 'S', 'V'};
char GNRMC[5] = {'G', 'N', 'R', 'M', 'C'};
char GNVTG[5] = {'G', 'N', 'V', 'T', 'G'};
char GNZDA[5] = {'G', 'N', 'Z', 'D', 'A'};

char inf_GPTXT[] = {};
char inf_BDGSA[] = {};
char inf_BDGSV[] = {};
char inf_GNRMC[] = {};

char catch_head[5] = {};
char catch_final[total_char] = {};

boolean stringComplete = false;
void setup()
{
  Serial.begin(9600);
}

void loop()
{
  if (stringComplete == true)
  {
    for (unsigned int i = 0; i < total_char; i++)
    {
      Serial.print(inf_GNRMC[i]);
    }
    Serial.print("\r\n");
    // for (int i = 0; i < total_char; i++)
    // {
    //   Serial.print(inf_BDGSA[i]);
    // }
    // Serial.println();
    // for (int i = 0; i < 55; i++)
    // {
    //   Serial.print(inf_BDGSV[i]);
    // }
    // Serial.println();
    p = &inf_GNRMC[0];
    for (unsigned int i = 0; i < strlen(inf_GNRMC); i++)
    {
      *p++ = '\0';
    }

    stringComplete = false;
  }
  delay(500);
}

void serialEvent()
{
  while (Serial.available() > 0)
  {
    if (Serial.read() == '$')
    {
      for (unsigned int i = 0; i < 5; i++)
      {
        catch_head[i] = Serial.read();
      }

      if (catch_head[0] == 'G')
      {
        // if (catch_head[1] == GNRMC[1])
        // {
        //   if (catch_head[2] == GNRMC[2])
        //   {
        //     if (catch_head[3] == GNRMC[3])
        //     {
              if (catch_head[4] == GNRMC[4])
              {
                for (unsigned int i = 0; i < total_char; i++)
                {
                  inf_GNRMC[i] = Serial.read();
                }
                stringComplete = true;
              }
        //     }
        //   }
        // }
      }
      // else if (catch_head[0] == 'B')
      // {
      //   if (catch_head[4] == BDGSA[4])
      //   {
      //     for (unsigned int i = 0; i < 55; i++)
      //     {
      //       inf_BDGSA[i] = Serial.read();
      //     }
      //     stringComplete = true;
      //   }
      //   else if (catch_head[4] == BDGSV[4])
      //   {
      //     for (unsigned int i = 0; i < 55; i++)
      //     {
      //       inf_BDGSV[i] = Serial.read();
      //     }
      //     stringComplete = true;
      //   }
      // }
    }
  }
}
