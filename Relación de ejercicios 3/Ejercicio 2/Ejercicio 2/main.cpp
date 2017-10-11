//
//  Ejercicio 2
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char letra;
    int numero;
    int dato1, dato2, dato3;
    
    //a)
    cout << "Introduzca un caracter: " << endl;
    cin >> letra;
    
    if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')){
        cout << "El caracter es una letra" << endl;
    }
    else {
        cout << "El caracter no es una letra" << endl;
    }
    
    //b)
    cout << "Introduzca un numero: " << endl;
    cin >> numero;
    
    if (numero % 2 == 0){
        cout << "El numero es par" << endl;
        if (numero % 8 == 0){
            cout << "El numero es divisible por 8" << endl;
        }
        else {
            cout << "El numero no es divisible por 8" << endl;
        }
    }
    else {
        cout << "El numero es impar" << endl;
        if (numero % 3 == 0){
            cout << "El numero es multiplo de 3" << endl;
        }
        else {
            cout << "El numero no es multiplo de 3" << endl;
        }
    }
    
    //c)
    cout << "Introduzca un numero: " << endl;
    cin >> dato1;
    cout << "Introduzca otro numero: " << endl;
    cin >> dato2;
    
    if (dato1 >= dato2){
        if (dato1 == dato2){
            cout << "Los numeros son iguales" << endl;
        }
        else {
            cout << "El " << dato1 << " es mayor que el " << dato2 << endl;
        }
        
    }
    else {
        cout << "El " << dato1 << " es menor que el " << dato2 << endl;
    }
    
    //d)
    cout << "Introduzca un numero: " << endl;
    cin >> dato1;
    cout << "Introduzca otro numero: " << endl;
    cin >> dato2;
    cout << "Introduzca otro numero: " << endl;
    cin >> dato3;
    
    if ((dato1 >= dato2 && dato2 >= dato3) || (dato1 <= dato2 && dato2 <= dato3)){
        cout << "Los numeros estan ordenados" << endl;
    }
    else {
        cout << "Los numeros no estan ordenados" << endl;
    }
    
}


