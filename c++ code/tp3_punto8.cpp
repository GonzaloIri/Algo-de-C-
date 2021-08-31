/*Hacer un programa para ingresar una lista de 20 números, luego informar que
porcentaje son positivos, negativos, y ceros.*/

#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){

    int  i, N, cp = 0, cn = 0, cc= 0, pcp;
        for( i = 0; i < 20; i++){

        cout << "escribi un numero: ";
        cin >> N;  

        if (N > 0){
            
            cp++;
        
            }

        else if (N < 0){
           
           cn++;
        }
        else
        {
            cc++;
        }
        
        }
        cp = (i*cp) % 100;
        cn = (i*cn) % 100;
        cc = (i*cc) % 100;

        cout<< "el porcentaje de positivos es: %" << cp <<endl;

        cout<< "El porcentaje de negativos es: %" <<cn <<endl;

        cout<< "El porcentaje de ceros es: %" <<cc <<endl;

  
    
        
    
    system ( "pause");
return 0;
}