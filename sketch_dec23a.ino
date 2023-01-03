//持續感應4秒後print
#include "Adafruit_Thermal.h"
#include "SoftwareSerial.h"
// 定義感測器腳位和串口速率
const int sensorPin = 2;
const long baudRate = 9600;

void setup() {
  // 初始化串口
  Serial.begin(baudRate);
  // 初始化感測器腳位為輸入
  pinMode(sensorPin, INPUT);
}

void loop() {
  // 讀取感測器腳位的輸入
  
  int sensorValue = digitalRead(sensorPin);
  // 如果感測器感測到人體紅外線
  if (sensorValue == HIGH) {
    // 將文字發送到熱敏打印機上
    delay(4000);
  }
  sensorValue = digitalRead(sensorPin);
   if (sensorValue == HIGH) {

     Serial.println("Every ");
     Serial.println("encounter");
     Serial.println("is");
     Serial.println("special");
     Serial.println(".");
     Serial.println(".");
     Serial.println(".");
     Serial.println(".");
     Serial.println(".");
     Serial.println(".");
     Serial.println(".");
     Serial.println(".");
   }
  // 等待一段時間再次讀取感測器輸入
  delay(10000);
}

  // 在三秒之後，再次讀取紅外線感測器的訊號值
