#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int A, B, X;

    cout << "Entre o primeiro valor..: ";
    cin >> A;
    cin.ignore(80, '\n');

    cout << "Entre o sgundo valor..: ";
    cin >> B;
    cin.ignore(80, '\n');

    cout << "\n";

    if (A > B)
    {
        X = A;
        A = B;
        B = X;
    }

    cout << "Os valores ordenados sao: " << A;
    cout << " e " << B << " . " << endl
         << endl;

    cout << "Tcele <Enter> para encerrar... ";
    return 0;
}