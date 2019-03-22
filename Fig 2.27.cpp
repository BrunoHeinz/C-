//Usando o comando continue em uma estrutura for

#include <iostream>

using namespace std;

int main()
{
    for(int x = 1; x <= 10; x++)
        {
            if( x == 5 )
                continue;

            cout << x <<" ";
        }

        cout<< "\nUsou continue para pular a impressao do valor 5"
            << endl;
        return 0;
}
