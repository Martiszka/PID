#include <iostream>

using namespace std;

class PID
{
private:
    uint16_t kp, ti, td, pid_output, dt ;
    uint16_t C , en,ep;


public:
    //PID();
    // PID(uint16_t KP);
    //virtual ~PID();
    //void setkp (uint16_t kp) ;
    uint16_t getOutput(uint16_t);
    void write();
    void pid(uint16_t); //, uint16_t) ;
    PID(uint16_t=0, uint16_t=0, uint16_t=0, uint16_t=10); //domyslne wartosci pk, pi, pd, okres_probkowania
    ~PID();
};
