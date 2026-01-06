#include <iostream>
#include <ciso646>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    double A, B, C;
    cin >> A >> B >> C;
    
    if (A < B + C and B < A + C and C < A + B) {
        if (A == B and B == C) {
            cout << "Triangulo Equilatero" << endl;
        } else {
            if (A == B or A == C or C == B) {
                cout << " Trianguclo Isosceles" << endl;
            } else {
                cout << "Triangulo Escaleno" << endl;
            }
        }
    } else {
        cout << "As medidas nao forman um triangulo" << endl;
    }

    return 0;
}