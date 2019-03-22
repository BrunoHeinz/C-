//Soma dos inteiros de 1 a 10

#include <iostream>

using namespace std;

int main()
{
    int x = 0,
        y = 0,
        i = 1,
        power = 1;

        cout << "Informe o valor de x: " << endl;
        cin >> x;

        cout << "\nInforme o valor de y: " << endl;
        cin >> y;

        power*=x;
        y++;

        if(x == y)
            cout << "Iguais" << endl;
        else
            cout << "Diferentes" << endl;

        cout << "Power igual a : "<< power << endl;

        return 0;


}
