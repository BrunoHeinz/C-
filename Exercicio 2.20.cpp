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
    double id = 0,
           sales = 0,
           bestId = 0,
           bestSales = 0;

    int counter,
        number = 2,
        largest = 0;

    for(counter = 1; counter <= number; counter++)
    {
        cout << "\nInsira o id do vendedor" << endl;
        cin >> id;

        cout << "\nInforme o total de vendas do vendedor" << endl;
        cin >> sales;

        if(sales > largest)
        {
            largest = sales;
            bestId = id;
        }
    }

    cout << "\nO vendedor " << bestId << " vendeu " << largest << "\nParabens! " << endl;

    return 0;

}
