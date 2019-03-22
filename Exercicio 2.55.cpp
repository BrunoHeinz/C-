//encontrando as triplas pitagoricas de 1 até 500.

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    for(int i = 1; i < 501; i++)
    {
        for(int j = 1; j < 501; j++)
        {
            for(int k = 1; k < 501; k++)

                if(pow(i,2) == (pow(j,2) + pow(k,2)) )
                    cout << "Hipotenusa : " << i
                         << "\nLado_1 : " << j
                         << "\nLado_2 : " << k << endl;
        }
    }
}
