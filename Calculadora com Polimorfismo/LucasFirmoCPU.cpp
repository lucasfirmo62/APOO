#include "LucasFirmoCPU.h"
#include "LucasFirmoDisplay.h"

LucasFirmoCpu::LucasFirmoCpu (Display * display)
{
}

void
LucasFirmoCpu::setDisplay (Display * display)
{
  //this->display = display;
}


int
LucasFirmoCpu::concatenateDigits (int a, int b)
{
  int result = 10;
  while (b / result > 0)
    result *= 10;
  return b + result * a;
}


Display *
LucasFirmoCpu::getDisplay ()
{
  return new LucasFirmoDisplay ();
}



void
LucasFirmoCpu::add (int value)
{

  numbers[qtd++] = value;
  //printf("%d\n", value);
  //qtd++;
}


void
LucasFirmoCpu::receiveDigit (Digit value)
{
  LucasFirmoDisplay D;

  if (result != 0)
    {
      //std::cout << "result = " << result;
      numbers[0] = result;
      numbers[1] = value;
      return;
    }

  if (numbers == NULL)
    {
      numbers = new int (2);
      qtd = 0;
    }

  D.addDigit (value);

  // if(value == 0){
  //   numberUnion = concatenateDigits(numberUnion, 0);
  //   add(numberUnion);
  // }if(value == 1){
  //   numberUnion = concatenateDigits(numberUnion, 1);
  //   add(numberUnion);
  // }if(value == 2){
  //   numberUnion = concatenateDigits(numberUnion, 2);
  //   add(numberUnion);
  // }if(value == 3){
  //   numberUnion = concatenateDigits(numberUnion, 3);
  //   add(numberUnion);
  // }if(value == 4){
  //   numberUnion = concatenateDigits(numberUnion, 4);
  //   add(numberUnion);
  // }if(value == 5){
  //   numberUnion = concatenateDigits(numberUnion, 5);
  //   add(numberUnion);
  // }if(value == 6){
  //   numberUnion = concatenateDigits(numberUnion, 6);
  //   add(numberUnion);
  // }if(value == 7){
  //   numberUnion = concatenateDigits(numberUnion, 7);
  //   add(numberUnion);
  // }if(value == 8){
  //   numberUnion = concatenateDigits(numberUnion, 8);
  //   add(numberUnion);
  // }if(value == 9){
  //   numberUnion = concatenateDigits(numberUnion, 9);
  //   add(numberUnion);
  // }

    if(value == 0){
      add(0);
    }if(value == 1){
      add(1);
    }if(value == 2){
      add(2);
    }if(value == 3){
      add(3);
    }if(value == 4){
      add(4);
    }if(value == 5){
      add(5);
    }if(value == 6){
      add(6);
    }if(value == 7){
      add(7);
    }if(value == 8){
      add(8);
    }if(value == 9){
      add(9);
    }

}

void
LucasFirmoCpu::receiveOperation (Operation value)
{

  LucasFirmoDisplay D;

  if (value == (ADDITION || SUBTRACTION || DIVISION || MULTIPLICATION))
    {
      saveOperation = value;
      add (numberUnion);
      numberUnion = 0;
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
LucasFirmoCpu::receiveControl (Control)
{
}

void
LucasFirmoCpu::cancel ()
{
  result = 0;
}

void
LucasFirmoCpu::reset ()
{
  qtd = 0;
  result = 0;
  delete numbers;
  std::cout << "\n\n\n\n\n";
  numberUnion = 0;
}
