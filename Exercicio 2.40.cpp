//Soma uma sequência de inteiros tendo um valor sentinela como entrada;

#include <iostream>

using namespace std;

int main()
{
    int sentinel;
    double valor,
           soma= 0;

    cout << "Insira o valor sentinela: " << endl;
    cin >> sentinel;

    for(int cont = 0; cont < sentinel; cont++)
    {
        cout << "Informe o valor a ser somado: " << endl;
        cin >> valor;

        soma+= valor;
    }

    cout << "Total: " << soma << endl;

    return 0;

}
