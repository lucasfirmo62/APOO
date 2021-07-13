#include <iostream>
#include "display.h"
#include "buttons.h"

void Display::Decoder(int value){
    Buttons b;
    if(value < 10){
        if(value == b.zero){
            char number[30] = "00000\n0   0\n0   0\n0   0\n00000";
            std::cout << number << "\n\n";
        }else if(value == 1){
            char number[30] = "    0\n    0\n    0\n    0\n    0";
            std::cout << number << "\n\n";
        }else if(value == 2){
            char number[30] = "00000\n    0\n00000\n0    \n00000";
            std::cout << number << "\n\n";
        }else if(value == 3){
            char number[30] = "00000\n    0\n00000\n    0\n00000";
            std::cout << number << "\n\n";
        }else if(value == 4){
            char number[30] = "0   0\n0   0\n00000\n    0\n    0";
            std::cout << number << "\n\n";
        }else if(value == 5){
            char number[30] = "00000\n0    \n00000\n    0\n00000";
            std::cout << number << "\n\n";
        }else if(value == 6){
            char number[30] = "00000\n0    \n00000\n0   0\n00000";
            std::cout << number << "\n\n";
        }else if(value == 7){
            char number[30] = "00000\n    0\n    0\n    0\n    0";
            std::cout << number << "\n\n";
        }else if(value == 8){
            char number[30] = "00000\n0   0\n00000\n0   0\n00000";
            std::cout << number << "\n\n";
        }else if(value == 9){
            char number[30] = "00000\n0   0\n00000\n    0\n    0";
            std::cout << number << "\n\n";
        }
    }
}