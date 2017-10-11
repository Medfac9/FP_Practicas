//
//  Ejercicio 8
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int n_folletos, habitual;
    char tipo_papel;
    double precio_final = 0;
    const float RANGO1 = 31.99;
    const float RANGO2 = 34.50;
    const float RANGO3 = 38.58;
    const float RANGO4 = 46.99;
    const float DESCUENTOA = 5;
    const float INCREMENTOB1 = 5;
    const float INCREMENTOC1 = 7.5;
    const float INCREMENTOB0 = 10;
    const float INCREMENTOC0 = 15;
    
    cout << "Introduzca el  numero de folletos: " << endl;
    cin >> n_folletos;
    cout << "Introduzca el tipo de papel: " << endl;
    cin >> tipo_papel;
    cout << "Introduzca 1 si es cliente habitual o un 0 en caso contrario: " << endl;
    cin >> habitual;
    
    if (n_folletos > 1000){
        cout << "Contacte con nosotros por telefono" << endl;
    }
    else{
        if (n_folletos > 0 && n_folletos <= 100){
            if (habitual == 0){
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO1;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO1;
                    precio_final = precio_final + (precio_final * INCREMENTOB0) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO1;
                    precio_final = precio_final + (precio_final * INCREMENTOC0) / 100;
                }
            }
            else {
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO1;
                    precio_final = precio_final - (precio_final * DESCUENTOA) / 100;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO1;
                    precio_final = precio_final + (precio_final * INCREMENTOB1) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO1;
                    precio_final = precio_final + (precio_final * INCREMENTOC1) / 100;
                }
            }
            cout << "El precio final es: " << precio_final << endl;
        }
        else if (n_folletos > 100 && n_folletos <= 250){
            if (habitual == 0){
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO2;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO2;
                    precio_final = precio_final + (precio_final * INCREMENTOB0) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO2;
                    precio_final = precio_final + (precio_final * INCREMENTOC0) / 100;
                }
            }
            else {
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO2;
                    precio_final = precio_final - (precio_final * DESCUENTOA) / 100;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO2;
                    precio_final = precio_final + (precio_final * INCREMENTOB1) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO2;
                    precio_final = precio_final + (precio_final * INCREMENTOC1) / 100;
                }
            }
            cout << "El precio final es: " << precio_final << endl;
        }
        else if (n_folletos > 250 && n_folletos <= 500){
            if (habitual == 0){
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO3;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO3;
                    precio_final = precio_final + (precio_final * INCREMENTOB0) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO3;
                    precio_final = precio_final + (precio_final * INCREMENTOC0) / 100;
                }
            }
            else {
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO3;
                    precio_final = precio_final - (precio_final * DESCUENTOA) / 100;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO3;
                    precio_final = precio_final + (precio_final * INCREMENTOB1) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO3;
                    precio_final = precio_final + (precio_final * INCREMENTOC1) / 100;
                }
            }
            cout << "El precio final es: " << precio_final << endl;
        }
        else if (n_folletos > 250 && n_folletos <= 500){
            if (habitual == 0){
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO4;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO4;
                    precio_final = precio_final + (precio_final * INCREMENTOB0) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO4;
                    precio_final = precio_final + (precio_final * INCREMENTOC0) / 100;
                }
            }
            else {
                if (tipo_papel == 'A'){
                    precio_final = n_folletos * RANGO4;
                    precio_final = precio_final - (precio_final * DESCUENTOA) / 100;
                }
                else if (tipo_papel == 'B'){
                    precio_final = n_folletos * RANGO4;
                    precio_final = precio_final + (precio_final * INCREMENTOB1) / 100;
                }
                else {
                    precio_final = n_folletos * RANGO4;
                    precio_final = precio_final + (precio_final * INCREMENTOC1) / 100;
                }
            }
            cout << "El precio final es: " << precio_final << endl;
        }
    }
}


