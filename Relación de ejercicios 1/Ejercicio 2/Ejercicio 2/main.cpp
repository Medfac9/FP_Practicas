//
//  Ejercicio 2
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int intensidad = 0;
    int resistencia = 0;
    int voltaje = 0;
    
    cout << "Introduzca la intensidad" << endl;
    cin >> intensidad;
    
    cout << "Introduzca la resistencia" << endl;
    cin >> resistencia;
    
    voltaje = intensidad * resistencia;
    
    cout << "El voltaje es " << voltaje << endl;
    cout << "El voltaje con el doble de resistencia es " << voltaje * 2<< endl;
    cout << "El voltaje con el triple de resistencia es " << voltaje * 3<< endl;
}

