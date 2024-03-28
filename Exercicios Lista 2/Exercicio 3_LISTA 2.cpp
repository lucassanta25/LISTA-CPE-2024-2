/*Autor: Lucas Santana Barbosa
Questão 3 lista de exercicios 2

"Escreva um código que peça ao usuário fornecer o raio de um círculo e então imprima o
diâmetro da circunferência e a área. Use a constante 3.14159 como sendo o valor de pi."

*/


#include <iostream>
using namespace std;

int main()
{
    double diametro;
    double raio;
    double area;
    const double pi = 3.14159; //valor de pi 
    
    cout << "Forneça o Raio do circulo" ;
    cin  >> raio;
    
     diametro = raio * 2;
     area = pi * raio * raio;
    
    cout << "o diametro do circulo é: " << diametro << "\n"; 
    cout << "a area do circulo é: " << area;

    return 0;
}