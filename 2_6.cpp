#include <iostream>
using namespace std;

class TemperatureConverter {
data:
    int tempCelsius;
public:
    void convertToFahrenheit() {
        int tempFahrenheit;
        cout << "Enter temperature in Fahrenheit ";
        cin >> tempFahrenheit;

        tempCelsius = (tempFahrenheit - 32) * 5 / 9;
    }

    void displayCelsius() {
        cout << "Temperature in Celsius: " << tempCelsius << " °C" << endl;
    }
};

int main() {
    TemperatureConverter converter;
    converter.convertToFahrenheit();
    converter.displayCelsius();

    return 0;
}
