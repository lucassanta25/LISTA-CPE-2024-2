#include <iostream>
using namespace std;


int main()
{
   double QL;
   double QKP;
   double total_gasto;
    
    cout << "insira a quantidade de litros inseridos:" << endl;
    cin >> QL;
    cout << "insira a quantidade de kilometros pecorridos:" << endl;
    cin >> QKP;
    if(QL > 0 && QKP > 0){
        
      total_gasto = QKP/QL;
      cout << "o consumo medio do carro é: " << total_gasto << endl;
      
    }else{
        cout << "valor invalido, digite um valor superior a 0:"<<endl;
    }
    return 0;
}
