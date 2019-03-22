//Fatorial

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int valor = 0 ,
        cont,
        fatorial =1;
    float e = 0;

    while(valor<10)
    {

   /* do
    {
        cout << "Informe um valor positivo: " << endl;
        cin >> valor;
    }while(valor < 0);*/

    for(cont = 0; cont < valor; cont++)
        if(valor!=0)
            fatorial *=(valor - cont);
        else
            fatorial = 1;

    e +=(1/fatorial);
    valor++;

    cout << "e = " << 1/fatorial << endl;
     fatorial = 1;
    }


    return 0 ;
}
