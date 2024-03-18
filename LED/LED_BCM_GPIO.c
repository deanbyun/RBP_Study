#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
 
#define LED1 18     // BCM GPIO PinNum18
 
int main (void)
{
 int bright ; 
    if (wiringPiSetupGpio() == -1) {        // BCM GPIO �ʱ�ȭ
        return 1;
    }
 
 pinMode (LED1, PWM_OUTPUT) ;       // PWM ������� ����
 
 for (;;)       // ���ѷ���
    {
        pwmWrite (LED1, 0) ;        // PWM ��ȣ�� 0�� duty cycle�� ���, LED ����
        delay(500);     // 0.5�� delay
        pwmWrite (LED1, 1024) ;     // PWM ��ȣ�� 1024 duty cycle�� ���, LED �ִ� ���
        delay(500);
    }
 
 return 0 ;
}