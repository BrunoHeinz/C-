//Converte de binário para decimal;
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long int value, binary;//Valor em binário;
        int lenght = 0, cont = 1,cont2 = 1;
        double var,decimal=0;

    cout << "Insira o valor em binario: " << endl;
    cin >> value;
    binary = value;
    do
    {

        var = value/(10*cont);
        lenght++;
        cont *=10;

    }while(var > 0);

    for(int i = 1; i<= lenght; i++)
    {
        decimal = decimal+(value%10)*cont2;
        value = static_cast<int>(value/=10);
        cont2 = pow(2,i);
    }
    cout <<"Binary: "<< binary <<"\n"
         <<"Decimal: " << decimal << endl;
    return 0;
}
