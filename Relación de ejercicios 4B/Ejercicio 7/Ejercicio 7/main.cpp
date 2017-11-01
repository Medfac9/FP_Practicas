//
//  Ejercicio 7
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 1/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int n;
    int cont = 0;
    int n_estrellas = 1;
    int aux = 1;
    int mitad;
    int const LARGO = 2;
    int const ANCHO = 3;
    int espacio = 0;
    
    cout << "Introduzca el ancho del pino: " << endl;
    cin >> n;
    
    mitad = n/2;
    espacio = (n - ANCHO) / 2;
    
    //Hojas
    for (int i = 0; i < n && n_estrellas != n+2; i ++) {
        for (int j = 0; j < n && n_estrellas != 0; j ++) {
            while (cont < mitad) {
                cout << " ";
                cont ++;
            }
            cout << "*";
            n_estrellas --;
        }
        aux = aux + 2;
        n_estrellas = aux;
        cont = 0;
        mitad --;
        cout << endl;
    }
    
    //Tronco
    for (int i = 0; i < LARGO; i ++) {
        for (int j = 0; j < ANCHO; j ++ ) {
            while (espacio != 0) {
                cout << " ";
                espacio --;
            }
            cout << "*";
        }
        espacio = (n - ANCHO) / 2;
        cout << endl;
    }
    
}




