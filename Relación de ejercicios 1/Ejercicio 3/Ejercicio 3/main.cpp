//
//  Ejercicio 3
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double F = 0;
    double F2= 0;
    double F3 = 0;
    double R = 0;
    double d = 70;
    double r = 30;
    
    cout << "Introduzca la cantidad de kilos" << endl;
    cin >> R;
    
    F = (R * r) / d;
    F2 = (R * 2 * r) / d;
    F3 = (R * 3 * r) / d;
    
    cout << "La fuerza es " << F << endl;
    cout << "La fuerza necesaria para mover un objeto que pesa el doble es " << F2 << endl;
    cout << "La fuerza necesaria para mover un objeto que pesa el doble es " << F3 << endl;
}


