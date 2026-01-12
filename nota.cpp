#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    double N1, N2, N3, N4, NE, MD1, MD2;
    cout << "Digite sua media" << endl;
    cin >> N1 >> N2 >> N3 >> N4;

    MD1 = (N1 + N2 + N3 + N4) / 4;

    if (MD1 >= 7)
    {
        cout << "Aprovado" << endl;
        cout << "Media final: " << MD1 << endl;
    }
    else
    {
        cout << "Digite a nota do exame:" << endl;
        cin >> NE;
        MD2 = (MD1 + NE) / 2;

        if (MD2 >= 5)
        {
            cout << "Aprovado no exame" << endl;
        }
        else
        {
            cout << "Reprovado no exame" << endl;
        }

        cout << "Media final: " << MD2 << endl;
    }

    return 0;
}