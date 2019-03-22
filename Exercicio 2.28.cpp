#include <iostream>

using namespace std;

int main()
{
   int lado = 0,
       cont1,cont2;

   cout << "Informe o lado do quadrado" << endl;
   cin >> lado;
   cout << endl;

   for(cont1 = 1; cont1 <= lado; cont1++)
   {
        if ((cont1 == 1)||(cont1 == lado))
        {

            for(cont2 = 1; cont2 <=lado; cont2++)
            {
                cout <<"*";
            }

        }
        else
        {
            cout << "\n*";
            for(cont2 = 2; cont2 <= (lado - 1); cont2++)
            {
                cout <<" ";

            }
         cout <<"*"<<endl;
        }


   }
    return 0;
}
