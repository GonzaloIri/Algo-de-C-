#include <iostream>
#include <cstdlib>
/*9) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo.
Ejemplo 1: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20. Se listará Máximo 35.
Ejemplo 2: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20. Se listará Máximo 55.
Ejemplo 3: -15, -10, -20, -8, -25, -13, -55, -6, -55, -20. Se listará Máximo -6.
El Ejemplo 3 demuestra que no siempre en una lista de números el máximo es un positivo.*/
 using namespace std;
	
	int main(){
        
    int maximo, N;
     
    for (int i = 0; i < 10; i++){

    cout << "ingrese un numero: ";
    cin>>N;
        if (i == 0){
            maximo = N;
    }
      else{
        if (N > maximo){ 

            maximo = N;

            }

        }     

    }
    
    cout<< "el maximo es: " <<maximo<<endl;
    
    system ( "pause");
return 0;

}