//
//  Ejercicio 3
//  Relacion ejercicios 2
//
//  Created by Rafael Medina Facal on 9/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char mayuscula;
    char minuscula;
    int const DIFERENCIA = 'a' - 'A';
    cout << "Introduzca una letra mayuscula: " << endl;
    cin >> mayuscula;
    
    minuscula = mayuscula + DIFERENCIA;
    
    cout << "La letra minuscula es: " << minuscula << endl;
}

