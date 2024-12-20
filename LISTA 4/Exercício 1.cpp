
#include <iostream>
#include <iomanip>
using namespace std;

double conversao(double C){
    double F = (C*9/5)+32;
    return F;
}
int main()
{
    cout << "Celsius     Fahrenheit"<< endl;
    cout << "----------------------" << endl;
    cout << fixed << setprecision(2);
    for (double Celsius=0;Celsius<=100; Celsius++){
        double Fahrenheit = conversao(Celsius);
        cout <<"C "<< Celsius <<"             "<<Fahrenheit << endl;
    
    }
    return 0;
}
