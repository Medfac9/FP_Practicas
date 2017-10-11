//
//  Ejercicio 2
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    const float DESCUENTO = 7.5;
    double importe, importeFinal;
    int amigo;
    
    cout << "Introduzca el precio del producto: " << endl;
    cin >> importe;
    cout << "Si tiene la tarjeta amiga marque 1, sino 0: " << endl;
    cin >> amigo;
    
    if (amigo == 0){
        importeFinal = importe;
    }
    else {
        importeFinal = importe - (importe * DESCUENTO) / 100;
    }
    
    cout << "El importe final es: " << importeFinal << endl;
}
