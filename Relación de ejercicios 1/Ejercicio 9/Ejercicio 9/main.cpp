//
//  Ejercicio 9
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double kilometros = 0;
    double litros_consumidos = 0;
    double litros_restantes = 0;
    double consumo1 = 0;
    double consumo2 = 0;
    double autonomia = 0;
    int const CIEN = 100;
    
    cout << "Introduzca el numero de kilometros: " << endl;
    cin >> kilometros;
    cout << "Introduzca el numero de litros consumidos: " << endl;
    cin >> litros_consumidos;
    cout << "Introduzca el numero de litros restantes: " << endl;
    cin >> litros_restantes;
    
    consumo1 = litros_consumidos / kilometros;
    consumo2 = consumo1 * CIEN;
    autonomia = litros_restantes / consumo1;
    
    cout << "El consumo de un kilometro es de " << consumo1 << " litros" << endl;
    cout << "El consumo cada 100km es de " << consumo2 << " litros" << endl;
    cout << "La autonomia restante es de " << autonomia << " kilometros" << endl;
    
}

