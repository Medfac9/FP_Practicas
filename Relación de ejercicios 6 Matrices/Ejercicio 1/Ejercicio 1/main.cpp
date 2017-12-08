//
//  Ejercicio 1
//  Relacion ejercicios 6 Matrices
//
//  Created by Rafael Medina Facal on 7/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

const int MAX_SIZE = 3;

int main() {
    int matriz[MAX_SIZE][MAX_SIZE];
    int contador = 1;
    int contador2 = 1;
    
    //Caso 1
    cout << "Caso 1" << endl;
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            matriz[i][j] = contador;
            contador ++;
        }
    }
    
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //Caso 2
    cout << "Caso 2" <<endl;
    contador = 1;
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            matriz[i][j] = contador;
        }
        contador ++;
    }
    
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //Caso 3
    cout << "Caso 3" << endl;
    contador = 1;
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            matriz[j][i] = contador;
        }
        contador ++;
    }
    
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //Caso 4
    cout << "Caso 4" << endl;
    contador = 1;
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            matriz[i][j] = contador;
            contador ++;
        }
        contador2 ++;
        contador = contador2;
    }
    
    for (int i = 0; i < MAX_SIZE; i ++) {
        for (int j = 0; j < MAX_SIZE; j ++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

