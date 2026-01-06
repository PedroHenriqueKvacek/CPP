#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int N, R4, R5;
    cout << "Digite um numero ...:";
    cin >> N;

    R4 = N - 4 * (N / 4);
    R5 = N - 5 * (N / 5);

    if (R4 == 0 && R5 == 0) {

        cout << N << endl;
    } else {
        cout << "Valor nao é divisivel por 4 e 5 ...:" << endl;
    }

    return 0;
}