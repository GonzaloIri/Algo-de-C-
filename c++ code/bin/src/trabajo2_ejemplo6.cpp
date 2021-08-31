#include <iostream>
using namespace std;

/*positivo - neg o 0*/

int main(){

    int A, B, C;
    cout<< "ingrese un numero para A: ";
    cin >> A;
     cout<< "ingrese un numero para B: ";
    cin >> B;
     cout<< "ingrese un numero para C: ";
    cin >> C;
    if (A==B or B==A){
    
    cout << "A y B son iguales"<<endl;

    }
    else if (B==C or C==B){
        cout<< "A y C son iguales. ";

    }



return 0;
}