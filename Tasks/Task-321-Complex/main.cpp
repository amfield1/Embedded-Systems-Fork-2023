#include "mbed.h"
#include "ComplexNumber.hpp"

// main() runs in its own thread in the OS
int main()
{
    ComplexNumber c1(2.0,3.0);
    ComplexNumber c2(1.0,-1.0);
    ComplexNumber c1_copy = c1;           //When the constructor "ComplexNumber(const ComplexNumber& c){}" is commented out, this does not effect the results of the code
    c1.add(c2);   //c1 = c1 + c2
    c1.display();
    c1_copy.display();
    
    ComplexNumber c3 = c1.addedTo(c2);      //When stepped into - "c" is the c2 and "this" is the c1 numbers
    c3.conjugate();
    c3.display();

    //Create new scope
    {
        ComplexNumber test(1.0);
        test.display();
    }       //Once stepOver has passed this line - the breakpoint on the destructor constructor line is provoked
    //test is now out of scope and should be destroyed

    while (true);
}

