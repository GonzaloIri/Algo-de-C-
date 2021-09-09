/*2) Hacer un programa para mostrar por pantalla los números del 1 al 20 salteando de a 3
elementos. Es decir: 1, 4, 7, 10, 13, 16, 19.
Importante: El programa no tiene ningún ingreso de datos.*/

#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){
    int N=1;
    cout<< N <<" ";
    while (N<19){
        N+=3;
        cout<<N <<" ";
    }
    
        
    
    system ( "pause");
return 0;
}
