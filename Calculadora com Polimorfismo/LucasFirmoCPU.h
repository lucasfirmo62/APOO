#include <iostream>
#include "Calculator.h"
#pragma once


class LucasFirmoCpu: public Cpu{
  public:
    LucasFirmoCpu(Display*){}
    void setDisplay(Display*){   }
    Display* getDisplay(){ return new LucasFirmoDisplay();  }
    
    void receiveDigit(Digit){   } 
    void receiveOperation(Operation){   } 
    void receiveControl(Control){   } 
    void cancel(){   } 
    void reset(){   } 
};