#include <iostream>
using namespace std;

int main()
{
    int digito1, digito2, digito3, digito4, digito5;
    
    cout << "insira os 5 digitos para verificar se é ou não um palimedro" << endl;
    cout << "digito 1:" << endl;
    cin >> digito1;
    cout << "digito 2:" << endl;
    cin >> digito2;
    cout << "digito 3:" << endl;
    cin >> digito3;
    cout << "digito 4:" << endl;
    cin >> digito4;
    cout << "digito 5:" << endl;
    cin >> digito5;
    
    if(digito1 == digito5 && digito2 ==digito4){
        cout <<"é um palimedro" << endl;
        
    }else{
        cout << "não é um palimedro" << endl;
    }
    return 0;
}
