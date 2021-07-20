#include "Calculator.h"
#include <iostream>
#pragma once

class LucasFirmoButtonNull: public virtual Button{
  public:
    void setKeyboard(Keyboard*);
    Keyboard* getKeyboard();
    void press();
    char getSymbol();
};