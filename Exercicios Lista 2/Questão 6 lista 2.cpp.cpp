/*
Autor: Lucas Santana Barbosa
Questão 6 lista de exercicios 2


6- Escreva um código que lê dois números inteiros e imprime se o primeiro é múltiplo do
segundo. (dica: use o operador módulo) 
*/

#include <iostream>

using namespace std;

int main() {
    int num1, num2;

    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    if (num1 % num2 == 0) {
        cout << num1 << " é múltiplo de " << num2 << endl;
    } else {
        cout << num1 << " não é múltiplo de " << num2 << endl;
    }

    return 0;
}


