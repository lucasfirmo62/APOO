#include <iostream>

class Select{
    private:
        int equal;
        int division;
        int addition;
        int multiplication;
        int squareRoot;
        int subtraction;
        int zero;
        int one;
        int two;
        int three;
        int four;
        int five;
        int six;
        int seven;
        int eight;
        int nine;
        int on;
        char values[100];
        int opc;
    public:
        void select(int);
        void operation(int);
        Select();
        ~Select(){};
};

class List{
    private: 
        int qtd;
        
    public:
        void inicialing();
        void add(int);
        int* numbers;
};