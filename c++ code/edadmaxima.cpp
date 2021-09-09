#include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){
        int edad, emax=0;

        cout << "ingrese la edad (0 para terminar):  ";
        cin >> edad;

        while (edad!=0){
            if(edad>emax) emax=edad; 
            cout << "ingrese la edad (0 para terminar):  ";
            cin >> edad;
            
        }
        cout << "edad maxima: "<<emax <<endl;
        cout <<endl;
        
        
    
    system ( "pause");
return 0;
}
