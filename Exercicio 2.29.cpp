//Separa um número de 5 dígitos, em seus digitos individuais.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float  numero,
        var,
        decimal = 0,
        cont = 1,
        tamanho = 0;

    cout << "Insira um valor binário" << endl;
    cin >> numero;
    do
    {
        var = numero/cont;
        if(var!=0)
        {
            cont *= 10;
            tamanho++;
        }


    }while(var!=0);

    for(cont = 1; cont <=tamanho; cont++)
          {
              cout << (pow(10,0))<<"teste1"<< endl;

              decimal +=int(pow(2,cont-1))*int(numero%pow(10,cont)-numero%pow(10,cont-1))/pow(10,cont-1);
              cout << "Valor em decimal = " << decimal<< endl;
            }

    cout << "Valor em decimal = " << decimal<< endl;
    return 0;
}
