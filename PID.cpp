#include <iostream>
#include "PID.h"
using namespace std;


PID::PID(uint16_t KP, uint16_t TI ,uint16_t TD ,uint16_t okres_probkowania)
{
    if( KP >= 0 ) kp = KP ;
    if( TI >= 0 ) ti = TI ;
    if( TD >= 0 ) td = TD ;
    if( okres_probkowania > 0 ) dt = okres_probkowania; // [ms]
    C = 0 ;
    ep = 0; // uchyb poprzedni
}
PID::~PID()
{

}
void PID::pid(uint16_t en)
{
    C += ((ep+en)/2)*dt ;
    pid_output = kp*(en + (1/ti)*C/1000 + td*(en-ep)*1000/dt );
    ep = en ;
}
uint16_t PID::getOutput(uint16_t EN)
{
    pid(EN);
    cout << endl <<"Sygnal sterujacy wynosi: "<<pid_output<<endl;
    return pid_output;
}
void PID::write()
{
    cout<<endl << "Ten obiekt ma parametry kp , ti , td " <<kp<<" " <<ti << " " << td << endl;
}


