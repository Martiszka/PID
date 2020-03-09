#include <iostream>
#include "PID.h"
using namespace std;

int main()
{
    PID pid_motor(1,2,3,100) ,
    pid_servo(15,100);

    pid_motor.write() ;
    pid_servo.write() ;

    uint16_t uchyb_obecny = 20 ;
    pid_motor.getOutput( uchyb_obecny ); // zwraca sygnal sterujacy, argument to uchyb obecny
    pid_servo.getOutput( uchyb_obecny ) ;
    return 0;
}
