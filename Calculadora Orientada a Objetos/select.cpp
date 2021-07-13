#include <iostream>
#include "select.h"
#include "calculator.h"
#include "display.h"
#include "buttons.h"

Select::Select(){

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
        on = 'o';
}

void List::inicialing(){
    numbers = new int(2);
}

void List::add(int value){
    Display d;
    d.decoderDisplay(value);
    numbers[qtd] = value;
    qtd++;
}

void Select::operation(int value){
    opc = value;
}

void Select::select(int value){
    Calculator c;
    Select i;
    Buttons b;
    List l;

    if(i.on == value){
        l.inicialing();
    }
    else if(i.five == value){
        l.add(value);
    }else if(i.nine == value){
        l.add(value);
    }else if(i.addition == value){
        operation(value);
    }else if(i.equal == value){
        if(opc == '+'){
            int result = l.numbers[0] + l.numbers[1];
            std::cout << result << "\n";
        }
    }

}