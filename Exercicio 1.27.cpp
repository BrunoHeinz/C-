//Imprime di�metro, circunfer�ncia e �rea de um c�rculo.

#include <iostream>

using namespace std;

int main()
{
    double raio, diametro, circunferencia, area;
    const double pi = 3.14159;
   cout<<"Informe o raio da circunfer�ncia: "<< endl;
   cin>> raio;

   diametro = 2*raio;
   circunferencia = pi*diametro;
   area = pi*raio*raio;

   cout<<"Diametro: "<<diametro<< endl;
   cout<<"Circunferencia: "<<circunferencia<< endl;
   cout<<"Area: "<<area << endl;

   return 0;
}
