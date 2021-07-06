#include <iostream>
#include "insert.h"
#include "display.h"
#include "calculator.h"
#include "buttons.h"

int main() {

    Insert i;
    Buttons b;

    //press 5*7=
    i.select(b.five, b.multiplication, b.seven, b.equal);

    //press 3+9=
    i.select(b.three, b.addition, b.nine, b.equal);

    //press 2-4=
    i.select(b.two, b.subtraction, b.four, b.equal);

    //press 4+5* --- error
    i.select(b.four, b.addition, b.four, b.multiplication);

    //press 9√=
    i.select(b.nine, b.squareRoot, b.zero, b.equal);

    return 0;
}