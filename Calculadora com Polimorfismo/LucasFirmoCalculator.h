#include <iostream>
#include "Calculator.h"
#pragma once


class LucasFirmoCalculator: public Calculator{
  public:
    LucasFirmoCalculator(Display*, Cpu*, Keyboard*);

    void setKeyboard(Keyboard*);
    Keyboard* getKeyboard();

    void setDisplay(Display* display);
    Display* getDisplay();

    void setCpu(Cpu* cpu);
    Cpu* getCpu();
};