#include <Arduino.h>

// 定义LED引脚（根据实际接线修改）
#define LED1_PIN 2
#define LED2_PIN 3

void setup() {
  Serial.begin(9600);    // 初始化串口通信
  pinMode(LED1_PIN, OUTPUT);
  pinMode(LED2_PIN, OUTPUT);
  digitalWrite(LED1_PIN, LOW);  // 初始状态设为关闭
  digitalWrite(LED2_PIN, LOW);

  // 打印欢迎信息（可选）
  Serial.println("System Ready");
  Serial.println("Send commands: ");
  Serial.println("1 - Turn ON LED1");
  Serial.println("2 - Turn OFF LED1");
  Serial.println("3 - Turn ON LED2");
  Serial.println("4 - Turn OFF LED2");
}

void loop() {
  // 检测串口缓冲区是否有数据
  if (Serial.available() > 0) {
    // 读取直到换行符（兼容不同串口助手的发送格式）
    String command = Serial.readStringUntil('\n');
    command.trim();  // 去除首尾空白字符
    
    // 指令解析与执行
    if (command == "1") {
      digitalWrite(LED1_PIN, HIGH);
      Serial.println("LED1 ON");
    } 
    else if (command == "2") {
      digitalWrite(LED1_PIN, LOW);
      Serial.println("LED1 OFF");
    }
    else if (command == "3") {
      digitalWrite(LED2_PIN, HIGH);
      Serial.println("LED2 ON");
    }
    else if (command == "4") {
      digitalWrite(LED2_PIN, LOW);
      Serial.println("LED2 OFF");
    }
    else {
      Serial.print("Invalid command: ");
      Serial.println(command);
    }
  }
}