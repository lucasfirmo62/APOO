#include "LucasFirmoCPU.h"
#include "LucasFirmoDisplay.h"


LucasFirmoCpu::LucasFirmoCpu (Display * display){
  this->corse = 0;
  ini = 0;
}

void LucasFirmoCpu::setDisplay (Display * display){
  this->display = display;
  numbers = new int (2);
}


Display *LucasFirmoCpu::getDisplay (){
  return new LucasFirmoDisplay ();
}



void LucasFirmoCpu::add (int value){
  numbers[qtd++] = value;
}

void LucasFirmoCpu::toInt(char number){
  numberInt = atoi(displayNumbers);
}

void LucasFirmoCpu::toString(Digit value){
  for(int i = ini; i< 9; i++){
    displayNumbers[i] = value;
    ini++;
    break;
  }
}

void LucasFirmoCpu::receiveDigit (Digit value){

  LucasFirmoDisplay D;

    D.addDigit(value);

  if (result != 0){
      numbers[0] = result;
      numbers[1] = value;
      return;
    }

  if (numbers == NULL){
      numbers = new int (2);
      qtd = 0;
    }


    toString(value);

}

void LucasFirmoCpu::receiveOperation (Operation value){

  LucasFirmoDisplay D;

  if (value == (ADDITION || SUBTRACTION || DIVISION || MULTIPLICATION)){
      saveOperation = value;
    }

  if (value == 4){
    if(saveOperation == 0){
        result = numbers[0] + numbers[1];
        D.resultDigit (result);
    }
    if (saveOperation == 1){
      result = numbers[0] - numbers[1];
      D.resultDigit (result);
    }
    if (saveOperation == 2){
      result = numbers[0] / numbers[1];
      D.resultDigit (result);
    }
    if (saveOperation == 3){
      result = numbers[0] * numbers[1];
      D.resultDigit (result);
    }
  }
}

void
LucasFirmoCpu::receiveControl (Control){
}

void
LucasFirmoCpu::cancel (){
  result = 0;
}

void LucasFirmoCpu::reset (){
  qtd = 0;
  result = 0;
  delete numbers;
  std::cout << "\n\n\n\n\n";
  numberUnion = 0;
}
