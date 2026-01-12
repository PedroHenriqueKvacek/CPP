#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int A, B, C, S;
    cout << "Digite 3 numero" << endl;
    cin >> A >> B >> C;

    S = A + B + C;

    if (S >= 100)
    {
        cout << "O resultado é maior ou igual a 100" << endl;
    }
    else
    {
        cout << "O resultado é menor que 100" << endl;
    }

    return 0;
}