//Salarios vendedores

#include <iostream>

using namespace std;

int main()
{
    int numeroFuncionarios = 3;
    float comissao = 0.09;
    double vendas = 0,
           salarioSemanal = 200.00,
           montanteSemanal = 0;

    while(true)
    {
        cout << "Digite vendas em dolares (-1 para encerrar): " << endl;
        cin >> vendas;

        if(vendas == -1)
            break;

        montanteSemanal = salarioSemanal + vendas*comissao;
        cout << "Salario e: $" << montanteSemanal << endl;

    }
    return 0;
}
