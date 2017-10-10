//
//  Ejercicio 8
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    double score = 0;
    int vidas_restantes = 3;
    int bajas = 10;
    int asistencias = 4;
    const int PUNTOS_BAJAS = 10;
    const int PUNTOS_ASISTENCIAS = 5;
    const int PUNTOS_VIDAS = 7;
    
    score = vidas_restantes * PUNTOS_VIDAS + bajas * PUNTOS_BAJAS + asistencias * PUNTOS_ASISTENCIAS;
    
    cout << "Numero de bajas: " << bajas << endl;
    cout << "Numero de asistencias: " << asistencias << endl;
    cout << "Numero de vidas: " << vidas_restantes << endl;
    cout << "Score total: " << score << endl;
}
