#include <iostream>
using namespace std;

int main() {
    float importedecompra,descuento, sindescuento, importetotal;

    cout << "Ingresar importe: ";
    cin >> importedecompra;
    cout <<"ingresar descuento: ";
    cin>> descuento;

    descuento= importedecompra*0.60;
    sindescuento=importedecompra;
    importetotal=importedecompra-descuento;

    cout << "Importe " << importedecompra<< ", ";
    cout << "descuento "<< descuento<< ", ";
    cout << "total "<< importetotal<< ". ";






return 0;
}
