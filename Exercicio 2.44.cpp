//Calcula e imprime o produto dos inteiros impares de 1 até 15

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int cont,
        produtoImpar = 0;

    for(cont = 1; cont <= 15; cont+=2 )
    {
        produtoImpar += cont;
    }

    cout <<"Soma dos numeros impares: " << produtoImpar << endl;

    return 0;
}
