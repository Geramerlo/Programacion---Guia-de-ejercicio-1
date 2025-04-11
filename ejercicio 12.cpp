#include <iostream>
using namespace std;

int main() {
    int cajadehuevos,preciofinal, preciofinalporunidad, preciofinalcajadehuevos, unidaddehuevospre,cajadehuevosopre, unidaddehuevos, huevos;


    cout << "Ingresar cantidad de huevos a comprar: ";
    cin >> huevos;

    cajadehuevos= huevos/12;
    unidaddehuevos= huevos%12;

    cajadehuevosopre=cajadehuevos*1000;
    unidaddehuevospre=unidaddehuevos*120;
    preciofinal=cajadehuevosopre+unidaddehuevospre;

    cout << cajadehuevos << " cajas";
    cout << " y "<< unidaddehuevos<<" unidades";
    cout << ", es decir $"<< cajadehuevosopre<< " + $"<< unidaddehuevospre;
    cout <<" = "<< preciofinal;



return 0;
}
