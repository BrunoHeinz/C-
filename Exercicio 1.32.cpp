//Determina se dois números são multiplos.
#include <iostream>
using namespace std;

int main()
{
    int number1, number2,aux;

    cout<<"Informe dois inteiros"<<endl;
    cin>>number1>>number2;

    if(number1>number2)
    {
        aux = number1;
        number1 = number2;
        number2 = aux;
    }
   if(number2%number1 ==0)
   {
      cout<<"Sao multiplos";
   }
   if(number2%number1 !=0)
   {
      cout<<"Nao sao multiplos";
   }



}
