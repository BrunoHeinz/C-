#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  int valor = 5,
      fatorial;

      for(int cont_2 = 1; cont_2 <= valor; cont_2++)
           cout << cont_2 << '!' <<"\t\t";
  for(int cont_1 = 1; cont_1 <= valor; cont_1++)
    {

        fatorial = 1;
        for(int cont_3 = 1; cont_3 <= cont_1; cont_3++)
        {
            fatorial *=  cont_3;
            cout << fatorial;
            cout << endl;

        }
    }


}
