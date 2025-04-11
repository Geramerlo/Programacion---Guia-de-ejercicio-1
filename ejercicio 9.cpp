#include <iostream>
using namespace std;

int main() {
    int minutos,minutosing,horas,horasyminutos;




    cout << "Ingresar cantidad de minutos: ";
    cin >> minutosing;

    horas = minutosing/60 ;
    minutos = minutosing%60;

    cout<< "Cantidad de horas: "<< horas;
    cout <<":"<< minutos ;

return 0;
}
