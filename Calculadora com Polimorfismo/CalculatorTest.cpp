/**
 * This file defines test routines for calculator and its components.
 * Author: Lucio Valentin
 * Version: 20210316
 */
#include <iostream>
#include "Calculator.h"

class DisplayTest{
  public:
    static void run(Display* display){
        /*display->clear();
        display->addDigit(ZERO);
        display->addDigit(ONE);
        display->addDigit(TWO);
        display->addDigit(THREE);
        display->addDigit(FOUR);
        display->setDecimalSeparator();
        display->addDigit(FIVE);
        display->addDigit(SIX);
        display->addDigit(SEVEN);
        display->addDigit(EIGHT);
        display->addDigit(NINE);*/
    }
};

class CpuTest{
  public:
    static void run(Cpu* cpu, Display* display){
          cpu->setDisplay(display);
          
          cpu->receiveDigit(ONE);
          cpu->receiveOperation(ADDITION);
          cpu->receiveDigit(ONE);


          cpu->receiveOperation(EQUAL);

          // printf("FOI\n");

          cpu->reset();

    }
};

class ButtonTest{
    public:
      static void run(Button* button){
        button->press();
      }
};

class KeyboardTest{
  public:
    static void run(Keyboard* keyboard){
      char symbols[] = {'0', '1', '2', '+',  '3', '=', 'C'};
      for(const char &symbol: symbols){
        Button* button = keyboard->findButtonBySymbol(symbol);
        if(button)
          ButtonTest::run(button);
        else
          std::cerr << "No button found for symbol '" << symbol << "'.\n";
      }  
    }
};

class CalculatorTest{
    public:
      static void run(Calculator* calculator){
          DisplayTest::run(calculator->getDisplay());
          CpuTest::run(calculator->getCpu(), calculator->getDisplay());
          KeyboardTest::run(calculator->getKeyboard());
          
          calculator->getKeyboard()->findButtonBySymbol('C')->press();

          calculator->getKeyboard()->findButtonBySymbol('1')->press();
          calculator->getKeyboard()->findButtonBySymbol('2')->press();
          calculator->getKeyboard()->findButtonBySymbol('3')->press();
          calculator->getKeyboard()->findButtonBySymbol('+')->press();
          calculator->getKeyboard()->findButtonBySymbol('4')->press();
          calculator->getKeyboard()->findButtonBySymbol('5')->press();
          calculator->getKeyboard()->findButtonBySymbol('6')->press();
          calculator->getKeyboard()->findButtonBySymbol('=')->press();

          calculator->getKeyboard()->findButtonBySymbol('-')->press();
          calculator->getKeyboard()->findButtonBySymbol('7')->press();
          calculator->getKeyboard()->findButtonBySymbol('8')->press();

          calculator->getKeyboard()->findButtonBySymbol('-')->press();
          calculator->getKeyboard()->findButtonBySymbol('9')->press();
          calculator->getKeyboard()->findButtonBySymbol('=')->press();

      }
};
