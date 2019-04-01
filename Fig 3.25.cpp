//Usando funções sobrecarregadas

#include <iostream>

using namespace std;

int square( int x )
{
    return x*x;
}

double square( double y)
{
    return y*y;
}

int main()
{
    cout <<"O quadrado do inteiro 7 e " << square( 7 )
         <<"\nO quadrado do double 7.5 e " << square( 7.5 )
         << endl;

    return 0;
}
