#include <iostream>
using namespace std;

int main()
{
    double QL, QKP, total_gasto;

    cout << "Insira a quantidade de litros inseridos: ";
    cin >> QL;
    cout << "Insira a quantidade de quilometros percorridos: ";
    cin >> QKP;

    if (QL > 0 && QKP > 0) {
        total_gasto = QKP / QL;
        cout << "O consumo medio do carro é: " << total_gasto << " km/l" << endl;
    } else {
        cout << "Valor invalido, digite valores superiores a 0." << endl;
    }

    return 0;
}
