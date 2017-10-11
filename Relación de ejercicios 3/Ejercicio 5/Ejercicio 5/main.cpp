//
//  Ejercicio 5
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    string mvp = "Medfac9";
    int pts_mvp = 1234;
    string mvp2 = "Rafa";
    int pts_mvp2 = 1200;
    string aspirante;
    int pts_aspirante;
    
    cout << "Introduzca el nombre: " << endl;
    cin >> aspirante;
    cout << "Introduzca los puntos: " << endl;
    cin >> pts_aspirante;
    
    if (pts_aspirante > pts_mvp){
        mvp2 = mvp;
        pts_mvp2 = pts_mvp;
        mvp = aspirante;
        pts_mvp = pts_aspirante;
        cout << "Nuevo mejor jugador: " << mvp << endl;
        cout << "Puntuación: " << pts_mvp << endl;
        cout << "Segundo mejor jugador: " << mvp2 << endl;
        cout << "Puntuación: " << pts_mvp2 << endl;
    }
    else if(pts_aspirante > pts_mvp2){
        mvp2 = aspirante;
        pts_mvp2 = pts_aspirante;
        cout << "Mejor jugador: " << mvp << endl;
        cout << "Puntuación: " << pts_mvp << endl;
        cout << "Nuevo segundo mejor jugador: " << mvp2 << endl;
        cout << "Puntuación: " << pts_mvp2 << endl;
    }
    else {
        cout << "No estas entre los dos mejores jugadores" << endl;
    }
}


