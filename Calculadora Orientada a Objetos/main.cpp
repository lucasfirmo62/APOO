#include <iostream>
#include "select.h"
#include "display.h"
#include "calculator.h"
#include "buttons.h"

int main() {

    Select s;
    Buttons b;

    s.select(b.on);

    //press 5+7=
    s.select(b.five);
    s.select(b.addition);
    s.select(b.nine);
    s.select(b.equal);

    s.select(b.on);

    //press 8-4=
    s.select(b.eight);
    s.select(b.subtraction);
    s.select(b.four);
    s.select(b.equal);

    s.select(b.on);

    //press 2*3=
    s.select(b.two);
    s.select(b.multiplication);
    s.select(b.three);
    s.select(b.equal);

    s.select(b.on);


    return 0;
}