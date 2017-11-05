//
//  Ejercicio 2
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 4/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//


#include <iostream>

using namespace std;

int anyosHasta (double capital_inicial, double interes, double capital_objetivo){
    int anios = 0;
    double capital_actual = capital_inicial;
    
    interes = interes / 100;
    
    do{
        capital_actual = capital_actual * interes + capital_actual;
        anios ++;
    }while (capital_actual < capital_objetivo);
    
    return anios;
}



int main() {
    double capital_inicial, interes, capital_objetivo;
    int anios = 0;
    
    cout << "Introduzca el capital fijo: " << endl;
    cin >> capital_inicial;
    cout << "Introduzca el interes: " << endl;
    cin >> interes;
    cout << "Introduzca el capital objetivo: " << endl;
    cin >> capital_objetivo;
    
    anios = anyosHasta(capital_inicial, interes, capital_objetivo);
    
    cout << "Han de pasar " << anios << " para obtener el capital objetivo" << endl;
}

