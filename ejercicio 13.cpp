#include <iostream>
using namespace std;

int main() {
    int importe,resto,cantidadbilletes1000, cantidadbilletes500, cantidadbilletes200, cantidadbilletes100;

    cout << "Ingresar importe a retirar: ";
    cin >> importe;

    cantidadbilletes1000= importe/1000;
    resto= importe%1000 ;

    cantidadbilletes500= resto/500;
    resto= resto%500;

    cantidadbilletes200= resto/200;
    resto= resto%200;

    cantidadbilletes100= resto/100;




    cout << "Se entregara: " <<cantidadbilletes1000 << " billetes de $1000, ";
    cout << cantidadbilletes500<< " billetes de $500, ";
    cout << cantidadbilletes200<< " billetes de $200, ";
    cout << cantidadbilletes100<< " billetes de $100.";




return 0;
}
