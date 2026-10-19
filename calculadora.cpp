#include <iostream>
using namespace std;
int main(){
    int n1, n2, resultado, opcion;
    cout << "elije una opcion" <<endl;
    cout << "1. suma" <<endl;
    cout << "2. resta" <<endl;
    cout << "3. multiplicacion" <<endl;
    cout << "4. division" <<endl;
    cin >> opcion;

    switch(opcion){
        case 1:
            resultado = n1 + n2;
            cout << "el resultado de la suma es: " << resultado << endl;
        break;
    }
}
