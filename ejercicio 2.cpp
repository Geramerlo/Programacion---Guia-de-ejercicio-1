#include <iostream>
using namespace std;

int main() {
    int n1;
    int n2;
    char letraA = 'A';
    char letraB = 'B';

    cout << "Ingresar primer numero: ";
    cin >> n1;
    cout << "Ingresar segundo numero: ";
    cin >> n2;

    cout << endl << "Ahora el primer numero es: " << letraA << endl;
    cout << "Y el segundo numero es: " << letraB << endl<< endl;

    letraB='A';
    letraA='B';

    cout << "Ahora la letra A es: " << 'B' << endl;
    cout << "Y la letra B es: " << 'A' << endl;






return 0;
}
