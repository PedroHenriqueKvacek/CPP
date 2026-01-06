#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int A, B, C, X;
    cin >> A >> B >> C;

    X = A;
    if (X < B)
        X = B;

    if (X < C)
        X = C;

    cout << X << endl;

    return 0;
}