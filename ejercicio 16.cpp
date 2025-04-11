#include <iostream>
using namespace std;

int main(){
    int frascos,frasco, betamol, micilina,totalporfrasco, acidosinitico,totalmgporfrasco;

    cout << "Ingresar cantidad de frascos: ";
    cin >>frasco;

    frascos=frasco*75;

    betamol = 45*frascos;
    micilina = 2000*frascos;
    acidosinitico = 7*frascos;



    cout  << "Cantidad de miligramos de Betamol es: "<< betamol;
    cout << endl<< "Cantidad de miligramos de Micilina es: "<< micilina;
    cout << endl<< "Cantidad de miligramos de Acido Sinitico es: "<< acidosinitico;






return 0;
}
