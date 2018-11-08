String NMEA_GPTXT = "$GPTXT,01,01,01,ANTENNA OK*35";
String NMEA_GNGGA = "$GNGGA,072353.000,3032.2149,N,10412.5192,E,1,09,1.3,509.4,M,0.0,M,,*74";
String NMEA_GNGLL = "$GNGLL,3032.2149,N,10412.5192,E,072353.000,A,A*42";
String NMEA_GPGSA = "$GPGSA,A,3,15,21,36,13,29,33,,,,,,,3.2,1.3,2.9*31";
String NMEA_BDGSA = "$BDGSA,A,3,06,13,08,,,,,,,,,,3.2,1.3,2.9*27";
String NMEA_GPGSV = "$GPGSV,3,1,12,02,,,32,05,,,25,13,58,050,32,15,78,225,36*79";
// String NMEA_GPGSV = "$GPGSV,3,2,12,20,16,281,13,21,32,318,16,24,19,163,29,29,50,233,29*7E";
// String NMEA_GPGSV = "$GPGSV,3,3,12,33,61,058,27,34,,,26,35,,,24,36,47,140,20*77";
String NMEA_BDGSV = "$BDGSV,2,1,07,02,,,17,03,,,32,06,82,357,30,08,55,136,37*6C";
//String NMEA_BDGSV = "$BDGSV,2,2,07,13,85,133,38,19,,,26,20,,,41*51";
String NMEA_GNRMC = "$GNRMC,072353.000,A,3032.2149,N,10412.5192,E,7.74,50.28,290918,,,A*45";
String NMEA_GNVTG = "$GNVTG,50.28,T,,M,7.74,N,14.34,K,A*2A";
String NMEA_GNZDA = "$GNZDA,072353.000,29,09,2018,00,00*41";

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  Serial.println(NMEA_GPTXT);
  Serial.println(NMEA_GNGGA);
  Serial.println(NMEA_GNGLL);
  Serial.println(NMEA_GPGSA);
  Serial.println(NMEA_BDGSA);
  Serial.println(NMEA_GPGSV);
  Serial.println(NMEA_BDGSV);
  Serial.println(NMEA_GNRMC);
  Serial.println(NMEA_GNZDA);
  delay(550);
  //  Serial.print(NMEA_GPTXT);
  //  Serial.print("\n");
  //  Serial.print(NMEA_GNGGA);
  //  Serial.print("\n");
  //  Serial.print(NMEA_GNGLL);
  //  Serial.print("\n");
  //  Serial.print(NMEA_GPGSA);
  //  Serial.print("\n");
  //  Serial.print(NMEA_BDGSA);
  //  Serial.print("\n");
  //  Serial.print(NMEA_GPGSV);
  //  Serial.print("\n");
  //  Serial.print(NMEA_BDGSV);
  //  Serial.print("\n");
  //  Serial.print(NMEA_GNRMC);
  //  Serial.print("\n");
  //  Serial.print(NMEA_GNZDA);
  //  Serial.print("\n");
}