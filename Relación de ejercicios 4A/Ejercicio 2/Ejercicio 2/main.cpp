//
//  Ejercicio 2
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int nro, valor, digito;
    int suma = 0;
    int pares = 0;
    int suma_impar = 0;
    
    cout << " Ingrese un numero: ";
    cin >> valor;
    
    // lo descompone de derecha a izquierda
    nro = valor; // trabajo sobre una copia
    
    while (nro > 0){
        digito = nro % 10;
        nro = nro / 10;
        cout << digito << " ";
        suma = suma + digito;
        if (digito % 2 == 0){
            pares ++;
        }
        else{
            suma_impar = suma_impar + digito;
        }
    }
    
    cout << endl;
    
    //a)
    cout << "La suma es " << suma << endl;
    
    //b)
    cout << "Hay " << pares << " numeros pares" << endl;
    
    //c)
    cout << "La suma de digitos impares es " << suma_impar << endl;
    
    return(0);
}
