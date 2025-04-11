#include <iostream>
using namespace std;

int main() {
    float CantalfajoresA = 'A';
    float CantalfajoresB = 'B';
    float CantalfajoresC = 'C';
    float porcentajeA, porcentajeB, porcentajeC, cantidadtotaldealfajores;

    cout << "Cantidad de alfajores A vendidos: ";
    cin >> CantalfajoresA;
    cout << "Cantidad de alfajores B vendidos: ";
    cin >> CantalfajoresB;
    cout << "Cantidad de alfajores C vendidos: ";
    cin >> CantalfajoresC;

    cantidadtotaldealfajores = CantalfajoresA + CantalfajoresB + CantalfajoresC;

    porcentajeA = (CantalfajoresA*100)/cantidadtotaldealfajores;
    porcentajeB = (CantalfajoresB*100)/cantidadtotaldealfajores;
    porcentajeC = (CantalfajoresC*100)/cantidadtotaldealfajores;

    cout << endl<< "Porcentaje de alfajores A vendidos: "<< porcentajeA;
    cout << endl<< "Porcentaje de alfajores B vendidos: " << porcentajeB;
    cout << endl<< "Porcentaje de alfajores C vendidos: " << porcentajeC;





return 0;
}
