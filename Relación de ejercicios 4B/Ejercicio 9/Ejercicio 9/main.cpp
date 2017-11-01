//
//  Ejercicio 9
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 1/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int tope, resultado = 0;
    
    cout << "Introduzca un numero tope: " << endl;
    cin >> tope;
    
    for (int i = 1; i < tope && resultado <= tope; i ++) {
        cout << "El " << resultado << " es un numero triangular" << endl;
        resultado = resultado + i;
    }
}

