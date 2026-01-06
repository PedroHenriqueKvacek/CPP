#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

const float PI = 3.141592;

int main(void)
{
    float V, H , R;

    cout << "Entre a altura ...:";
    cin >> H;
    cin.ignore(80, '\n');

    cout << "Enter o raio ...:";
    cin >> R;
    cin.ignore(80, '\n');

    V = H * PI * pow(R, 2);

    cout << "Area do cilindro .: " << V << endl;

    cout << endl;
    cout << "Tecle <Enter> para encerrar ...:";
    cin.get();
    return 0 ;
}