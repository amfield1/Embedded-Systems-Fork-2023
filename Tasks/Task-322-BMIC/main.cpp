#include "mbed.h"
#include "Human.h"

int main(int argc, const char * argv[]) {


    // ***************
    // USING THE C API
    // ***************
   
    //Designated initialiser
    Human person = initHuman(45, 97, 1.9);      //Value semantics
    displayHuman(&person);
    
    //After a major lifestyle change
    updateWeight(&person, 75.0);
    displayHuman(&person);

    return 0;
}


//inithuman - the constructor will group all of a Humans data into an array i.e age, weight and height
//... then the BMI is calculated afterwards, to avoid any incorrect calculations or forgetting to re-calculate after the data has been updated.
//... the data type returned is the complex figure of hh

// Value semantic means that you access a copy, while reference semantic means that you access the actual thing