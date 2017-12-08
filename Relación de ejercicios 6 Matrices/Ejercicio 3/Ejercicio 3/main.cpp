//
//  Ejercicio 3
//  Relacion ejercicios 6 Matrices
//
//  Created by Rafael Medina Facal on 7/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int FIL = 10;
    const int COL = 5;
    const int MIN = 0, MAX=10, NUM_VALORES = MAX-MIN+1;
    int M[FIL][COL];
    int util_f, util_c;
    int i,j;
    time_t t;
    srand ((int) time(&t));
    
    // relleno la matriz con valores aleatorios
    for(i = 0; i < FIL; i++)
        for(j = 0; j < COL; j++)
            M[i][j] = (rand() % NUM_VALORES) + MIN;
    util_f = FIL; util_c = COL;
    
    // muestro la matriz
    for(i = 0; i < util_f; i++){
        cout << endl;
        for(j = 0; j < util_c; j++)
            cout << M[i][j] << "\t";
    }
    cout << endl;
    
    //a)
    int frecuencia = 0;
    int numero = 0;
    
    while (numero <= 0 || numero > 10) {
        cout << "Introduzca el numero entre 1 y 10 que desee saber cuantas veces aparece" << endl;
        cin >> numero;
    }
    
    for (int i = 0; i < util_f; i ++) {
        for (int j = 0; j < util_c; j ++) {
            if (M[i][j] == numero) {
                frecuencia ++;
            }
        }
    }
    cout << "La frecuencia es: " << frecuencia << endl;
    
    //b)
    int filaI = 0;
    int filaJ = 0;
    int intercambio[FIL][COL];
    
    do{
        cout << "Introduzca un numero entre 1 y 10 para intercambiar las filas" << endl;
        cin >> filaI;
    }while (filaI <= 0 || filaI > 10);
    
    do{
        cout << "Introduzca otro numero entre 1 y 10 para intercambiar las filas" << endl;
        cin >> filaJ;
    }while (filaJ <= 0 || filaJ > 10);
    
    for (int i = 0; i < util_f; i ++) {
        for (int j = 0; j < util_c; j ++) {
            if (i == filaI) {
                intercambio[i][j] = M[filaJ][j];
            }
            else if (i == filaJ){
                intercambio[i][j] = M[filaI][j];
            }
            else{
                intercambio[i][j] = M[i][j];
            }
        }
    }
    
    // muestro la matriz
    for(i = 0; i < util_f; i++){
        cout << endl;
        for(j = 0; j < util_c; j++)
            cout << intercambio[i][j] << "\t";
    }
    cout << endl;
    
    //b)
    int columnaI = 0;
    int columnaJ = 0;
    int intercambioColumnas[FIL][COL];
    
    do{
        cout << "Introduzca un numero entre 1 y 10 para intercambiar las columnas" << endl;
        cin >> columnaI;
    }while (columnaI <= 0 || columnaI > 10);
    
    do{
        cout << "Introduzca otro numero entre 1 y 10 para intercambiar las columnas" << endl;
        cin >> columnaJ;
    }while (columnaJ <= 0 || columnaJ > 10);
    
    for (int i = 0; i < util_f; i ++) {
        for (int j = 0; j < util_c; j ++) {
            if (j == columnaI) {
                intercambioColumnas[i][j] = M[i][columnaJ];
            }
            else if (j == columnaJ){
                intercambioColumnas[i][j] = M[i][columnaI];
            }
            else{
                intercambioColumnas[i][j] = M[i][j];
            }
        }
    }
    
    // muestro la matriz
    for(i = 0; i < util_f; i++){
        cout << endl;
        for(j = 0; j < util_c; j++)
            cout << intercambioColumnas[i][j] << "\t";
    }
    cout << endl;
    
    //d)
    
    float V[FIL];
    float media, suma = 0;
    
    for (int i = 0; i < util_f; i ++) {
        for (int j = 0; j < util_c; j ++) {
            suma = M[i][j] + suma;
        }
        media = suma / (5.0);
        V[i] = media;
        suma = 0;
    }
    for (int i = 0; i < FIL; i ++) {
        cout << "La media de la fila " << i << " es: " << V[i] << endl;
    }
    
}
