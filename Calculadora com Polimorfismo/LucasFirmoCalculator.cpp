#include "LucasFirmoCalculator.h"
#include "LucasFirmoDisplay.h"
#include "LucasFirmoKeyboard.h"
#include "LucasFirmoCPU.h"


    LucasFirmoCalculator::LucasFirmoCalculator(Display*, Cpu*, Keyboard*){  }

	//LucasFirmoCalculator::~LucasFirmoCalculator(){}

    void LucasFirmoCalculator::setKeyboard(Keyboard*){   }
    Keyboard* LucasFirmoCalculator::getKeyboard(){ return new LucasFirmoKeyboard(new LucasFirmoCpu(new LucasFirmoDisplay())); }

    void LucasFirmoCalculator::setDisplay(Display* display){   }
    Display* LucasFirmoCalculator::getDisplay(){ return new LucasFirmoDisplay(); }

    void LucasFirmoCalculator::setCpu(Cpu* cpu){   }
    Cpu* LucasFirmoCalculator::getCpu(){ return new LucasFirmoCpu(new LucasFirmoDisplay()); }