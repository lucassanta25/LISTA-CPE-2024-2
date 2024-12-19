#include <iostream>
using namespace std;

int main() {
    char caractere;

    cout << "Digite um caractere: ";
    cin >> caractere;

    switch (caractere) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            cout << "O caractere " << caractere << " é uma vogal." << endl;
            break;
        default:
            cout << "O caractere " << caractere << " não é uma vogal." << endl;
    }

    return 0;
}
