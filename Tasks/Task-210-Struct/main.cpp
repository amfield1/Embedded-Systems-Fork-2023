#include "mbed.h"
#include <cstdio>

// Date Type ComplexNumber_C
typedef struct {
  double real;
  double imag;
} ComplexNumber_C;


int main() {

    //Create instance of a complex number
    ComplexNumber_C p;
    ComplexNumber_C y;

    //Initialise each attribute 
    p.real = 2.0;
    p.imag = 3.0;
    y.imag = 0.0;     //Y values don't have to be initialised before calculation
    y.real = 0.0;
    
    //Create and Initialise 
    ComplexNumber_C q = {1.0, 1.0};
    y.real = {p.real+q.real};
    y.imag = {p.imag+q.imag};

    // TASK:
    // Create another complex number y
    // Calculate the complex sum of p and q and store in y
    // Use printf to display as a complex number (hint: you need two placeholders)
    
    while (true) {
        printf("\n%f + i%f",y.real,y.imag);
        break;
    }
}
