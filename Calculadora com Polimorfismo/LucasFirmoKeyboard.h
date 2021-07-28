#include <iostream>
#include "Calculator.h"
#include "LucasFirmoCPU.h"
#pragma once

class LucasFirmoKeyboard: public Keyboard{
  private:
    Cpu* cpu;
    Button* LucasFirmoButtons[1];
  public:
    LucasFirmoKeyboard(Cpu* cpu);
    void setCpu(Cpu* cpu);
    void press(Button* button);
    void addButton(Button* button);
    Button* findButtonBySymbol(char value);
    void pressButton(Digit value);
};