#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define LED1 1 // wPi GPIO PinNum 1

int main (void)
{
    if (wiringPiSetup() == -1) {        // wPi GPIO 초기화
        return 1;
    }

    pinMode(LED1, OUTPUT);      // 출력모드 설정

    for (;;) {      // 무한루프
        digitalWrite(LED1, HIGH);
        delay(500);
        digitalWrite(LED1, LOW);
        delay(500);
    }

    return 0;
}