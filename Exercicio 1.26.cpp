// Impreme soma, média, produto, menor e maior numero entre 3 inteiros;

#include <iostream>

using namespace std;

int main()
{
    int integer1, integer2, integer3, maior, menor, produto, soma;
    double media;

    cout<<"Digite tres inteiros diferentes\n";
    cin >> integer1 >> integer2 >> integer3;
    maior = integer1;
    menor = integer1;
    soma = integer1 + integer2 + integer3;
    media = soma/3;
    produto = integer1*integer2*integer3;

    if(maior < integer2)
        maior = integer2;

    if(maior < integer3)
        maior = integer3;

    if(maior > integer2)
        menor = integer2;

    if(maior > integer3)
        menor =  integer3;

        cout << "A soma e "<<soma<<endl;
        cout << "A media e "<<media<<endl;
        cout << "O produto e "<<produto<<endl;
        cout << "O menor e "<<menor<<endl;
        cout << "O maior e "<<maior<<endl;

        return 0;


}
