#include "LucasFirmoCPU.h"
#include "LucasFirmoDisplay.h"

LucasFirmoCpu::LucasFirmoCpu(Display* display){  }

    void LucasFirmoCpu::setDisplay(Display* display){
      //this->display = display;
    }
    Display* LucasFirmoCpu::getDisplay(){ return new LucasFirmoDisplay();  }

    void LucasFirmoCpu::add(Digit value){
      numbers[qtd++] = value;
      //qtd++;
    }
    
    void LucasFirmoCpu::receiveDigit(Digit value){
      LucasFirmoDisplay D;

      D.addDigit(value);

      if(numbers == NULL){
          numbers = new int(2);
          qtd = 0;
      }

      add(value);

    }
    void LucasFirmoCpu::receiveOperation(Operation value){

    	LucasFirmoDisplay D;

    	if(value == (ADDITION || SUBTRACTION || DIVISION || MULTIPLICATION)){
    		saveOperation = value;
    	}


    	if(value == 4){
    		if(saveOperation == 0){
      				}if(saveOperation == 0){
		        		result = numbers[0] + numbers[1];
		        		D.resultDigit(result);
			    	}if(saveOperation == 1){
        				result = numbers[0] - numbers[1];
		        		std::cout << "result = " << result << "\n\n";
			    	}if(saveOperation == 2){
        				result = numbers[0] / numbers[1];
		        		std::cout << "result = " << result << "\n\n";
			    	}if(saveOperation == 3){
        				result = numbers[0] * numbers[1];
		        		std::cout << "result = " << result << "\n\n";
			    	}
    	}
    } 

    void LucasFirmoCpu::receiveControl(Control){   } 
    void LucasFirmoCpu::cancel(){
    	result = 0;
    }
    void LucasFirmoCpu::reset(){   
        qtd = 0;
        result = 0;
        delete numbers;
        std::cout << "\n\n\n\n\n";
    } 