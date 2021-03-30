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
    const double POWER = 2.0;

    uint16_t F;
    uint16_t R;
    float C;
    float L;
    uint16_t E;
    double I;

    std::cout << "Please input your values in a space delimited string in the format of:" << std::endl
              << "Frequency Resistance Capacitance Inductance EMF" << std::endl;

    std::cin >> F >> R >> C >> L >> E;

    I = E / sqrt(pow(R, POWER) + pow(((2 * M_PI * F * L) - ( 1 / (2 * M_PI * F * C))), POWER));

    std::cout << "Current: " <<  I << std::endl;

    return 0;
}
