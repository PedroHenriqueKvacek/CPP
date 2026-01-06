#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    char nome[50];
    char sexo;

     cout << "Ola.\nQual seu nome? ";
     cin.getline(nome, 50);

    cout << "Digite seu sexo (M/F):" << endl;
    cin >> sexo;

    if (sexo == 'M' || sexo =='M'){
        cout << "Entre!" << nome << endl;

    } else {
        cout << "Não entre..." << endl;
    }

    cin.get();

    return 0;
}

// cout << "informe seu nome: "";
//cin >> nome;
//cin.ignore(80, '\n');
