#include <iostream>
using namespace std;

int main() {
    int semanauno;
    int semanados ;
    int semanatres ;
    int semanacuatro;
    int sumaderecaudacionpormes;
    float promerecudacion, porcentajesemanauno, porcentajesemanados, porcentajesemanatres, porcentajesemanacuatro;

    cout << "La recaudacion de la semana uno es: ";
    cin >> semanauno;
    cout <<"La recaudacion de la semana dos es: ";
    cin >> semanados;
    cout <<"La recaudacion de la semana tres es: ";
    cin >> semanatres;
    cout << "La recaudacion de la semana cuatro es: ";
    cin >> semanacuatro;

    sumaderecaudacionpormes = semanauno + semanados + semanatres + semanacuatro;
    promerecudacion = sumaderecaudacionpormes / 4;

    cout << endl << "El promedio de recaudacion por semana es: " << promerecudacion;

    porcentajesemanauno = (semanauno*100)/sumaderecaudacionpormes;
    porcentajesemanados = (semanados*100)/sumaderecaudacionpormes;
    porcentajesemanatres = (semanatres*100)/sumaderecaudacionpormes;
    porcentajesemanacuatro= (semanacuatro*100)/sumaderecaudacionpormes;


    cout << endl << endl <<"El porcentaje de la semana uno: " << porcentajesemanauno;
    cout << endl <<"El porcentaje de la semana dos: " << porcentajesemanados;
    cout << endl <<"El porcentaje de la semana tres: " << porcentajesemanatres;
    cout << endl <<"El porcentaje de la semana cuatro: " << porcentajesemanacuatro;






return 0;
}
