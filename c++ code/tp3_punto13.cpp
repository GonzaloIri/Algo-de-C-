/*13) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo
de los pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20. Se listará Máximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20. Se listará Máximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20. Se listará Máximo -8.*/
#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){
        
    int i, N, maximo = -9999, min = 9999, par = 0, impar;

    

    for( i = 0; i < 10; i++){

        cout << "numero";
        cin >> N;

        if (N % 2 == 0 ){
        
        N = par;
            
        }
        
       if (i == 0){

        maximo = N;
    }
      else
        if (N > maximo){

        maximo = N;
        }

      }  
      cout << "este es par?: "<<maximo <<endl;    
     /*   
        if ( i == 0 ){
            
            min = N;
        }
        else
          if ( N < min ){
            min = N;

        } */
      
    
    

    system ( "pause");
return 0;
}
