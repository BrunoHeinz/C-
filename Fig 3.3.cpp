//Criando e usando uma fun��o definida pelo usu�rio

#include <iostream>

int square( int ); //prot�tipo da fun��o

int main()
{
    for(int x = 1; x <= 10; x++)
        std::cout << square( x ) << " ";
    std::cout << std::endl;

    return 0;
}

int square(int y)
{
    return y*y;
}
