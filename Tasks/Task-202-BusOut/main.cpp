#include "mbed.h"

// Hardware Definitions
#define TRAF_GRN1_PIN PC_6
#define TRAF_YEL1_PIN PC_3
#define TRAF_RED1_PIN PC_2

// Objects
// DigitalOut grn(TRAF_GRN1_PIN);
// DigitalOut yel(TRAF_YEL1_PIN);
// DigitalOut red(TRAF_RED1_PIN,1);
BusOut leds(TRAF_RED1_PIN, TRAF_YEL1_PIN, TRAF_GRN1_PIN);

int main()
{   
    void lights();
        
    while (true) {
                        //Binary 000
        //leds = 1;
        //leds = 2;
        //leds = 3;
        //leds = 4;
        //leds = 5;
        //leds = 6;
        //leds = 7;   //Binary 111
        //wait_us(500000);    
    }
}

void lights()
    {
    while (true) {
        for (int i=0 ; i < 8 ; i++){
            leds = i;       //Binary values of 000 to 111
            wait_us(500000);
        }
    }
}
