#include <iostream>
using namespace std;

int main() {
    float cantidadasientos,asientnoocup,asientosocupados,porcentnoocupado, porcentocupado;

    cout << "Cantidad de asientos totales: ";
    cin >> cantidadasientos;
    cout << "Cantidad de asientos ocupados: ";
    cin >> asientosocupados;

    asientnoocup= cantidadasientos-asientosocupados;
    porcentnoocupado= (asientnoocup*100)/cantidadasientos;
    porcentocupado= (asientosocupados*100)/cantidadasientos;



    cout <<  "El porcentaje de asientos ocupados son: " << porcentocupado;
    cout <<  endl << "El porcentaje de asientos no ocupados es: " << porcentnoocupado;




return 0;
}
