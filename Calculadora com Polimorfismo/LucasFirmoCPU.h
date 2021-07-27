#include <iostream>
#include "Calculator.h"
#include "LucasFirmoDisplay.h"
#include <stdlib.h>


#pragma once

//enum Digit{ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};
//enum Operation{ADDITION, SUBTRACTION, DIVISION, MULTIPLICATION, EQUAL, NONE};
//enum Signal{POSITIVE, NEGATIVE};
//enum Control{ON, OFF, CANCEL, RESET, MEMORY_READ_CLEAR, MEMORY_ADDITION, MEMORY_SUBTRACTION};

class LucasFirmoCpu: public Cpu{
  private:
    int numberUnion;
    int* numbers;
    int qtd;
    int result;
    int corse;
    int ini;
    char displayNumbers[9];
    int numberInt;
    char* dispNumb;
    //char values[100];

  public:
    LucasFirmoCpu(Display* display);
    void setDisplay(Display* display);
    Display* getDisplay();
    void add(int value);
    void receiveDigit(Digit value);
    void receiveOperation(Operation value);
    void receiveControl(Control value);
    void cancel();
    void reset();
    int saveOperation;
    void toString(Digit value);
    void toInt(char number);
};