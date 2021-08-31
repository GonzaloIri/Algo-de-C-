/*8) Basado en los 2 ejercicios anteriores, hacer un
 programa para ingresar por teclado la longitud de los tres
  lados de un triángulo y luego listar que tipo de triángulo
   es:
- Equilátero: si los tres lados son iguales
- Isósceles: si dos de los tres lados son iguales
- Escaleno: si los tres lados son distintos entre sí*/
#include <iostream>
using namespace std;



int main(){
int A,B,C;
    cout<< "escribir un numero: ";
    cin >> A;
    cout<< "escribir un numero: ";
    cin >> B;
    cout<< "escribir un numero: ";
    cin >> C;

    if ((A==B)& (B==C)){
	cout<< "EQUILATERO";
}

	else if ((A!=B)& (B!=C) & (A!=C)){ 

	cout<<"escaleno";
    }
    else
	cout<<"Iso";
	
    system( "pause");
    return 0;
}