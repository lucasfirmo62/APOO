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
    this->button = button;
}

void LucasFirmoKeyboard::addButton(Button* button){
    button->setKeyboard(this);
    this->LucasFirmoButtons[0] = button;
}
Button* LucasFirmoKeyboard::findButtonBySymbol(char value){

    if(value == '0'){
        return new LucasFirmoButton('0', ZERO, cpu);
    }if(value == '1'){
        return new LucasFirmoButton('1', ONE, cpu);
    }if(value == '2'){
        return new LucasFirmoButton('2', TWO,cpu);
    }if(value == '3'){
        return new LucasFirmoButton('3', THREE,cpu);
    }if(value == '4'){
        return new LucasFirmoButton('4', FOUR,cpu);
    }if(value == '5'){
        return new LucasFirmoButton('5', FIVE,cpu);
    }if(value == '6'){
        return new LucasFirmoButton('6', SIX,cpu);
    }if(value == '7'){
        return new LucasFirmoButton('7', SEVEN,cpu);
    }if(value == '8'){
        return new LucasFirmoButton('8', EIGHT,cpu);
    }if(value == '9'){
        return new LucasFirmoButton('9', NINE,cpu);
    }if(value == '+'){
        this->cpu->receiveOperation(ADDITION);
    }if(value == '-'){
        this->cpu->receiveOperation(SUBTRACTION);
    }if(value == '/'){
        this->cpu->receiveOperation(DIVISION);
    }if(value == '*'){
        this->cpu->receiveOperation(MULTIPLICATION);
    }if(value == '='){
        this->cpu->receiveOperation(EQUAL);
    }
}

void LucasFirmoKeyboard::pressButton(Digit value){

    this->cpu->receiveDigit(value);
}