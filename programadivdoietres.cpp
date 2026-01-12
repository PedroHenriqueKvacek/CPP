#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int A, B, C, D;
    cout << "digite quatro valores" << endl;
    cin >> A >> B >> C >> D;

    if (A % 2 == 0 && A % 3 == 0)
    {
        cout << A << endl;
    }

    if (B % 2 == 0 && B % 3 == 0)
    {
        cout << B << endl;
    }

    if (C % 2 == 0 && C % 3 == 0)
    {
        cout << C << endl;
    }

    if (D % 2 == 0 && D % 3 == 0)
    {
        cout << D << endl;
    }

    return 0;
}