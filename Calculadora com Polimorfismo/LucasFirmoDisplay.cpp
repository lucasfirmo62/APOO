#include "LucasFirmoDisplay.h"

LucasFirmoDisplay::LucasFirmoDisplay(){}

    void LucasFirmoDisplay::addDigit(Digit value){
      if(value == ZERO){
          std::cout << "00000\n0   0\n0   0\n0   0\n00000" << "\n\n";
      }if(value == ONE){
          char number[30] = "    0\n    0\n    0\n    0\n    0";
          std::cout << number << "\n\n";
      }if(value == TWO){
          char number[30] = "00000\n    0\n00000\n0    \n00000";
          std::cout << number << "\n\n";
      }if(value == THREE){
          char number[30] = "00000\n    0\n00000\n    0\n00000";
          std::cout << number << "\n\n";
      }if(value == FOUR){
          char number[30] = "0   0\n0   0\n00000\n    0\n    0";
          std::cout << number << "\n\n";
      }if(value == FIVE){
          char number[30] = "00000\n0    \n00000\n    0\n00000";
          std::cout << number << "\n\n";
      }if(value == SIX){
          char number[30] = "00000\n0    \n00000\n0   0\n00000";
          std::cout << number << "\n\n";
      }if(value == SEVEN){
          char number[30] = "00000\n    0\n    0\n    0\n    0";
          std::cout << number << "\n\n";
      }if(value == EIGHT){
          char number[30] = "00000\n0   0\n00000\n0   0\n00000";
          std::cout << number << "\n\n";
      }if(value == NINE){
          char number[30] = "00000\n0   0\n00000\n    0\n    0";
          std::cout << number << "\n\n";
      }
}
    void LucasFirmoDisplay::setDecimalSeparator(){
      std::cout << "\n";
    } 
    void LucasFirmoDisplay::setSignal(Signal value){
      if(value == NEGATIVE){
        std::cout <<"     \n     \n00000\n     \n     \n" ;
      }else if(value == POSITIVE){
      std::cout <<"  0  \n  0  \n00000\n  0  \n  0  \n" ;
      }
    } 
    void LucasFirmoDisplay::clear(){
      std::cout <<"\n\n\n\n\n" ;
    } 