#include "LucasFirmoButton.h"


LucasFirmoButton::LucasFirmoButton(char c, Digit value, Cpu* cpu){

	this->cpu = cpu;

	this->cpu->receiveDigit(value);

}

void LucasFirmoButton::setKeyboard(Keyboard* keyboard){

	this->keyboard = keyboard;

}

void LucasFirmoButton::setCpu(Cpu* cpu){

	this->cpu = cpu;
}

Keyboard* LucasFirmoButton::getKeyboard(){
	return nullptr;
}

void LucasFirmoButton::press(){}
char LucasFirmoButton::getSymbol(Operation value){}