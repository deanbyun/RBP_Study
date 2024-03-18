#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 
#define LED1 18     // BCM GPIO PinNum18
 
int main (void)
{
 int bright ; 
    if (wiringPiSetupGpio() == -1) {        // BCM GPIO 초기화
        return 1;
    }
 
 pinMode (LED1, PWM_OUTPUT) ;       // PWM 출력으로 설정
 
 for (;;)       // 무한루프
    {
        pwmWrite (LED1, 0) ;        // PWM 신호를 0의 duty cycle로 출력, LED 꺼짐
        delay(500);     // 0.5초 delay
        pwmWrite (LED1, 1024) ;     // PWM 신호를 1024 duty cycle로 출력, LED 최대 밝기
        delay(500);
    }
 
 return 0 ;
}