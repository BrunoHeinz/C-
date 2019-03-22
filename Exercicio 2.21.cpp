#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int counter;
    cout << "N\t\t10*N\t\t100*N\t\t1000*N" << endl;

    for(counter =1; counter <=5; counter++)
    {
        cout << counter << "\t\t" << 10*counter << "\t\t" << 100*counter << "\t\t" << 1000*counter << endl;
    }
}
