#define PSU_PPM_CHANNEL 0
#define PSU_PPM_PIN 13
#define PSU_PPM_RES 8
#define PSU_PPM_FREQ 60000

void setup() {
  // setup
  ledcSetup(PSU_PPM_CHANNEL, PSU_PPM_FREQ, PSU_PPM_RES);
  ledcAttachPin(PSU_PPM_PIN, PSU_PPM_CHANNEL);
  ledcWrite(PSU_PPM_CHANNEL, 128);
}

void loop() {
  delay(1000);
}
