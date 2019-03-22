//Calculo da media;

#include <iostream>

using namespace std;

int main()
{
    int cont = 0;
    double valor,
           soma= 0,
           media;




    while(valor!=9999)
    {
        cout << "Informe o valor a ser somado ou 9999 para sair do programa: " << endl;
        cin >> valor;

        if(valor != 9999)
        {
            soma+= valor;
            cont++;
        }

    }

    media = soma/cont;
    cout << "Media: " << media << endl;

    return 0;

}
