//Compara dois inteiros

#include <iostream>

using namespace std;

int main()
{
    int integer1, integer2;

    cout<< "Digite dois inteiros"<<endl;
    cin>>integer1>>integer2;

    if(integer1>integer2)
        cout<<"integer1 e o maior"<<endl;

    if(integer1<integer2)
        cout<<"integer2 e o maior"<<endl;


    if(integer1==integer2)
        cout<<"Estes numeros sao iguais"<<endl;

        return 0;
}
