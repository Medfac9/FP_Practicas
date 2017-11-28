//
//  Ejercicio 3
//  Relacion ejercicios 6
//
//  Created by Rafael Medina Facal on 27/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 100;
    int vector[MAX_SIZE];
    int total_utilizados = 0;
    int minimo, posicion_minimo, intercambia;
    int numero;
    
    cout << "Introduzca un numero. Para finalizar -1" << endl;
    cin >> numero;
    
    while (numero != -1){
        vector[total_utilizados] = numero;
        total_utilizados ++;
        cout << "Introduzca otro numero. Para finalizar -1" << endl;
        cin >> numero;
    }
    
    for (int izq = 0; izq < total_utilizados; izq ++) {
        minimo = vector[izq];
        posicion_minimo = izq;
        for (int i = izq + 1; i < total_utilizados; i ++) {
            if (vector[i] < minimo) {
                minimo = vector[i];
                posicion_minimo = i;
            }
        }
        intercambia = vector[izq];
        vector[izq] = vector[posicion_minimo];
        vector[posicion_minimo] = intercambia;
    }
    
    cout << "Vector ordenado {";
    for (int i = 0; i < total_utilizados; i ++) {
        cout << vector[i];
        if (i + 1 < total_utilizados) {
            cout << " ,";
        }
    }
    cout << "}";
}
