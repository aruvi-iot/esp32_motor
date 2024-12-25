#include <LiquidCrystal_I2C.h>
#include <Arduino.h>

#define LCD_PEA 0x27
LiquidCrystal_I2C lcd(LCD_PEA, 16, 2);

int count = 0;

void setup() {
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Hello C++");
  lcd.setCursor(0, 1);
  lcd.print("Count: ");
}

// Custom delay function using a for loop
void customDelay(int ms) {
  unsigned long startTime = millis();  // Get current time in milliseconds
  while (millis() - startTime < ms) {
    // Keep the loop running until the specified time has passed
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {  // Loop 10 times
    count++;                        // Increment the count
    lcd.setCursor(6, 1); 
    lcd.print("     ");             // Clear previous count
    lcd.setCursor(6, 1); 
    lcd.print(count);               // Display the current count
    
    customDelay(200);               // Wait for 200 milliseconds using the custom delay
  }
  // Additional logic can be added here if needed
}
