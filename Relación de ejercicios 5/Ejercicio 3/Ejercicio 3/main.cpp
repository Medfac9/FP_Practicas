//
//  Ejercicio 3
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 4/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

void valorEnRango (char letra, char limite1, char limite2, string mensaje){
    do {
        cout << mensaje;
        cin >> letra;
    } while (letra < limite1 || letra > limite2);
}



int main() {
    char limite1, limite2, letra;
    string mensaje = "La letra no está en el rango. Introduzca otra: ";
    
    cout << "Introduzca el primer limite" << endl;
    cin >> limite1;
    cout << "Introduzca el segundo limite" << endl;
    cin >> limite2;
    cout << "Introduzca la letra" << endl;
    cin >> letra;
    
    valorEnRango(letra, limite1, limite2, mensaje);
    
    cout << "La letra esta en el rango" << endl;
    
}


