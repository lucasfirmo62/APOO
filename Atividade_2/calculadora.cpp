#include <iostream>

class Menu{
    public:
        char division = '/';
        char addition = '+';
        char multiplication = '*';
        int zero = 0;
        int one = 1;
        int two = 2;
        int three = 3;
        int four = 4;
        int five = 5;
        int six = 6;
        int seven = 7;
        int eight = 8;
        int nine = 9;
        void select(int, char, int);
};

class Functions{
    private:
        int value1;
        int value2;
    public:
        void division(int, int);
        void addition(int, int);
        void multiplication(int, int);
};

class Display{
    private:
        char menssage;
        int value;
    public:
        void decoderDisplay(char, int);
};



int main() {

    Menu m;

    m.select(m.one, m.addition, m.two);

    m.select(m.two, m.multiplication, m.five);

    return 0;
}

void Display::decoderDisplay(char menssage, int value){
    std::cout << value << "\n";
}

void Menu::select(int value1, char opc, int value2){
    Functions function;
    Menu m;

    if(opc == '/'){
        function.division(value1, value2);
    }else if(opc == '+'){
        function.addition(value1, value2);
    }else if(opc == '*'){
        function.multiplication(value1, value2);
    }
}

void Functions::division(int value1, int value2){
    Display display;
    float result = value1/value2;
    char menssage[] = "hello";
    display.decoderDisplay(menssage[6], result);
}

void Functions::addition(int value1, int value2){
    Display display;
    float result = value1+value2;
    char menssage[] = "hello";
    display.decoderDisplay(menssage[6], result);
}

void Functions::multiplication(int value1, int value2){
    Display display;
    float result = value1*value2;
    char menssage[] = "hello";
    display.decoderDisplay(menssage[6], result);
}