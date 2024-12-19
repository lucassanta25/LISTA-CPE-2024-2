#include <iostream>
using namespace std;


int main()
{
    int senha;
    
    cout << "insira a senha:" << endl;
    cin >> senha;
    
    if(senha==1234){
        cout << "senha valida." << endl;
    }else{
        cout<<"senha invalida. "<< endl;
    }

    return 0;
}
