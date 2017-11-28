//
//  Ejercicio 4
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
    int numero, actual;
    int total_utilizados = 0;
    int cont = 0;
    
    cout << "Introduzca un numero. Para finalizar -1" << endl;
    cin >> numero;
    
    actual = numero;
    
    while (numero != -1){
        if (actual != numero) {
            vector[total_utilizados] = cont;
            total_utilizados ++;
            vector[total_utilizados] = actual;
            total_utilizados ++;
            cont = 0;
        }
        actual = numero;
        cont ++;
        cout << "Introduzca otro numero. Para finalizar -1" << endl;
        cin >> numero;
    }
    
    vector[total_utilizados] = cont;
    total_utilizados ++;
    vector[total_utilizados] = actual;
    total_utilizados ++;
    
    cout << "Vector con metodo RLE {";
    for (int i = 0; i < total_utilizados; i ++) {
        cout << vector[i];
        if (i + 1 < total_utilizados) {
            cout << " ,";
        }
    }
    cout << "}";
}
