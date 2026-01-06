#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(void)
{
    char nome[50];
    char resposta;

    cout << "Ola.\nQual sua graça? ";
    cin.getline(nome, 50);

    cout << endl;
    cout << "Oi " << nome << ", vamos estudar? (s/n)" << endl;
    cin >> resposta;

    if (resposta == 's' || resposta =='S'){
        cout << "Boa escolha!" << endl;

    } else {
        cout << "Fica para a proxima..." << endl;
    }

    cout << "Tecle <Enter> para enecerrar... ";
    cin.ignore();
    cin.get();
    return 0;
}
