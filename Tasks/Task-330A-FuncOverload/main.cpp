#include "mbed.h"
#include <cmath>
#include <iostream>
#include <math.h>
#include <string.h>
#include <string>

using namespace std;

class DoubleNumber {
private:

protected:
    double _real;

public:
    //Designated constructor - Constructor 1
    DoubleNumber(double r) {
        _real = r;
        cout << "This is the constructor of Base" << endl;
    }

    //Convenience constructor - Constructor 2
    DoubleNumber() : DoubleNumber(0.0) { }

    //Magnitude
    double magnitude() {
        return fabs(_real);
    }

    //Three overloaded functions
    void setValue(double u) {
        _real = u;
    }
    void setValue(int u) {
        _real = (double)u;
    }
    void setValue(string strVal) {
        _real = stod(strVal);
    }
    /*void setValue(DoubleNumber(DoubleNumber)){            //Task303A.6 - Incomplete
        _real = DoubleNumber;
    }*/

    double getValue() {
        return _real;
    }

    string asString() {
        return to_string(_real);
    }
};


int main()
{
    //Constructor Function overloading 
    DoubleNumber n0(1.0);               //The value of n1 is specified as "1.0" so the first constructor is called.
    DoubleNumber n1;
    DoubleNumber n2;                    //The values of n1 and n2 are not specified, so the second constructor is called to default their values to (0.0).

    //setValue function overloading  
    //n0.setValue(n1);                    //An error occurs trying to use this line, as their is no matching member function for call to "setValue"
    n1.setValue(10);                    //The value called for n1 is noted as an integer, so the overload takes the "int" value and converts it to a double
    n2.setValue("-3.0");                //The overload takes the string value and converts it to a double using the "stod" command
    

    cout << n0.getValue() + n1.getValue() + n2.getValue() << endl;

    while (true) {

    }
}

