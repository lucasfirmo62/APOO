#include "Calculator.h"
#include "CalculatorTest.cpp"
#include "LucasFirmoDisplay.h"
#include "LucasFirmoCPU.h"
#include "LucasFirmoCalculator.h"
#include "LucasFirmoKeyboard.h"
#include "LucasFirmoButton.h"
#include <iostream>

/* Here include your .h files */

int main(){

    /* Replace all Mockups classes with yours own */
    Display* display = new LucasFirmoDisplay();

    Cpu* cpu = new LucasFirmoCpu(display);

    Keyboard* keyboard = new LucasFirmoKeyboard(cpu);

    Button* Bzero = new LucasFirmoButton('0', ZERO, cpu);
    Button* Bone = new LucasFirmoButton('1', ONE, cpu);
    Button* Btwo = new LucasFirmoButton('2', TWO, cpu);
    Button* Bthree = new LucasFirmoButton('3', THREE, cpu);
    Button* Bfour = new LucasFirmoButton('4', FOUR, cpu);
    Button* Bfive = new LucasFirmoButton('5', FIVE, cpu);
    Button* Bsix = new LucasFirmoButton('6', SIX, cpu);
    Button* Bseven = new LucasFirmoButton('7', SEVEN, cpu);
    Button* Beight = new LucasFirmoButton('8', EIGHT, cpu);
    Button* Bnine = new LucasFirmoButton('9', NINE, cpu);

    keyboard->addButton(Bzero);
    keyboard->addButton(Bone);
    keyboard->addButton(Btwo);
    keyboard->addButton(Bthree);
    keyboard->addButton(Bfour);
    keyboard->addButton(Bfive);
    keyboard->addButton(Bsix);
    keyboard->addButton(Bseven);
    keyboard->addButton(Beight);
    keyboard->addButton(Bnine);


    Calculator* calculator = new LucasFirmoCalculator(display, cpu, keyboard);

    /* This section is common to all codes */
    DisplayTest::run(display);
    CpuTest::run(cpu, display);
    KeyboardTest::run(keyboard);
    CalculatorTest::run(calculator);

    /* If you prefer, implement your own tests here */


    return 0;
}
