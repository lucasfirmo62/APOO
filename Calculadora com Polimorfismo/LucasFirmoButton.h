#include "Calculator.h"
#include <iostream>
#include "LucasFirmoDisplay.h"
#include "LucasFirmoKeyboard.h"
#include "LucasFirmoButtonNull.h"
#pragma once

class LucasFirmoButtonNull: public virtual Button{
  public:
    void setKeyboard(Keyboard*);
    Keyboard* getKeyboard();
    void press();
    char getSymbol();
};

class LucasFirmoButton: public virtual Button{
  public:
    void setKeyboard(Keyboard*);
    Keyboard* getKeyboard();
    void press();
    char getSymbol();
};

class LucasFirmoDigitButton: public LucasFirmoButton, public DigitButton{
  public:
    Digit getDigit();
};

class LucasFirmoOperationButton: public LucasFirmoButton, public OperationButton{
  public:
    Operation getOperation();
};

class LucasFirmoControlButton: public LucasFirmoButton, public ControlButton{
  public:
    Control getControl();
};