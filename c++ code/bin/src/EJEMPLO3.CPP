#include <iostream>
using namespace std;

/*3) Hacer un programa para ingresar por teclado un número y luego informar por pantalla con
un cartel aclaratorio si el mismo es par o impar.
*/

int main(){

int numero;
cout<< "ingrese un numero: "<<endl;
cin>> numero;

if ( numero % 2 == 0) 
{
  cout<< "es par "<<endl;
}

else{
    cout<< " Es impar. ";
}






    return 0;
}