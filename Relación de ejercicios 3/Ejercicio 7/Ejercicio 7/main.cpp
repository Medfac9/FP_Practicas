//
//  Ejercicio 7
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float tesoros, victorias, derrotas, nivel, pts_mejoras = 0;
    
    cout << "Introduzca el numero de victorias: " << endl;
    cin >> victorias;
    cout << "Introduzca el numero de derrotas: " << endl;
    cin >> derrotas;
    cout << "Introduzca el numero de tesoros: " << endl;
    cin >> tesoros;
    cout << "Introduzca el numero de nivel: " << endl;
    cin >> nivel;
    
    if (victorias > derrotas){
        pts_mejoras = nivel;
    }
    else{
        tesoros = tesoros - nivel;
        if (tesoros < 0) {
            tesoros = 0;
        }
    }
    if (tesoros > 0 &&  tesoros <= 3){
        pts_mejoras = pts_mejoras + 1;
    }
    else if (tesoros > 3 &&  tesoros <= 6){
        pts_mejoras = pts_mejoras + 3;
    }
    else if (tesoros > 6 &&  tesoros <= 10){
        pts_mejoras = pts_mejoras + 5;
    }
    else {
        pts_mejoras = pts_mejoras + (5 + (tesoros - 10) / 2);
    }
    
    cout << "El numero de puntos de mejora es: " << pts_mejoras << endl;
    
}




