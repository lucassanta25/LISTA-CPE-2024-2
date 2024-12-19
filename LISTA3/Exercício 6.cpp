#include <iostream>
using namespace std;

int main()
{
 int LadoA, LadoB, LadoC;
 
 cout << "insira o lado A do triangulo: " << endl;
 cin >> LadoA;
 cout << "insira o lado B do triangulo: " << endl;
 cin >> LadoB;
 cout << "insira o lado C do triangulo: " << endl;
 cin >> LadoC;
 
 if(LadoA ==LadoB && LadoA == LadoC && LadoB==LadoC){
     cout << "Triangulo equilátero" << endl;
 }else if (LadoA==LadoB || LadoB==LadoC || LadoA==LadoC){
     cout << "Triangulo Isocele" << endl;
 }else {
     cout << "Triangulo Escaleno" << endl;
 }
 
    return 0;
}
