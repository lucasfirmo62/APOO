#include <iostream>
#include "menu.h"
#include "calculator.h"
#include "display.h"

void Buttons::select(int value1, int operation, int value2, int equal){
    Calculator c;
    Buttons b;
    Display d;

    if(equal == b.equal){
        if(operation == b.addition){
            c.addition(value1, value2);
        }else if(operation == b.multiplication){
            c.multiplication(value1, value2);
        }else if(operation == b.subtraction){
            c.subtraction(value1, value2);
        }else if(operation == b.squareRoot){
            c.squareRoot(value1);
        }else if(operation == b.division){
            c.division(value1, value2);
        }
    }

}