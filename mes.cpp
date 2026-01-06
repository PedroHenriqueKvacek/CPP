#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int MES;

    cout << "Digite um numero de 1 a 6: ";
    cin >> MES;

    switch (MES)
    {
    case 1:
        cout << "Janeiro" << endl;
        break;

    case 2:
        cout << "Fevereiro" << endl;
        break;

    case 3:
        cout << "Março" << endl;
        break;

    case 4:
        cout << "Abril" << endl;
        break;

    case 5:
        cout << "Maio" << endl;
        break;

    case 6:
        cout << "Junho" << endl;
        break;

    default:
        cout << "Valor invalido" << endl; 
    }

    return 0;
}