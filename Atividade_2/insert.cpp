#include <iostream>
#include "insert.h"
#include "calculator.h"
#include "display.h"
#include "buttons.h"

Insert::Insert(){

        equal = '=';
        division = '/';
        addition = '+';
        multiplication = '*';
        squareRoot = 'vr';
        subtraction = '-';
        zero = 0;
        one = 1;
        two = 2;
        three = 3;
        four = 4;
        five = 5;
        six = 6;
        seven = 7;
        eight = 8;
        nine = 9;
}

void Insert::select(int value1, int operation, int value2, int equal){
    Calculator c;
    Insert i;
    Buttons b;

    if(value1 == b.zero){
        value1 = zero;
    }else if(value1 == b.one){
        value1 = one;
    }else if(value1 == b.two){
        value1 = two;
    }else if(value1 == b.three){
        value1 = three;
    }else if(value1 == b.four){
        value1 = four;
    }else if(value1 == b.five){
        value1 = five;
    }else if(value1 == b.six){
        value1 = six;
    }else if(value1 == b.seven){
        value1 = seven;
    }else if(value1 == b.eight){
        value1 = eight;
    }else if(value1 == b.nine){
        value1 = nine;
    }

    if(value2 == b.zero){
        value2 = zero;
    }else if(value2 == b.one){
        value2 = one;
    }else if(value2 == b.two){
        value2 = two;
    }else if(value2 == b.three){
        value2 = three;
    }else if(value2 == b.four){
        value2 = four;
    }else if(value2 == b.five){
        value2 = five;
    }else if(value2 == b.six){
        value2 = six;
    }else if(value2 == b.seven){
        value2 = seven;
    }else if(value2 == b.eight){
        value2 = eight;
    }else if(value2 == b.nine){
        value2 = nine;
    }


    if(equal == i.equal){
        if(operation == i.addition){
            c.addition(value1, value2);
        }else if(operation == i.multiplication){
            c.multiplication(value1, value2);
        }else if(operation == i.subtraction){
            c.subtraction(value1, value2);
        }else if(operation == i.squareRoot){
            c.squareRoot(value1);
        }else if(operation == i.division){
            c.division(value1, value2);
        }
    }

}