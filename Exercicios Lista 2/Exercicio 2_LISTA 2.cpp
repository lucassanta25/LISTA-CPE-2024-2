/*
Autor: Lucas Santana Barbosa - 232004300
Questão 2 lista de execicios 2 

"Escreva um código que peça ao usuário fornecer dois números e então imprima a soma,
o produto a diferença e o quociente dos dois números"*/

#include <iostream>
using namespace std;

int main()
{
    float n1, n2;
    float soma;
    float produto;
    float diferença;
    float quociente; 
    cout << "insira o um número.\n";
    cin >> n1;
    cout << "insira outro número.\n";
    cin >> n2;
    
    soma = n1 + n2;
    diferença = n1 - n2;
    produto = n1 * n2; 
    quociente = n1 / n2;
    
    
    cout << "a soma entre os números é :"<< soma << "\n";
    cout << "o quociente entre os números é : " << quociente << "\n" ;
    cout << "o produto entre os números é : " << produto;
    
    

    return 0;
}