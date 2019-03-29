//Usando uma função inline para calcular o volume de um cubo
#include <iostream>
#include <iomanip>

using namespace std;

inline double cube( const double s)
{
    return s * s * s;
}

int main()
{
   cout << "Digite o comprimento do lado do seu cubo: ";

   double side;

   cin >> side;
   cout << "Volume do cubo com lado "
        << side << " e " << cube( side ) << endl;

   return 0;
}
