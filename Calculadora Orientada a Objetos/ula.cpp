#include <iostream>
#include "ula.h"
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
    d.Decoder(value);
    numbers[qtd] = value;
    qtd++;
}

void Select::operation(int value){
    opc = value;
}

void Select::select(int value){
    Select i;
    Buttons b;
    List l;
    Display d;


    if(value == on){
        l.inicialing();
    }else if(value == addition){
        operation(value);
    }else if(value == equal){
        if(opc == '+'){
            int result = l.numbers[0] + l.numbers[1];
            d.Decoder(result);
        }
    }else{
        l.add(value);
    }

}