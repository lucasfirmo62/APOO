#include <iostream>
#include <math.h>
#include "calculator.h"
#include "display.h"
#include "menu.h"


void Calculator::addition(int value1, int value2){
    Calculator c;
    Display display;
    Buttons b;

    int result = value1 + value2;

    display.decoderDisplay(result);

}

void Calculator::multiplication(int value1, int value2){
    Calculator c;
    Display display;
    Buttons b;

    int result = value1 * value2;

    display.decoderDisplay(result);

}

void Calculator::subtraction(int value1, int value2){
    Calculator c;
    Display display;
    Buttons b;

    int result = value1 - value2;

    display.decoderDisplay(result);

}

void Calculator::division(int value1, int value2){
    Calculator c;
    Display display;
    Buttons b;

    int result = value1 / value2;

    display.decoderDisplay(result);

}

void Calculator::squareRoot(int value){
    Calculator c;
    Display display;
    Buttons b;

    int result = sqrt(value);

    display.decoderDisplay(result);

}