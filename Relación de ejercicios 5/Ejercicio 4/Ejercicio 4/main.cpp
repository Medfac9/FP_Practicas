//
//  Ejercicio 4
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 4/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

bool esTriangular (int limite1, int limite2, int valor){
    bool triangular = false;
    
    if (valor > limite1 && valor < limite2){
        triangular = true;
    }
    else{
        triangular = false;
    }
    
    return triangular;
}



int main() {
    int limite1, limite2;
    int resultado = 0;
    
    cout << "Introduzca el primer limite: " << endl;
    cin >> limite1;
    cout << "Introduzca el segundo limite: " << endl;
    cin >> limite2;
    
    for (int i = limite1; i < limite2 && resultado <= limite2; i ++) {
        if (esTriangular(limite1, limite2, i)) {
            cout << "El " << resultado << " es un numero triangular" << endl;
        }
        resultado = resultado + i;
    }
    
}



