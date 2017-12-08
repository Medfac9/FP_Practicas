//
//  Ejercicio 4
//  Relacion ejercicios 6 Matrices
//
//  Created by Rafael Medina Facal on 7/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const char MAX = 10;
    char L[MAX][MAX];
    int v[MAX];
    int numero;
    int total_u = 0;
    int contador = 0;
    int contador_max = 0;
    
    cout << "Ingrese un numero. -1 para terminar: ";
    cin >> numero;
    
    while (numero != -1 && total_u < MAX) {
        v[total_u] = numero;
        total_u ++;
        cout << "Ingrese otro numero. -1 para terminar: ";
        cin >> numero;
    }
    
    // relleno la matriz en blanco
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            L[i][j] = ' ';
    
    // relleno la matriz con *
    for(int i = 0; i < total_u; i++){
        contador = v[i];
        if (contador > contador_max) {
            contador_max = contador;
        }
        for(int j = 0; j < contador_max; j++)
            if (contador > j) {
                L[i][j] = '*';
            }
    }
    
    // muestro la matriz
    for(int i = 0; i < total_u; i++){
        cout << endl;
        for(int j = 0; j < contador_max; j++)
            cout << L[i][j];
    }
    cout << endl;
    
}
