//
//  Ejercicio 11
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int numero;
    
    cout << "Introduzca un numero" << endl;
    cin >> numero;
    
    cout << "El numero es " << numero / 100;
    
    cout << "--"<< (numero / 10) % 10;
    
    //numero = numero / 10;
    
    cout << "--"<< numero % 10 << endl;
}



