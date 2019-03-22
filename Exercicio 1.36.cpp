//Separa um número de 5 dígitos, em seus digitos individuais.

#include <iostream>

using namespace std;

int main()
{
    int numero;

    cout<<"Digite um numero de 5 digitos: "<<endl;
    cin>>numero;

    cout<<(numero - numero%10000)/10000<<"\t"<<(numero%10000 - numero%1000)/1000<<"\t"<<(numero%1000 - numero%100)/100<<"\t"<<(numero%100 - numero%10)/10<<"\t"<<(numero%10)<<endl;

    return 0;
}
