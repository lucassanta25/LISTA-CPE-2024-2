#include <iostream>
using namespace std;


int main()
{
  int n;
  
  cout << "insira um número inteiro não negativo"<< endl;
  cin >> n;
  
  if(n<0){
      cout <<" número invalido, por favor insira um número inteiro não negativo" << endl;
     return 1;
  }
  int fatorial = 1;
  
  for(int i = 1; i<=n ; i++){
      int anterior = fatorial;
      fatorial *=i;
      
      if(fatorial / i != anterior){
          cout << "Erro: O fatorial de" << n << "excede o limite de um inteiro" << endl;
          return 1;
          
      }
  }
  
 cout <<"o fatorial de " << n <<" " << "é " << fatorial << endl; 
  

    return 0;
}
