#include <Arduino.h>


  void setup() {
    // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
  for(int i = 2; i < 6; i++)
  pinMode(i,OUTPUT);
  }
   
  void loop() {
    //来回for循环，设置好起止点
  for(int i = 2; i < 6; i++ )
    {
      digitalWrite(i , HIGH);
      delay(50);
      digitalWrite(i , LOW);
    }
    for(int i = 5;i > 1;i--)
    {
      digitalWrite(i , HIGH);
      delay(50);
      digitalWrite(i , LOW);
      }
  }
  