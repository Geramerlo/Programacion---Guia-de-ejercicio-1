#include <iostream>
using namespace std;

int main() {
    int horastra;
    int valorporh;
    float resultado;

    cout << "Ingresar horas trabajadas: ";
    cin >> horastra;
    cout << "Ingresar valor por hora trabajada: ";
    cin >> valorporh;

    resultado = horastra*valorporh;

    cout << "El sueldo es: " << resultado << endl;

return 0;
}
