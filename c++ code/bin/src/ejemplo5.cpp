#include <iostream>
using namespace std;

/*5) Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15% 
Hacer un programa donde se ingresa el importe original sin descuento y que se informe por
pantalla el importe con el descuento ya aplicado. */

int main(){
    int valor, importe, Mayor_importe= 501;

cout << "ingrese el valor de la compra: "<< endl;
cin>> valor;


if (valor <= 100)
{
    importe = valor * 0.95;
    cout << "tiene un  %5 de descuento ";
    cout << "Su importe total es:$ "<<importe << endl;
}
else if ( valor < Mayor_importe) {

   importe = valor * 0.90;
   cout <<" aplica un %10 de descuento. ";
    cout << "Su importe total es:$ "<<importe << endl;
   
}

else{
    importe = valor * 0.85;
    cout<< "aplica un %15 de descuento. ";
    cout << "Su importe total es:$ "<<Mayor_importe << endl;

}

system("pause");
return 0;
}