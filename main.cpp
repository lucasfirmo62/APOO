#include <iostream>
#include "menu.h"
#include "display.h"
#include "calculator.h"

int main() {

    Buttons b;

    b.select(b.four, b.multiplication, b.seven, b.equal);

    b.select(b.three, b.addition, b.three, b.equal);

    b.select(b.nine, b.squareRoot, b.zero, b.equal);

    return 0;
}