#include <iostream>
using namespace std;

int main() {
    int amplitudtermica,temperatura, tempemax, tempemin;

    cout << "Ingresa temperatura maxima: ";
    cin >> tempemax;

    cout << "Ingresa temperatura minima: ";
    cin >> tempemin;

    amplitudtermica=tempemax-tempemin;

    cout << endl << "La amplitud termica es: "<< amplitudtermica;


return 0;
}
