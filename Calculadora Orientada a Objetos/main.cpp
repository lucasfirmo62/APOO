#include <iostream>
#include "select.h"
#include "display.h"
#include "calculator.h"
#include "buttons.h"

int main() {

    Select s;
    Buttons b;

    s.select(b.on);

    //press 5*7=
    s.select(b.five);
    s.select(b.addition);
    s.select(b.nine);
    s.select(b.equal);

    List l;

    return 0;
}