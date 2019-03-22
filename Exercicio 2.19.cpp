//Salarios vendedores

#include <iostream>

using namespace std;

int main()
{
    int horasTrabalhadas = 0;
    double salario = 0,
           salarioHora = 0;


    while(true)
    {
        cout << "Digite horas trabalhadas (-1 para encerrar): " << endl;
        cin >> horasTrabalhadas;

        cout << "Digite salario - hora do trabalhador (-1 para encerrar): " << endl;
        cin >> salarioHora;



        if(horasTrabalhadas > 40)
        {
            salario = 40*salarioHora;
            salario += (salarioHora*1.5)*(horasTrabalhadas - 40);
        }
        else
            salario = horasTrabalhadas*salarioHora;


        cout << "Salario e: " << salario << endl;

    }
    return 0;
}
