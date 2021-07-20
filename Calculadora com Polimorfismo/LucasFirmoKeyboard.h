#include <iostream>
#include "Calculator.h"
#include "LucasFirmoButtonNull.h"
#include "LucasFirmoCPU.h"
#pragma once

class LucasFirmoKeyboard: public Keyboard{
    Button* LucasFirmoButtons[1];
  public:
    LucasFirmoKeyboard(Cpu*);
    void setCpu(Cpu*);
    Cpu* getCpu();
    void press(Button*);
    void addButton(Button* button);
    Button* findButtonBySymbol(char);
};