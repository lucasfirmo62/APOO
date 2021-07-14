#include <iostream>
#include "LucasFirmo_ula.h"
#include "LucasFirmo_display.h"
#include "LucasFirmo_buttons.h"

int main() {

    Select s;
    Buttons b;

    s.select(b.on);

    //ainda só funciona com numeros de 1 dígito

    //press 7+9=
    s.select(b.seven);
    s.select(b.addition);
    s.select(b.nine);
    s.select(b.equal);

    s.select(b.on);//clean

    //press 8-4=
    s.select(b.eight);
    s.select(b.subtraction);
    s.select(b.four);
    s.select(b.equal);

    s.select(b.on);//clean

    //press 5*8=
    s.select(b.five);
    s.select(b.multiplication);
    s.select(b.eight);
    s.select(b.equal);

    s.select(b.on);//clean


    return 0;
}