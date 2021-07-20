#include "Calculator.h"
#include <iostream>
#include "LucasFirmoDisplay.h"
#pragma once

class LucasFirmoButtonNull: public virtual Button{
  public:
    void setKeyboard(Keyboard*){   }
    Keyboard* getKeyboard(){ return nullptr; }
    void press(){    }
    char getSymbol(){  return 0;  }
};