#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int N, R;
    cout << "Digite um numero" << endl;
    cin >> N;

    R  = N * 2;

    if (R >= 30)
    {
        cout << "O valor esta na faixa permitida" << endl;
    }
    else 
    {
        cout << "O valor esta fora da faixa permitida" << endl;
    }
     
    cout << R << endl;

    return 0;
}