/*Autor: Lucas Santana Barbosa
Questão 8 lista de exercicios 2

8 - Implemente um código que solicite o valor de dois catetos para o usuário, realize o
cálculo e imprima o valor da hipotenusa.*/


#include <iostream>

using namespace std;

int main() {
    float cateto1, cateto2, hipotenusa;

    cout << "Digite o valor do primeiro cateto: ";
    cin >> cateto1;

    cout << "Digite o valor do segundo cateto: ";
    cin >> cateto2;

    float quadrado_cateto1 = cateto1 * cateto1;
    float quadrado_cateto2 = cateto2 * cateto2;
    float soma_quadrados = quadrado_cateto1 + quadrado_cateto2;

    float aprox = soma_quadrados / 2;
    for (int i = 0; i < 10; ++i) {
        aprox = (aprox + soma_quadrados / aprox) / 2;
    }

    hipotenusa = aprox;

    cout << "O valor da hipotenusa é: " << hipotenusa << endl;

    return 0;
}
