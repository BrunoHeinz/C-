//Criando e usando uma função definida pelo usuário

#include <iostream>

int square( int ); //protótipo da função

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
