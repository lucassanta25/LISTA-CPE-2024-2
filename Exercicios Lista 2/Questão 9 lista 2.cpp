/*Autor: Lucas Santana Barbosa
Questão  lista de exercicios 2

9 - O custo do aluguel de um automóvel é 1.75 reais por km até os primeiros 50 km, 1.65
reais por km para os 100 km seguintes e 1.50 reais por km acima de 150 km. Escreva um
programa que leia a distância em quilômetros e calcule o valor total a pagar e o custo médio
por quilômetro. */


#include <iostream>

using namespace std;

int main() {
    float distancia;
    float custo_total, custo_medio;

    cout << "Digite a distância em quilômetros: ";
    cin >> distancia;

    if (distancia <= 50) {
        custo_total = distancia * 1.75;
    } else if (distancia <= 100) {
        custo_total = 50 * 1.75 + (distancia - 50) * 1.65;
    } 
