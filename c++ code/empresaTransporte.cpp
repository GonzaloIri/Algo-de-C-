/*Una empresa de transporte necesita un programa para controlar la carga de los camiones.
 cada camion acepta un peso max para transportar. la empresa acepta paquetes de distintos peso.
 hacer un programapara que dado un valor de carga max el camion, se vaya ingresando el peso de cada paquete
  a transportar, y se corte el ingreso cuando la suma de los paquetes sea mayor a la carga max establecida*/

 #include <iostream>
#include <cstdlib>

 using namespace std;
	
	int main(){

    int cargaMaxima, peso, sumaPeso, NumCamion, n;

    cout<<"ingrese cuantos camiones hay: ";
    cin>>n;
   for (int i = 0; i < n ; i++){

        cout << "Ingrese el nro de camion: ";
        cin>> NumCamion;       
        cout << "Ingrese la carga maxima: ";
        cin>> cargaMaxima;
        sumaPeso=0;

        while (sumaPeso<cargaMaxima){
            cout << "Ingrese el peso del paquete: ";
            cin>> peso;  
            sumaPeso+=peso;         
    
    }
    cout << "esta lleno pa."<<endl;
}
    system ( "pause");
    return 0;
}
