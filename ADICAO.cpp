#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int a, b, x, r;
    cin >> a >> b;
    x = a + b;

    if (x >= 10) {
        r = x + 5;
    } else {
        r = x - 7;
    }

    cout << "R :" << r << endl;

    return 0;
}