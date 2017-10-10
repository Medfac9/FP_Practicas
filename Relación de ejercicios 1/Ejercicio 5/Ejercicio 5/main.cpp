//
//  Ejercicio 5
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double segundos = 0;
    double minutos = 0;
    double horas = 0;
    int entrada_seg = 0;
    int entrada_min = 0;
    int entrada_hor = 0;
    int salida_seg = 0;
    int salida_min = 0;
    int salida_hor = 0;
    
    cout << "Introduzca la hora de entrada: " << endl;
    cin >> entrada_hor;
    cout << "Introduzca los minutos de entrada: " << endl;
    cin >> entrada_min;
    cout << "Introduzca los segundos de entrada: " << endl;
    cin >> entrada_seg;
    
    cout << "Introduzca la hora de la salida: " << endl;
    cin >> salida_hor;
    cout << "Introduzca los minutos de la salida: " << endl;
    cin >> salida_min;
    cout << "Introduzca los segundos de la salida: " << endl;
    cin >> salida_seg;
    
    horas = salida_hor - entrada_hor;
    minutos = (salida_min - entrada_min) + (horas * 60);
    segundos = (salida_seg - entrada_seg) + (minutos * 60);
    
    cout << "Se ha estado un total de " << segundos << " segundos." << endl;
    
}

