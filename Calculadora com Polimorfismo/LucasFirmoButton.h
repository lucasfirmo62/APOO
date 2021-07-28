#include "Calculator.h"
#include <iostream>
#include "LucasFirmoDisplay.h"
#include "LucasFirmoKeyboard.h"
#pragma once

class LucasFirmoButton: public virtual Button{
  private:
    Cpu* cpu;
  public:
    LucasFirmoButton();
    void setKeyboard(Keyboard*);
    void setCpu(Cpu* cpu);
    Keyboard* getKeyboard();
    void press();
    char getSymbol();
};