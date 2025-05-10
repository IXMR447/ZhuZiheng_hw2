#include <Arduino.h>


  void setup() {
    // 设定主角（程序里的变量对应硬件的引脚），引脚功能/作用（输入/输出）
  for(int i = 2; i < 6; i++)
  pinMode(i,OUTPUT);
  pinMode(22,OUTPUT);
  pinMode(23,OUTPUT);
  }
   
  void loop() {
    //来回for循环，设置好起止点
  for(int i = 2; i < 6; i++ )
    {
      digitalWrite(i , HIGH);
      delay(300);
      digitalWrite(i , LOW);
    }
     digitalWrite(22, HIGH);
      delay(300);
      digitalWrite(22, LOW);

     digitalWrite(23, HIGH);
      delay(300);
      digitalWrite(23, LOW);
      
    digitalWrite(23, HIGH);
      delay(300);
      digitalWrite(23, LOW);
      
      digitalWrite(22, HIGH);
      delay(300);
      digitalWrite(22, LOW);
      
    for(int i = 6;i > 1;i--)
    {
      digitalWrite(i , HIGH);
      delay(300);
      digitalWrite(i , LOW);
      }
      
      
  }
