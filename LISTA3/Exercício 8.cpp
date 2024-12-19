#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    
    double numero1, numero2;
    char operador;
    
    cout << "Digite o Primeiro número real: " << endl;
    cin >> numero1;
    cout << "Digite o Segundo Número real: "<< endl; 
    cin >> numero2;
    cout << "Digite o Operador: " << endl;
    cin >> operador;
    
    switch (operador){
        
     case '+':
     cout << "Resultado: " << numero1 << " + " <<numero2 <<" = " << numero1 + numero2 << endl;
     break;
     case '-':
     cout << "Resultado: " << numero1 << " - " <<numero2 << " = " << numero1 - numero2 << endl;
     break;
     break;case '*':
     cout << "Resultado: " << numero1 << " * " <<numero2 << " = "<< numero1 * numero2 << endl;
     break;
     break;case '/':
     
     if (numero2!= 0){
             cout << "Resultado: " << numero1 << "/" <<numero2 <<" = " << numero1 / numero2 << endl;
         }else{
             cout << "ERRO DIVISÃO POR ZERO" << endl;
         }
     break;
     
    default:
    cout << "OPERADOR INVALIDO" << endl;
    }

    return 0;
}
