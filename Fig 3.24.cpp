//Usando o operador unário de resolução de escopo

#include <iostream>
#include <iomanip>

using namespace std;

const double PI = 3.14159265358979;

int main()
{
    const float PI = static_cast< float >(::PI);

    cout << setprecision( 20 )
         <<"Valor local float de PI = "<< PI
         <<"\nvalor global double de PI = "<< ::PI << endl;

    return 0;
}
