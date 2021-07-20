#include <iostream>
#include "Calculator.h"
#include "LucasFirmoKeyboard.h"
#pragma once


class LucasFirmoCalculator: public Calculator{
  public:
    LucasFirmoCalculator(Display*, Cpu*, Keyboard*){  }

    void setKeyboard(Keyboard*){   }
    Keyboard* getKeyboard(){ return new LucasFirmoKeyboard(new LucasFirmoCpu(new LucasFirmoDisplay())); }

    void setDisplay(Display* display){   }
    Display* getDisplay(){ return new LucasFirmoDisplay(); }

    void setCpu(Cpu* cpu){   }
    Cpu* getCpu(){ return new LucasFirmoCpu(new LucasFirmoDisplay()); }
};