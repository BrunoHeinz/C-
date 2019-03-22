//Calcular do produto de três inteiros.
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3, number4, number5, maior, menor;

    cout<<"Informe 5 inteiros"<<endl;
    cin>>number1;
    menor = number1;
    cin>>number2;
    if(number2>number1)
    {
        maior = number2;
        menor = number1;
    }
    else
    {
       maior = number1;
       menor = number2;
    }
    cin>>number3;
     if(number3>maior)
    {
        maior = number3;

    }
    if (number3<menor)
    {
       menor = number3;

    }
    cin>>number4;
       if(number4>maior)
    {
        maior = number4;

    }
    if (number4<menor)
    {
       menor = number4;

    }
    cin>>number5;
       if(number5>maior)
    {
        maior = number5;

    }
    if (number5<menor)
    {
       menor = number5;

    }

    cout<<"Maior: "<<maior<<"\n"<<"Menor: "<<menor;
	return 0;
}
