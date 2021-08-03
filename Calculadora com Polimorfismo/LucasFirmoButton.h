#include "Calculator.h"
#include <iostream>
#include "LucasFirmoDisplay.h"
#include "LucasFirmoKeyboard.h"
#pragma once

class LucasFirmoButton: public virtual Button{
  private:
    Button* digitButton;
    Cpu* cpu;
    Keyboard* keyboard;
  public:
    LucasFirmoButton(char c, Digit value, Cpu* cpu);
    void setKeyboard(Keyboard* keyboard);
    void setCpu(Cpu* cpu);
    Keyboard* getKeyboard();
    void press();
    char getSymbol(Operation value);
};