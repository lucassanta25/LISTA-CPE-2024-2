/*Autor Lucas Santana Barbosa
Questão 5 lista 2 
5 - Escreva um programa que solicite ao usuário que digite a largura e o comprimento de
uma sala. Após a leitura dos valores, seu programa deve calcular e exibir a área da sala. O
comprimento e a largura serão inseridos como números de ponto flutuante. Inclua unidades
na sua mensagem de prompt e saída.*/ 

#include <iostream>

using namespace std;

int main() {
    float largura, comprimento;

    cout << "Digite a largura da sala (em metros): ";
    cin >> largura;

    cout << "Digite o comprimento da sala (em metros): ";
    cin >> comprimento;

    float area = largura * comprimento;

    cout << "A área da sala é: " << area << " metros quadrados." << endl;

    return 0;
}
