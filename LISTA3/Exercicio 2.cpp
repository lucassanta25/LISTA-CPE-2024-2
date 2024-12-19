#include <iostream>
using namespace std;


int main()
{
   double alcool;
   double gasolina;
   double calculo;
   
   cout << "insira o valor do litro da gasolina" << endl;
   cin >> gasolina;
   cout << "insira o valor do litro do alcool" << endl;
   cin >> alcool;
   
   calculo = alcool / gasolina;
   
  if (calculo < 0,7){
      cout << "é melhor abastecer com álcool" << endl;
  }else{
      cout << "é melhor abastecer com gasolina" << endl;
  }
   
   
   
    return 0;
}
