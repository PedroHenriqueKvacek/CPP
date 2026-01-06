#include <iostream>
#include <iomanip>

using std::cin;
using std::cout;
using std::endl;
using std::setprecision;
using std::setiosflags;
using std::ios;

int main(void)
{
    int ht;
    float vh, pd, td, sb, sl;

    cout << setprecision(2);
    cout << setiosflags(ios::right);
    cout << setiosflags(ios::fixed);

    cout << "Digite as horas trabalhadas: ";
    cin >> ht;
    cin.ignore(80, '\n');

    cout << "Digite o valor da hora de trabalho: ";
    cin >> vh;
    cin.ignore(80, '\n');

    cout << "Digite o valor do percentual de desconto: ";
    cin >> pd;
    cin.ignore(80, '\n');

    sb = ht * vh;
    td = (pd / 100) * sb;
    sl = sb - td;

    cout << "/n";
    cout << "Salario Bruto: " <<  sb << endl;
    cout << "Total de Descontos: " << td << endl;
    cout << "Salario Liquido: " << sl << endl;

    return 0;
}