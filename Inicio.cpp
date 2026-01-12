#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int N;
    cout << "Digite um numero de 1 a 9" << endl;
    cin >> N;

    if (N >= 1 && N <= 9)
    {
        cout << "O valor esta na faixa permitida" << endl;
    }
    else
    {
        cout << "O valor esta fora da faixa permitida" << endl;
    }

    return 0;
}