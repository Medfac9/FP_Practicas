//
//  Ejercicio 12
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int poblacion_inicial = 0;
    int natalidad = 0;
    int mortalidad = 0;
    int migracion = 0;
    int poblacion_final = 0;
    const int MIL = 1000;
    
    cout << "Intorudca la población inicial: " << endl;
    cin >> poblacion_inicial;
    cout << "Intorudca la tasa de natalidad: " << endl;
    cin >> natalidad;
    cout << "Intorudca la tasa de mortalidad: " << endl;
    cin >> mortalidad;
    cout << "Intorudca la tasa de migracion: " << endl;
    cin >> migracion;
    
    poblacion_final = poblacion_inicial + (natalidad * poblacion_inicial) / MIL + (migracion * poblacion_inicial) / MIL - (mortalidad * poblacion_inicial) / MIL;
   poblacion_final = poblacion_final + (natalidad * poblacion_final) / MIL + (migracion * poblacion_final) / MIL - (mortalidad * poblacion_final) / MIL;
    poblacion_final = poblacion_final + (natalidad * poblacion_final) / MIL + (migracion * poblacion_final) / MIL - (mortalidad * poblacion_final) / MIL;
    
    cout << "La poblacion con el paso de tres años sera de: " << poblacion_final << endl;
}
