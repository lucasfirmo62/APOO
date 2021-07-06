#include <iostream>

class Calculator{
    private:
        int value1;
        int value2;
    public:
        void addition(int, int);
        void subtraction(int, int);
        void multiplication(int, int);
        void squareRoot(int);
        void division(int, int);
        Calculator(){};
        ~Calculator(){};
};