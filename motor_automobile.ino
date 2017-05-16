void setup() {
pinMode(5, OUTPUT); // 5번핀을 출력모드로 설정
pinMode(6, OUTPUT); // 6번핀을 출력모드로 설정
pinMode(10, OUTPUT); // 10번핀을 출력모드로 설정
pinMode(11, OUTPUT); // 11번핀을 출력모드로 설정
}
void loop() {
analogWrite(5, 50); // 5번핀에 50의 신호를 출력
analogWrite(6, 0); // 6번핀에 0의 신호를 출력
analogWrite(10, 50); // 10번핀에 50의 신호를 출력
analogWrite(11, 0); // 11번핀에 0의 신호를 출력
delay(3000); // 3초간 대기
analogWrite(5, 0); // 5번핀에 0의 신호를 출력
analogWrite(6, 50); // 6번핀에 50의 신호를 출력
analogWrite(10, 0); // 10번핀에 0의 신호를 출력
analogWrite(11, 50); // 11번핀에 50의 신호를 출력
delay(3000); // 3초간 대기
}
