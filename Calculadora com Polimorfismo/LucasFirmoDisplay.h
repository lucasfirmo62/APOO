#include <iostream>
#include "Calculator.h"
#pragma once

class LucasFirmoDisplay: public Display{
  public:
    void addDigit(Digit value);
    void setDecimalSeparator(); 
    void setSignal(Signal value);
    void clear();
    void resultDigit(int result);
    void MindSepResult(int result);
    LucasFirmoDisplay();
};