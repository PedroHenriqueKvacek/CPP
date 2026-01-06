#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    double fahrenheit, celsius;

    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5 / 9;

    cout << "Temperatura em Celsius: " <<celsius << " °C" << endl;

    return 0;
}
