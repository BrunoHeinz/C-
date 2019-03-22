/*1) Inicia variáveis
  2) Obtenha os valores de quilometros rodados e gastos de cada tanque e calcule quilômetros por litro;
  3) Imprima os resultados e saia da execução caso o valor digitado seja EOF*/

  /*1) Inicialize Km igual a zero;
       Inicialize Litros igual a zero

    2) Enquanto entrada ser diferente de Ctrl + z
        Leia os quilometros rodados
        Leia os consumo de combustível
        Imprima a média de Km/l;

    */

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double km = 0,
           consumo = 0;

    int exit = 0;


     while(exit != -1)
     {
        cout << "Informe o KM: " << endl;
        cin >> km;

        cout << "Informe o consumo: " << endl;
        cin >> consumo;

        cout << "Os quilometros/litros para este tanque foram: " << km/consumo << endl;

        cout << "Digite - 1 para sair" << endl;
        cin >> exit;
     }
     return 0;
}
