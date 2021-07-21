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

    Calculator* calculator = new LucasFirmoCalculator(display, cpu, keyboard);

    /* This section is common to all codes */
    DisplayTest::run(display);
    CpuTest::run(cpu, display);
    KeyboardTest::run(keyboard);
    CalculatorTest::run(calculator);

    /* If you prefer, implement your own tests here */


    return 0;
}
