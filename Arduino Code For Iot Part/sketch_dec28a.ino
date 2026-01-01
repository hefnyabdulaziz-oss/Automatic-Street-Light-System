
#define BLYNK_TEMPLATE_ID   "TMPL2PQF8GRLg"
#define BLYNK_TEMPLATE_NAME "embedded"
#define BLYNK_AUTH_TOKEN    "IWI01oHL-KgGlOnmu-SxCCUwL17v2MD9"

#define BLYNK_PRINT Serial

/*********** LIBRARIES ***********/
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

/*********** WIFI ***********/
char ssid[] = "Redmi";
char pass[] = "adham2025";

#define MODE_PIN   D5   // From ATmega PD4 (status)
#define ENABLE_PIN D6   // To ATmega PD3 (enable)

BlynkTimer timer;

BLYNK_WRITE(V6)
{
  int value = param.asInt();   // 1 = ON, 0 = OFF
  digitalWrite(ENABLE_PIN, value ? HIGH : LOW);
}


void sendState()
{
  int state = digitalRead(MODE_PIN);

  if (state == HIGH) {
    // NIGHT
    Blynk.virtualWrite(V3, 0);
    Blynk.virtualWrite(V5, 255);
  } else {
    // DAY / DIM
    Blynk.virtualWrite(V3, 255);
    Blynk.virtualWrite(V5, 0);
  }
}

void setup()
{
  Serial.begin(9600);

  pinMode(MODE_PIN, INPUT);        // external pulldown required
  pinMode(ENABLE_PIN, OUTPUT);
  digitalWrite(ENABLE_PIN, HIGH);  // system ON by default

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  timer.setInterval(500L, sendState);
}


void loop()
{
  Blynk.run();
  timer.run();
}
