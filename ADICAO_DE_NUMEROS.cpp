#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int a, b, x;
    cin >> a >> b;
    x = a + b;

    if (x > 10)
    {
        cout << x << endl;
    }
    return 0;
}