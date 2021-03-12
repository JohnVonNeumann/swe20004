#include <iostream>

using namespace std;

const float fahrenheit_freezing_point = 32.0;
const float cf_deg_change_ratio = 1.8;

int main() {

    float fahrenheit_input;
    float celsius;
    cout << "Fahrenheit to be converted:\n";
    cin >> fahrenheit_input;
    celsius = (fahrenheit_input - fahrenheit_freezing_point) / cf_deg_change_ratio;
    cout << "Celsius:\t" << celsius << endl;

    return 0;
}
