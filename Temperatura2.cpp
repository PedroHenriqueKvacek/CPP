#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    double celsius, fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius - 32) * 5 / 9;

    cout << "Temperatura em Fahrenheit: " << fahrenheit << " °F" << endl;

    return 0;
}
