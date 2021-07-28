#include "LucasFirmoKeyboard.h"
#include "LucasFirmoButton.h"
#include "LucasFirmoCPU.h"


LucasFirmoKeyboard::LucasFirmoKeyboard(Cpu* cpu){
        this->cpu = cpu;
}
void LucasFirmoKeyboard::setCpu(Cpu* cpu){
    this->cpu = cpu;
}

void LucasFirmoKeyboard::press(Button* button){
    this->cpu->receiveDigit(TWO);
}

void LucasFirmoKeyboard::addButton(Button* button){  button->setKeyboard(this); this->LucasFirmoButtons[0] = button; }
Button* LucasFirmoKeyboard::findButtonBySymbol(char value){ 
    if(value == '1'){
        return new LucasFirmoButton();
    }if(value == '1'){
        return new LucasFirmoButton();
    }
    return new LucasFirmoButton();
}

void LucasFirmoKeyboard::pressButton(Digit value){

    this->cpu->receiveDigit(value);
}