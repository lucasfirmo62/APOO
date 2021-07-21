#include "LucasFirmoButton.h"


void LucasFirmoButtonNull::setKeyboard(Keyboard*){   }
Keyboard* LucasFirmoButtonNull::getKeyboard(){ return nullptr; }
void LucasFirmoButtonNull::press(){    }
char LucasFirmoButtonNull::getSymbol(){  return 0;  }
void LucasFirmoButton::setKeyboard(Keyboard*){   }
Keyboard* LucasFirmoButton::getKeyboard(){ return new LucasFirmoKeyboard(new LucasFirmoCpu(new LucasFirmoDisplay())); }
void LucasFirmoButton::press(){    }
char LucasFirmoButton::getSymbol(){  return 0;  }

Digit getDigit(){ return ZERO;  }
Operation getOperation(){ return NONE; }
Control getControl(){ return OFF; }
