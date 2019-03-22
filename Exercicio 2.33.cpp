//Imprime diâmetro, circunferência e área de um circulo;

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double const pi = 3.14159;
    int raio;

    cout << "Informe o valor do raio da circunferencia: " << endl;
    cin >> raio;

    cout << "\nDiametro: " << 2*raio
         << "\nCircunferencia: " << 2*raio*pi
         << "\nArea: " <<  2*pow(raio,2)*pi << endl;



}
