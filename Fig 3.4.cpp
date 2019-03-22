//Encontrar o maior de três inteiros.

#include <iostream>

using namespace std;

int maximum( int, int, int ); //protótipo da função

int main()
{
    int a, b, c;

    std::cout << "Forneça tres inteiros: ";
    std::cin >> a >> b >> c;

    std::cout << "O maior e: " << maximum(a, b, c) << endl;
    return 0;
}

int maximum(int x, int y, int z)
{
    int max = x;

    if(y > max)
        max = y;

    if(z > max)
        max = z;

    return max;
}
