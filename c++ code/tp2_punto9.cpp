#include <iostream>
#include <cstdlib>
/*9) Hacer un programa para ingresar tres números y listar el máximo de ellos. 
*/
 using namespace std;
	
	int main(){

    int a, b, c;
    cout<< "ingrese un numero: ";
    cin>>a;
    cout<< "ingrese un numero: ";
    cin>>b;
    cout<< "ingrese un numero: ";
    cin>>c;
    if ((a>b) && (a>c)){

        cout<< "a es el mayor" << endl;
        
    }
    else if ((b>a) && (b>c)){
        cout << "b es el mayor" << endl;
    }
    else
    cout<< "c es el mayor" << endl;
system ( "pause");
return 0;

}