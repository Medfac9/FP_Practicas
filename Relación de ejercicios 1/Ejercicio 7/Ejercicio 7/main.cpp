//
//  Ejercicio 7
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    float cd = 0;
    float libro = 0;
    double precio = 0;
    const float IVA = 1.12;
    int aux;
    
    cout << "Introduzca el precio del cd: ";
    cin >> cd;
    cout << "Introduzca el precio del libro: ";
    cin >> libro;
    
    //a)
    precio = 3 * cd + 5 * libro;
    
    cout << "El precio de tres CDs y cinco libros es: " << precio << endl;
    
    //b)
    precio = precio * IVA;
    
    cout << "El precio de tres CDs, cinco libros y el IVA es: " << precio << endl;
    
    //c)
    if(fmod(precio,1) * 10 >= 5){
        aux = fmod(precio, 1000) + 1;
        precio = aux;
    }
    else{
        aux = fmod(precio, 1000);
        precio = aux;
    }
    
    cout << "El precio redondeado de tres CDs, cinco libros y el IVA es: " << precio << endl;
    
    
}
