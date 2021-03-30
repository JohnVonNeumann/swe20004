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
    const double power = 2.0;

    uint8_t F;
    uint8_t R;
    float C;
    float L;
    uint8_t E;
    double I;

    std::cout << "Please input your values in a space delimited string in the format of:" << std::endl;
    std::cout << "Frequency Resistance Capacitance Inductance EMF" << std::endl;
    std::scanf("%hhu %hhu %f %f %hhu", &F, &R, &C, &L, &E);
    std::cout << +F << " " << +R << " " << C << " " << L << " " << +E << std::endl;

    I = E / sqrt(pow(R, power) + pow(((2 * M_PI * F * L) - ( 1 / (2 * M_PI * F * C))), power));

    std::cout << "Current: " <<  I << std::endl;

    return 0;
}
