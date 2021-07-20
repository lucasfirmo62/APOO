#include "LucasFirmoKeyboard.h"

    LucasFirmoKeyboard::LucasFirmoKeyboard(Cpu*){   }
    void LucasFirmoKeyboard::setCpu(Cpu*){    }
    Cpu* LucasFirmoKeyboard::LucasFirmoKeyboard::getCpu(){ return new LucasFirmoCpu(new LucasFirmoDisplay()); }
    void LucasFirmoKeyboard::press(Button*){    }
    void LucasFirmoKeyboard::addButton(Button* button){  button->setKeyboard(this); this->LucasFirmoButtons[0] = button; }
    Button* findButtonBySymbol(char){ return new LucasFirmoButtonNull(); }
