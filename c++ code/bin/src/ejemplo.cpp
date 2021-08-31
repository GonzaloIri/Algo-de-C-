#include <iostream>
using namespace std;

/*positivo - neg o 0*/

int main(){

	int  numero;
	
	cout<< "ingrese un numero: "<<endl;
	cin>> numero;

	if (numero > 0 )
	{
		cout<<" El numero es positivo. "<<endl;
	}

	else if (numero == 0){
		cout<< "el numero es cero. ";
	}

	else
	{
		cout<< "El numero es negativo. "<<endl;
	}
	
	
  

    return 0;
}



