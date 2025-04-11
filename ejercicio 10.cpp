#include <iostream>
using namespace std;

int main() {
    int horasing,dia,horasres,horasyminutos;




    cout << "Ingresar cantidad de horas: ";
    cin >> horasing;

    dia = horasing/24;
    horasres = horasing%24;


    cout <<dia<< " dias";
    cout <<" y " << horasres<< " horas";

return 0;
}
