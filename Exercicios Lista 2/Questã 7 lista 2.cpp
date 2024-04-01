/*Autor: Lucas Santana Barbosa
Questão 7 lista de exercicios 2

7 - Implemente um código que solicite do usuário um número inteiro e mostre na tela se o
número é primo ou não. 
*/


#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " não é primo." << endl;
        return 0;
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            cout << num << " não é primo." << endl;
            return 0;
        }
    }

    cout << num << " é primo." << endl;

    return 0;
}
}
