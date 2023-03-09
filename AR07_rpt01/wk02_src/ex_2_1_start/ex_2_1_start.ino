/*
 예제 2.1
 Arduino에서 컴퓨터로 변수와 문자열 전송하기
 */

    // -32768~32767 범위의 변수 number 설정, 초기값은 0
int number = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(number*200);
  Serial.println(" msec");
  delay(200);
  number++;
  if (number > 25) {
     number=0;
  }
}
