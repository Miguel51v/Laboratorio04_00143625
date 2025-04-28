#include <iostream>

using namespace std;

int main(){
    int numb1;

    cout << "ingrese un numero entero: ";
    cin >> numb1;

if (numb1 == 0) {
    cout << "el numero es cero";
}
else if (numb1 > 0){
    cout << "el numero es posito";
}
else {
    cout << "el numero es negativo";
}
 return 0;
}
