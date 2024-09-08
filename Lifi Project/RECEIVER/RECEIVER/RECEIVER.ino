#include <LiquidCrystal_I2C.h>

const int ldrPin = 8; // LDR connected to pin 8
unsigned long startTime = 0; // Variable to store start time
unsigned long duration = 0; // Variable to store duration

LiquidCrystal_I2C lcd(0x27, 16, 2); // Initialize the LCD with address 0x27, 16 columns, and 2 rows

void setup() {
  pinMode(ldrPin, INPUT); // Set LDR pin as input
  Serial.begin(9600); // Initialize serial communication
  
  // Initialize the LCD with 16 columns, 2 rows, and 5x8 dots character size
  lcd.begin(16, 2); 
  
  lcd.backlight();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LIFI");
  lcd.setCursor(0, 1);
  lcd.print("RECEIVER");
  delay(2000);
}


void loop() {
  int ldrValue = digitalRead(ldrPin); // Read LDR value  

  if (!digitalRead(ldrPin)) { 
    if (startTime == 0) { 
      startTime = millis(); // Set start time
      Serial.println("Light turned ON");
    }
  } else { 
    if (startTime != 0) { 
      duration = millis() - startTime; // Calculate duration
      Serial.print("Light turned OFF. Duration: ");
      Serial.print(duration);
      Serial.println(" ms");

      if (duration < 5) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("SEND MSG");
        delay(1000);
        Serial.println("SEND MSG");
      } else if (duration > 30 && duration < 41) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 1");
        delay(1000); 
        Serial.println("MESSAGE 1");
      } else if (duration >42  && duration < 50) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 2");
        delay(1000); 
        Serial.println("MESSAGE 2");
      } else if (duration >50  && duration < 65) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 3");
        delay(1000); 
        Serial.println("MESSAGE 3");
      } else if (duration > 65 && duration < 70) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 4");
        delay(1000); 
        Serial.println("MESSAGE 4");
      } else if (duration > 65 && duration < 80) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 5");
        delay(1000); 
        Serial.println("MESSAGE 5");
      } else if (duration > 81 && duration < 95 ) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 6");
        delay(1000); 
        Serial.println("MESSAGE 6");
      } else if (duration >= 200  && duration < 210) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 7");
        delay(1000); 
        Serial.println("MESSAGE 7");
      } else if (duration > 0 && duration < 0) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 8");
        delay(1000); 
        Serial.println("MESSAGE 8");
      } else if (duration > 0 && duration < 0) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 9");
        delay(1000); 
        Serial.println("MESSAGE 9");
      } else if (duration > 0 && duration < 0) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE *");
        delay(1000); 
        Serial.println("MESSAGE *");
      } else if (duration > 0 && duration < 0) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE 0");
        delay(1000); 
        Serial.println("MESSAGE 0");
      } else if (duration > 0 && duration < 0) {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MESSAGE #");
        delay(1000); 
        Serial.println("MESSAGE #");
      } else {
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("invalid...!");
        delay(1000);
        Serial.println("invalid...!");
      }
      
      startTime = 0;
    }
  }
}
