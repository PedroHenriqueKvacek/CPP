#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    double A, B, C;
    cin >> A >> B >> C;
    
    if (A < B + C && B < A + C && C < A + B) {
        if (A == B && B == C) {
            cout << "Triangulo Equilatero" << endl;
        } else {
            if (A == B || A == C || C == B) {
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
// NESSE CODIGO, COMO ESTA EXECUTANDO APENAS UMA AÇÃO, O USO DE "{}" NÃO É OBRIGATÓRIO