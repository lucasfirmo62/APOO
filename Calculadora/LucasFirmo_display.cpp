#include <iostream>
#include "LucasFirmo_display.h"
#include "LucasFirmo_buttons.h"

/*int Display::count(int N){
    Display d;

    int cont = 1;

    if(N >= 10){
      N = N/10;
      cont = cont + d.count(N);
    }
    return cont;
}*/

void Display::separator(int number){

    int back = number % 10;
    int front = int(number / 10);

    Decoder(front);
    Decoder(back);

}

void Display::Decoder(int value){
    Buttons b;
    Display d;
    if(value < 10 && value >= 0){
        if(value == 0){
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
    }else if(value > 9){
        d.separator(value);
    }
}