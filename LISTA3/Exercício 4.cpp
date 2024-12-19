#include <iostream>
using namespace std;

int main() {
    int binario, digito1, digito2, digito3, digito4, decimal = 0;
    
    cout << "Digite um numero binario de 4 digitos: ";
    cin >> binario;

    digito4 = binario % 10;          
    binario /= 10;
    digito3 = binario % 10;          
    binario /= 10;
    digito2 = binario % 10;          
    binario /= 10;
    digito1 = binario % 10;          

    if (digito1 == 1) {
        decimal += 8;  
    }
    if (digito2 == 1) {
        decimal += 4;  
    }
    if (digito3 == 1) {
        decimal += 2;  
    }
    if (digito4 == 1) {
        decimal += 1;  
    }

    cout << "O valor decimal é: " << decimal << endl;

    return 0;
}
