#include <iostream>
using namespace std;
/*7) Hacer un programa para ingresar por teclado tres números e 
informar con una leyenda aclaratoria si los tres son todos distintos 
entre sí, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, es no sígnica que A y C
 sean distintos.
Ejemplo: A=8, B=6 y C=8*/
int main()
{
 int n1, n2, n3;

 cout << "Ingrese el primer numero: " <<endl;
 cin >> n1;
 cout << "Ingrese el segundo numero: " <<endl;
 cin >> n2;
 cout << "Ingrese el tercer numero: " <<endl;
 cin >> n3;

 if (n1!=n2){

    cout<< "Son distintos entre si."<<endl;
 }
 else if (n2!=n3){

    cout<< "Son distintos entre si."<<endl;
 }
    system("pause");
    return 0;

}