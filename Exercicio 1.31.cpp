//Inteiro?
#include <iostream>
using namespace std;

int main()
{
    int number,resto;

    cout<<"Informe umm número inteiros\n"<<endl;
    cin>>number;
    resto = number%2;

       if(resto == 0)
    {
        cout<<"Numero Par\n";

    }
    if (resto != 0)
    {
       cout<<"Numero Impar\n";

    }


	return 0;
}
