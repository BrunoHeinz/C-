//Melhor venda;

/*
1) incializa variáveis;
2) obtenha os 10 valores de vendas  e pegue o maior valor;
3) apresenta o melhor vendedor;
*/

/*
1)
Inicializa counter igual a 1;
Inicializa number igual a 10;
Iniciliza largest igual a 0;

2)
Enquanto counter for menor que number;
    Leia o id do vendedor;
    Leia o valor do vendedor;
    Se o valor do vendedor atual for maior que o valor do vendedor anterior
        Coloca em Id a identificação do vendedor;
        Coloca o valor do vendedor em maior valor;
3)
Imprima o id e o valor do melhor vendedor;
*/


#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int counter,
        number = 10,
        value = 0,
        largest1 = 0,
        largest2 = 0,
        pivo;

    for(counter = 1; counter <= number; counter++)
    {
        cout << "\nInsira um valor: " << endl;
        cin >> value;

        if((counter%2 == 0) && (largest1 < value))
        {
            largest1 = value;
        }

        if((counter%2 != 0) && (largest2 < value))
        {
            largest2 = value;

        }
    }

    if(largest1 > largest2)
    {
        pivo = largest1;
        largest1 = largest2;
        largest2 = pivo;

    }

    cout << "Valor1" << largest1 << "\nValor2 " << largest2 << endl;

    return 0;

}
