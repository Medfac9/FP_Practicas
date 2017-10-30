//
//  Ejercicio 1
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    char letra;
    int par, n1, n2, impar;
    
    //a)
    do{
        cout << "Introduzca una letra: " << endl;
        cin >> letra;
    }while (letra < 'A' || (letra > 'Z' && letra < 'a') || letra > 'z');
    
    cout << "Es una letra" << endl;

    //b)
    do{
        cout << "Introduzca un numero par positivo: " << endl;
        cin >> par;
    }while (par <= 0 || par % 2 != 0);
    
    cout << "Es un numero par positivo" << endl;
    
    //c)
    do{
        cout << "Introduzca un numero: " << endl;
        cin >> n1;
        cout << "Introduzca otro numero mayor: " << endl;
        cin >> n2;
    }while (n1 >= n2);
    
    cout << n2 << " es mayor que " << n1 << endl;
    
    //d)
    do{
        cout << "Introduzca un numero entero terminado en un dígito impar: " << endl;
        cin >> impar;
    }while (impar % 2 == 0);
    
    cout << "Es un numero impar" << endl;
    
}


