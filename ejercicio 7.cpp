#include <iostream>
using namespace std;

int main() {
    float importeventa,descuento15,descuento0;

    cout << "Ingrese un importe de venta: ";
     cin >> importeventa;

    descuento15 = 1200*0.85;
    descuento0 = 800;

    cout <<endl << "Si el importe es 1200 o mas tenes un descuento del 15%: "<< descuento15,importeventa;
    cout <<endl << "Si el importe es 800 o menos no tenes descuento: "<< descuento0, importeventa;



return 0;
}
