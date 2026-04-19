const int sensorPin       = 1;       
const unsigned long interval = 1;     

// Filter at 50 Hz cutoff
const float dt    = interval * 1e-3f;               
const float RC    = 1.0f / (2.0f * PI * 50.0f);      
const float alpha = RC / (RC + dt);                 


float prevRaw      = 0.0f;
float prevFiltered = 0.0f;

void setup() {
  Serial.begin(115200);
  delay(2000); // give host time to open port
}

void loop() {
  static unsigned long last = 0;
  unsigned long now = millis();
  if (now - last < interval) return;
  last = now;

  // 1) Read and scale
  int   rawADC = analogRead(sensorPin);
  float raw    = rawADC * (3.3f / 4095.0f);
    // 2) High‑pass IIR: y[n] = α ( y[n‑1] + x[n] − x[n‑1] )
  float filtered = alpha * (prevFiltered + raw - prevRaw);
  prevRaw      = raw;
  prevFiltered = filtered;

  //Serial.print(raw, 4);
  //Serial.print(',');
  Serial.println(filtered, 4);
}
