#include "Calculator.h"
#include <iostream>
#include "LucasFirmoDisplay.h"
#include "LucasFirmoKeyboard.h"
#include "LucasFirmoButtonNull.h"
#pragma once

class LucasFirmoButton: public virtual Button{
  public:
    void setKeyboard(Keyboard*){   }
    Keyboard* getKeyboard(){ return new LucasFirmoKeyboard(new LucasFirmoCpu(new LucasFirmoDisplay())); }
    void press(){    }
    char getSymbol(){  return 0;  }
};

class LucasFirmoDigitButton: public LucasFirmoButton, public DigitButton{
  public:
    Digit getDigit(){ return ZERO;  }
};

class LucasFirmoOperationButton: public LucasFirmoButton, public OperationButton{
  public:
    Operation getOperation(){ return NONE; }
};

class LucasFirmoControlButton: public LucasFirmoButton, public ControlButton{
  public:
    Control getControl(){ return OFF; }
};