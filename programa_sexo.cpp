#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    char nome[50], sobrenome[20];
    char sexo;

    cout << "Ola Qual seu nome? ";
    cin.getline(nome, sizeof(nome));

    cout << "Informe seu sobrenome:";
    cin >> sobrenome;
    cin.ignore(80, '\n');

    cout << "Ola, /n" << nome << " " << sobrenome << endl;

    cout << "Digite seu sexo (M/F):" << endl;
    cin >> sexo;

    if (sexo == 'M' || sexo == 'M')
    {
        cout << "Entre!" << nome << endl;
    }
    else
    {
        cout << "Não entre..." << endl;
    }

    cin.get();

    return 0;
}