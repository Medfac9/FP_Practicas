//
//  Ejercicio 2
//  Relacion ejercicios 6 Matrices
//
//  Created by Rafael Medina Facal on 7/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int M, N;
    int contador = 1;
    
    cout << "Introduzca el numero de filas: " << endl;
    cin >> M;
    cout << "Introduzca el numero de columnas: " << endl;
    cin >> N;
    
    int matriz[M][N];
    
    cout << "Matriz" << endl;
    for (int i = 0; i < M; i ++) {
        for (int j = 0; j < N; j ++) {
            matriz[i][j] = contador;
            contador ++;
        }
    }

    for (int i = 0; i < M; i ++) {
        for (int j = 0; j < N; j ++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    cout << "Transpuesta" << endl;
    
    for (int i = 0; i < N; i ++) {
        for (int j = 0; j < M; j ++) {
            cout << matriz[j][i] << " ";
        }
        cout << endl;
    }
    cout << endl;
    
}
