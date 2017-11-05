//
//  Ejercicio 6
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 4/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int sumaDigitos (int a){
    int resto, suma = 0;
    
    while(a > 0){
        resto = a % 10;
        suma = suma + resto;
        a = a / 10;
    }
    
    return suma;
}

bool comparar (int a, int b){
    bool es_mayor = false;
    
    if(a > b){
        es_mayor = true;
    }
    
    return es_mayor;
}

int main() {
    int a, b, sumaA, sumaB;
    bool esMayor = false;
    
    cout << "Introduzca un numero: " << endl;
    cin >> a;
    cout << "Introduzca otro numero: " << endl;
    cin >> b;
    
    sumaA = sumaDigitos(a);
    sumaB = sumaDigitos(b);
    
    esMayor = comparar(sumaA, sumaB);
    
    cout << "La suma de los digitos de A es mayor que la de B: " << esMayor << endl;
}

