//Codificação de inteiro de 4 digitos

#include <iostream>
#include <cmath>

using namespace std;



int main()
{
    int dados,
        digito_A,
        digito_B,
        digito_C,
        digito_D ,
        piv;

    cout << "Informe os dados: " << endl;
    cin >> dados;

//Codigicar
     digito_A = (dados%10000 - dados%1000)/1000;
     digito_B = (dados%1000 - dados%100)/100;
     digito_C = (dados%100 - dados%10)/10;
     digito_D = (dados%10);

     digito_A = (digito_A +7)%10;
     digito_B = (digito_B +7)%10;
     digito_C = (digito_C +7)%10;
     digito_D = (digito_D +7)%10;


     piv = digito_A;
     digito_A  =  digito_C;
     digito_C = piv;

     piv = digito_B;
     digito_B  =  digito_D;
     digito_D = piv;

     cout << "Dado codificado: " << "\n"
          << digito_A
          << digito_B
          << digito_C
          << digito_D << endl;

//Decodificar

     digito_A = (10 - (7-digito_A))%10;
     digito_B = (10 - (7-digito_B))%10;
     digito_C = (10 - (7-digito_C))%10;
     digito_D = (10 - (7-digito_D))%10;

     piv = digito_A;
     digito_A  =  digito_C;
     digito_C = piv;

     piv = digito_B;
     digito_B  =  digito_D;
     digito_D = piv;

     cout << "Dado decodificado: " << "\n"
          << digito_A
          << digito_B
          << digito_C
          << digito_D << endl;

     return 0;




}
