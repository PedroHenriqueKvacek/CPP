#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int NUMERO;
    cout << "Digite um numero ...:";
    cin >> NUMERO;

    if (NUMERO >= 20 && NUMERO <= 90)
    {
        cout << "O numero esta na faixa de 20 a 90 ...:" << endl;
    }
    else
    {
        cout << "O numero esta fora da faixa de  20 a 90 ...:" << endl;

    }

    return 0;
}

// NESSE CODIGO, COMO ESTA EXECUTANDO APENAS UMA AÇÃO, O USO DE "{}" NÃO É OBRIGATÓRIO