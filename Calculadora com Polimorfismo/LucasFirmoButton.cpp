#include "LucasFirmoButton.h"


LucasFirmoButton::LucasFirmoButton(){

}

void LucasFirmoButton::setKeyboard(Keyboard*){

}

void LucasFirmoButton::setCpu(Cpu* cpu){
	this->cpu = cpu;
}

Keyboard* LucasFirmoButton::getKeyboard(){
	return nullptr;
}

void LucasFirmoButton::press(){

	this->cpu->receiveDigit(ONE);


	std::cout << ONE;

}
char LucasFirmoButton::getSymbol(){}