//Usando o comando break em uma estrutura for

#include <iostream>

using namespace std;

int main()
{
    int x;

    for(x = 1; x <= 10; x++)
        {
            if( x == 5)
                break;

            cout << x << " ";
        }
        cout << "\nSaiu do laco com x igual a " << x << endl;
        return 0;
}
