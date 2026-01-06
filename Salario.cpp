#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int ht;
    float vh, pd, td, sb, sl;

    cout << "Digite as horas trabalhadas, valor da hora e percentual de desconto: " << endl;

    cin >> ht >> vh >> pd;
    sb = ht * vh;
    td = (pd / 100) * sb;
    sl = sb - td;

    cout << "SB: " << sb << endl;
    cout << "TD: " << td << endl;
    cout << "SL: " << sl << endl;

    return 0;
}