//
//  Ejercicio 5
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
    char auxM[MAX][MAX];
    int numero;
    int contadorEstrellas = 0;
    int contadorBlanco = 0;
    int aux, aux2;
    
    do{
        cout << "Ingrese un numero: ";
        cin >> numero;
    }while (numero >= 10);
    
    // relleno la matriz en blanco
    for(int i = 0; i < MAX; i++)
        for(int j = 0; j < MAX; j++)
            L[i][j] = ' ';
    
    contadorEstrellas = numero;
    
    // relleno la matriz con *
    for(int i = 0; i < numero; i++){
        aux = contadorBlanco;
        aux2 = contadorEstrellas;
        for(int j = 0; j < numero - aux; j++){
            if (contadorBlanco == 0 && contadorEstrellas != 0) {
                L[i][j] = '*';
                contadorEstrellas --;
            }
            else
                contadorBlanco --;
        }
        contadorEstrellas = aux2;
        contadorEstrellas -= 2;
        contadorBlanco = aux;
        contadorBlanco ++;
    }
    
    // muestro la matriz
    for(int i = 0; i < numero; i++){
        cout << endl;
        for(int j = 0; j < numero; j++)
            cout << L[i][j];
    }
    cout << endl;
    
    for (int i = 0; i < numero; i ++) {
        for (int j = 0; j < numero; j ++) {
            auxM[j][i] = L[i][j];
        }
    }
    
    cout << "Rotada 45º a la derecha" << endl;
    for(int i = 0; i < numero; i++){
        cout << endl;
        for(int j = 0; j < numero; j++)
            cout << auxM[i][j];
    }
    cout << endl;
    
}
