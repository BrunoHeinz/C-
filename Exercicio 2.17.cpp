
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int numeroConta;
    double saldoInicial,saldoFinal, debitosTotais,creditosTotais,limiteCredito;

     while(true)
     {

        cout << "Informe o numero da conta(-1 para encerrar): " << endl;
        cin >>numeroConta;
        if( numeroConta == -1)
            break;

        cout << "Informe o saldo inicial(-1 para encerrar): " << endl;
        cin >>saldoInicial;
        if( numeroConta == -1)
            break;

        cout << "Informe os debitos totais(-1 para encerrar): " << endl;
        cin >> debitosTotais;
        if( debitosTotais == -1)
            break;

        cout << "Informe o creditos totais(-1 para encerrar): " << endl;
        cin >> creditosTotais;
        if( creditosTotais == -1)
            break;

        cout << "Informe o limite de credito(-1 para encerrar): " << endl;
        cin >> limiteCredito;
        if( limiteCredito == -1)
            break;

       saldoFinal = saldoInicial + debitosTotais - creditosTotais;

       if(saldoFinal >= limiteCredito)
       {
           cout << "\nconta : " << numeroConta << "\ncredito : " << creditosTotais << "\nSaldo : "<< saldoFinal << "\nLimite de Credito Excedido"<< endl;
       }
     }
     return 0;
}
