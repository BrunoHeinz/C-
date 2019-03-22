//verifica de 3 valores informados podem formar um triângulo

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        double lado_A,
               lado_B,
               lado_C;

        cout << "Informe o lado_A: " << endl;
        cin >> lado_A;
        cout << "Informe o lado_B: " << endl;
        cin >> lado_B;
        cout << "Informe o lado_C: " << endl;
        cin >> lado_C;

        if((abs(lado_B - lado_C) < lado_A) && ((lado_B + lado_C) > lado_A) )
            cout << "Forma um triangulo" << endl;
        else
            cout << "Nao forma um triangulo" << endl;

}
