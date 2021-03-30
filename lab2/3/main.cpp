#include <iostream>
#include <cmath>

/*
 * Program to calculate the current flowing through an AC circuit composed of a
 * resister (resistance R measured in Ohms), a capacitor (capacitance C measured
 * in Farads) and an inductor (inductance L measured in Henrys).
 *
 * I = Current in Amps
 * E = Electromotive Force in Volts
 * R = Resistance in Ohms
 * F = Frequency of the Current in Hertz
 * L = Inductance in Henrys
 * C = Capacitance in Farads
 */

int main() {

    // set POWER as a const as we only use one power in the equation and it is ugly enough
    // without even more numbers
    const double POWER = 2.0;

    // use uint16's here to move to statically sized types that can handle larger inputs
    // than just the test inputs, I wanted to play around with types here, originally ran
    // uint8_t but it turns out they're actually typedefs to char which caused some issues
    // a solution was found (see git history) but it involved a scanf which I was a bit
    // wary of due to a lack of err handling and input validation, which is outside the scope
    // of this solution
    uint16_t F;
    uint16_t R;
    float C;
    float L;
    uint16_t E;
    double I;

    std::cout << "Please input your values in a space delimited string in the format of:" << std::endl
              << "Frequency Resistance Capacitance Inductance EMF" << std::endl;

    // in reality in the future i'd swap this out for something more robust with err handling
    // and input validation
    std::cin >> F >> R >> C >> L >> E;

    // this is ugly, if I was gonna spend more time on this program, i'd split the equation into
    // separate statements and refer to them by the parts of the equation using proper maths terms
    // ... but I'm not
    I = E / sqrt(pow(R, POWER) + pow(((2 * M_PI * F * L) - ( 1 / (2 * M_PI * F * C))), POWER));

    std::cout << "Current: " <<  I << std::endl;

    // probably shouldnt just exit 0
    return 0;
}
