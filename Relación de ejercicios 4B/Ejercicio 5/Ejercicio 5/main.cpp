//
//  Ejercicio 5
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    int altura, ancho;
    char simbolo;
    
    cout << "Introduzca la altura del rectangulo: " << endl;
    cin >> altura;
    cout << "Introduzca el ancho del rectangulo: " << endl;
    cin >> ancho;
    cout << "Introduzca el simbolo del rectangulo: " << endl;
    cin >> simbolo;
    
    for (int i = 0; i < altura; i ++){
        for (int j = 0; j < ancho; j ++) {
            cout << simbolo;
        }
        cout << endl;
    }
}


