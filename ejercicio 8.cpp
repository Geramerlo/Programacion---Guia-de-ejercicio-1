#include <iostream>
using namespace std;

int main() {
    float importeventa, impventadescuento,descuento, porcentajededescuento;

    cout << "El importe de venta es: ";
    cin >> importeventa;

    impventadescuento = importeventa*0.80;
    descuento = importeventa-impventadescuento;
    porcentajededescuento = descuento*100/importeventa;

    cout << endl<<"El importe de venta con descuento es: "<< impventadescuento;
    cout <<endl<<endl<< "El porcentaje con descuento es: "<< porcentajededescuento;




return 0;
}
