//Imprime tabuleiro

#include <iostream>

using namespace std;

int main()
{
    int cont1,
        cont2;

        for(cont1 = 0; cont1 <8; cont1++)
        {
            if(cont1%2 != 0)
                    cout<< ' ';
            for(cont2 = 1; cont2 <=8; cont2++)
                    cout <<"* ";
            cout << endl;
        }
        return 0;
}
