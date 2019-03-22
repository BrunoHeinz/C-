//Programa de m�dia da turma com repeti��o controlada por sentinela
#include <iostream>

using namespace std;

#include <iomanip>//Manipula��o da sa�da.

using std::setprecision;
using std::setiosflags;

int main()
{

    int total,
        gradeCounter,
        grade;
    double avarage;

    //Fase de inicializa��o;
    total = 0;
    gradeCounter = 0;

    //Fase de processamento
    cout << "Forneca nota ou -1 para finalizar: "<<endl;
    cin >> grade;

    while(grade != -1)
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;

        cout << "Forneca a nota ou -1 para terminar: " << endl; // Sentinela
        cin >> grade;
    }

    //Fase de t�rmino

    if(gradeCounter !=0)
    {
        avarage = static_cast< double >(total)/gradeCounter;
        cout << "A media da turma e " << setprecision (2) << setiosflags( ios::fixed | ios::showpoint)
        << avarage << endl;
    }
    else
        cout << "Nenhuma nota foi fornecida" << endl;

    return 0;


}
