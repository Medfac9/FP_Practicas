//
//  Ejercicio 5
//  Relacion ejercicios 6
//
//  Created by Rafael Medina Facal on 28/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 20;
    int vector[MAX_SIZE];
    int numero, izq, der, num_a_borrar;
    int total_utilizados = 0;
    
    cout << "Introduzca numero para la izquierda " << endl;
    cin >> izq;
    
    cout << "Introduzca numero para la derecha " << endl;
    cin >> der;
    
    cout << "Introduzca un numero. Para finalizar -1" << endl;
    cin >> numero;
    
    while (numero != -1){
        vector[total_utilizados] = numero;
        total_utilizados ++;
        cout << "Introduzca otro numero. Para finalizar -1" << endl;
        cin >> numero;
    }
    
    cout << "Vector normal  {" ;
    for (int i = 0; i < total_utilizados; i ++) {
        cout << vector[i];
        if (i + 1 < total_utilizados) {
            cout << " ,";
        }
    }
    cout << "}" << endl;
    
    num_a_borrar = der - izq + 1;

    for (int i = der + 1; i < total_utilizados; i ++) {
        vector[i - num_a_borrar] = vector[i];
    }
    
    total_utilizados -= num_a_borrar;
    
    cout << "Vector sin el rango desde la posicion " << izq << " hasta la " << der <<" {";
    for (int i = 0; i < total_utilizados; i ++) {
        cout << vector[i];
        if (i + 1 < total_utilizados) {
            cout << " ,";
        }
    }
    cout << "}" << endl;
}

