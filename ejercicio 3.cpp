#include <iostream>
using namespace std;

int main() {
    int autosvendidos, ppa, sueldofinal;
    int suelf = 5000; //sueldo fijo
    int pre = 700; //premio

    cout << "Cantidad de autos vendidos: ";
    cin >> autosvendidos;

    ppa = autosvendidos * pre;
    sueldofinal = ppa + suelf;

    cout <<endl<< "El sueldo final dependiendo de la cantidad de autos vendidos es: " << sueldofinal;



    return 0;
}
