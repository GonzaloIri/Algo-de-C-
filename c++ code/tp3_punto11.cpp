/*11) Hacer un programa para ingresar una lista de 10 números, luego informar el máximo y el
mínimo.
Ejemplo: 10, 20, -5, 30,-15, 5, 42, 0, 22, -13. Se listará Máximo 42 Mínimo -15.
Ejemplo: 10, 20, 5, 30, 15, 5, 42, 8, 22, 13. Se listará Máximo 42 Mínimo 5.
Ejemplo: -10, -20, -5, -30, -15, -12, -42, -8, -22, -13. Se listará Máximo -5 Mínimo -42.
Los Ejemplos 2 y 3 demuestran que no siempre en una lista de números el máximo es un
positivo y que no siempre el mínimo es un negativo.*/
#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){
    int N , min = 99999 , maximo =-99999;

        

    for(int i = 0 ; i < 10 ; i++ ){

        cout<< "bla bla bla numero: ";
        cin >> N;

        if (i == 0){
            maximo = N;
    }
      else
        if (N > maximo){ 

            maximo = N;
        }
        if ( i == 0 ){
            
            min = N;
        }
        else
          if ( N < min ){
            min = N;

        } 
        
 
}  
    cout<<"el maximo es: " <<maximo <<endl;
    cout<< "el minimo es: " <<min <<endl;
    
    system ( "pause");
return 0;
}
