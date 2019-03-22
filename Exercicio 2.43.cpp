//Encontra o menor de vários inteiros;

#include <iostream>

using namespace std;

int main()
{
    int sentinel;
    double valor,
           menor;

    cout << "Insira o valor sentinela: " << endl;
    cin >> sentinel;

    for(int cont = 0; cont < sentinel; cont++)
    {
        cout << "Informe o valor a ser somado: " << endl;
        cin >> valor;

        if(cont == 0)
            menor = valor;
        else
            if(valor < menor)
                menor = valor;

    }

    cout << "Menor: " << menor << endl;

    return 0;

}
