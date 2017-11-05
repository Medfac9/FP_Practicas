//
//  Ejercicio 8
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 5/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int sumaDigitosImpares (long long a){
    int resto, suma = 0;
    
    while (a > 0) {
        resto = a % 10;
        if (resto % 2 != 0) {
            suma += resto;
        }
        a /= 10;
    }
    
    return suma;
}

int sumaDigitosPares (long long a){
    int resto, suma = 0;
    
    while (a > 0) {
        resto = a % 10;
        if (resto % 2 == 0) {
            suma += resto;
        }
        a /= 10;
    }
    
    suma = suma * 3;
    
    return suma;
}

int digitoControl(long long codigo){
    int sumaImpar, sumaPar, sumaTotal, digitoControl;
    
    sumaImpar = sumaDigitosImpares(codigo);
    sumaPar = sumaDigitosPares(codigo);
    sumaTotal = sumaImpar + sumaPar;
    
    digitoControl = sumaTotal % 10;
    
    return digitoControl;
}

int main() {
    int digito;
    long long codigo;
    
    cout << "Introduzca el codigo de barras: " << endl;
    cin >> codigo;
    
    digito = digitoControl(codigo);
    
    cout << "El digito control es: " << digito << endl;
    
}
