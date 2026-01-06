#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, -1);

#define BUTTON_PIN 14
#define LED_PIN 27
#define LONG_PRESS_TIME 1000 // 1 second

bool buttonState = HIGH;
bool lastButtonState = HIGH;
unsigned long pressedTime = 0;
unsigned long releasedTime = 0;
bool isPressing = false;
bool isLongDetected = false;

void showMessage(const char* msg) {
  display.clearDisplay();
  display.setTextSize(2);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 25);
  display.print(msg);
  display.display();
}

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  pinMode(LED_PIN, OUTPUT);

  Wire.begin();
  if (!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    for (;;); // stop if OLED not found
  }

  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 10);
  display.print("System Ready!");
  display.display();
  delay(1000);
  showMessage("Waiting...");
}

void loop() {
  buttonState = digitalRead(BUTTON_PIN);

  // Button pressed
  if (buttonState == LOW && lastButtonState == HIGH) {
    pressedTime = millis();
    isPressing = true;
    isLongDetected = false;
  }

  // Button released
  else if (buttonState == HIGH && lastButtonState == LOW) {
    releasedTime = millis();
    isPressing = false;
    unsigned long pressDuration = releasedTime - pressedTime;

    if (pressDuration < LONG_PRESS_TIME) {
      showMessage("Short!");
      digitalWrite(LED_PIN, HIGH);
      delay(300);
      digitalWrite(LED_PIN, LOW);
      showMessage("Waiting...");
    }
  }

  // Long press detection
  if (isPressing && !isLongDetected) {
    if (millis() - pressedTime > LONG_PRESS_TIME) {
      showMessage("Long!");
      isLongDetected = true;

      // Blink LED 3 times
      for (int i = 0; i < 3; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(150);
        digitalWrite(LED_PIN, LOW);
        delay(150);
      }
      showMessage("Waiting...");
    }
  }

  lastButtonState = buttonState;
}
