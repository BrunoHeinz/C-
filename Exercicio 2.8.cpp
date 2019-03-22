//x elevado a y

#include <iostream>

using namespace std;

int main()
{
    int x = 0,
        y = 0,
        i = 1,
        result = 1;


        cout << "Informe o valor de x: " << endl;
        cin >> x;

        cout << "\nInforme o valor de y: " << endl;
        cin >> y;
       result = x;
        while(i<y)
        {

            result = result*x;

        cout << "Result:  "<< result << endl;
            i++;
        }

        cout << "Result:  "<< result << endl;

        return 0;


}
