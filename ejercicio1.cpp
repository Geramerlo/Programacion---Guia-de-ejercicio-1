#include <iostream>
using namespace std;

int main() {
   // division decimal
   int dinero;
   int personas;
   float resultado;


   cout << "Ingresar la cantidad de dinero : ";
   cin >> dinero;
   cout << "Ingresar la cantidad de personas: ";
   cin >> personas;

   resultado = (float)dinero/personas;

   cout << "Le corresponden a cada uno $: " << resultado << endl;




return 0;
}

