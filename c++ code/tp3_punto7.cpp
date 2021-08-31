/*7) Hacer un programa para ingresar una lista de 20 números, luego informar cuántos son
positivos, cuántos son negativos, y cuántos iguales a cero.*/
#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){

        int  N, cp = 0, cn = 0, cc= 0;
        for(int i = 0; i < 20; i++){

        cout << "escribi un numero: ";
        cin >> N;  

        if (N > 0)
        {
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

        cout<< "la cantidad positivos son " <<cp <<endl;

        cout<< "la cantidad de negativos son " <<cn <<endl;

        cout<< "la cantidad de ceros son " <<cc <<endl;

  
    system("pause");

    return 0;

}