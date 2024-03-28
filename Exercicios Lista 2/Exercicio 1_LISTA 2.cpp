/*
Autor: Lucas Santana Barbosa
Questão 1 lista de exercicios 2

1 - Faça as seguintes declarações na linguagem c++ e imprima os valores de x, y e z.

    x = 7 + 3 * 6 / 2 - 1;
    y = 2 % 2  + 2 * 2 / 2; 
    z = (3 * 9 *(3 + (9 * 3 / (3))));

mod corresponde ao operador módulo
*/

#include <iostream>
using namespace std;

int main()
{
    int x = 7 + 3 * 6 / 2 - 1;
    int y = 2 % 2  + 2 * 2 / 2; 
    int z = (3 * 9 *(3 + (9 * 3 / (3))));
    
    cout<< "o valor de X= " << x << "\ny = " << y << "\nz =" << z;
 
    return 0;
}


