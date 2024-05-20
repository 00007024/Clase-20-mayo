#include <iostream>
using namespace std;
int main ()
{
int numero=0;
cout<< "ingrese el numero1:";
cin >> numero;
if (numero < 0){

cout << "el factorial de un numero negativo no existe. \n";
}
else{
    int factorial=1;
    for (int i = numero ; i>=1;i--)
    factorial= factorial*i;
    cout << "el factorial de " << numero << " es" << factorial;
        
    }
    return 0;
}

