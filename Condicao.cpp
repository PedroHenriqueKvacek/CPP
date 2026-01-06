#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    float sa, ns;
    cout << "Digite o salario atual: " << endl;
    cin >> sa;

    if (sa < 500) {
        ns = sa * 1.15;
    } else {
        if (sa <= 1000) {
            ns = sa * 1.10;
        } else {
            ns = sa * 1.05;
        }
    }

    cout << "NS: " << ns << endl;
    return 0;
}