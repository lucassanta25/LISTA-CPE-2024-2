#include <iostream>
#include <iomanip>
using namespace std;

double conversao(double C){
 return (C*9/5)+32;;
}
int main()
{
    cout << "Celsius     Fahrenheit"<< endl;
    cout << "----------------------" << endl;
    cout << fixed << setprecision(2);
    for (double Celsius=0;Celsius<=100; Celsius++){
        double Fahrenheit = conversao(Celsius);
        cout <<"C "<< Celsius <<"         "<< "F "<<Fahrenheit << endl;
    
    }
    return 0;
}
