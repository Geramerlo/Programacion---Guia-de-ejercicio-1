#include <iostream>
using namespace std;

int main() {
    int horas,dia,horasres,minutos, minutosingresados;

    cout << "Ingresar cantidad de minutos: ";
    cin >> minutosingresados;

    horas = minutosingresados/60;
    minutos = minutosingresados%60;
    dia = horas/24;
    horasres = horas%24;


    cout <<dia<< " dias";
    cout <<", " << horasres<< " horas ";
    cout <<" y "<< minutos << " minutos";


return 0;
}
