//
//  Ejercicio 4
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double ahorros, gastos;
    
    cout << "Introduzca los ahorros: " << endl;
    cin >> ahorros;
    cout << "Introduzca los gastos: " << endl;
    cin >> gastos;
    
    if (ahorros >= gastos){
        cout << "SOLVENTE" << endl;
        ahorros = ahorros - gastos;
        gastos = 0;
    }
    else{
        cout << "EN QUIEBRA" << endl;
    }
}

