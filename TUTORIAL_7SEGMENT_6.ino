/*
   TUTORIAL SEVEN SEGMENT PADA ARDUINO
   MENGGUNAKAN CHIP TM1637
   MENAMPILKAN NILAI ANALOG LDR

   Pinout :
   CLK -> D10
   DIO -> D11

   LDR -> A2
*/

#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 10
#define DIO 11
#define pinLdr A2

#define TEST_DELAY 200

TM1637Display display(CLK, DIO);

void setup()
{
  pinMode(pinLdr, INPUT);
  display.setBrightness(0x0f);
}

void loop()
{

  int nilaiLdr = analogRead(pinLdr);

  // Menampilkan angka potensio rata kanan
  display.showNumberDec(nilaiLdr, false);
  delay(TEST_DELAY);


}
