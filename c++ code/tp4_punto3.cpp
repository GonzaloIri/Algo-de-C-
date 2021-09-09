/*3) Hacer un programa para mostrar por pantalla los números del 20 al 1 en orden
decreciente.
Importante: El programa no tiene ningún ingreso de datos.*/

#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){
    int n=20;
    while (n !=0){

        n-=1;
        cout<<n<< " ";
    }
       
        
    
    system ( "pause");
return 0;
}
