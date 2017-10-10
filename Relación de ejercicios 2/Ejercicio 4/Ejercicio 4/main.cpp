//
//  Ejercicio 4
//  Relacion ejercicios 2
//
//  Created by Rafael Medina Facal on 10/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    int numero, numero2;
    bool par, divisible, minuscula, mayuscula, vocal, bisiesto;
    char letra;
    
    //Par
    cout << "Introduzca un número: " << endl;
    cin >> numero;
    
    if (numero % 2 == 0){
        par = true;
    }
    else{
        par = false;
    }
    
    cout << "El numero " << numero << " es par: " << par << endl;
    
    //Divisible
    cout << "Introduzca un número: " << endl;
    cin >> numero;
    cout << "Introduzca otro número: " << endl;
    cin >> numero2;
    
    if (numero % numero2 == 0){
        divisible = true;
    }
    else if(numero2 % numero == 0){
        divisible = true;
    }
    else {
        divisible = false;
    }
    
    cout << "El numero " << numero << " y " << numero2 << " son divisibles entre ellos mismos: " << divisible << endl;
    
    //Minuscula
    cout << "Introduzca una letra: " << endl;
    cin >> letra;
    
    if (letra >= 'a' && letra <= 'z'){
        minuscula = true;
    }
    else {
        minuscula = false;
    }
    
    cout << "La letra " << letra << " es minuscula: " << minuscula << endl;
    
    //Mayuscula
    cout << "Introduzca una letra: " << endl;
    cin >> letra;
    
    if (letra >= 'a' && letra <= 'z'){
        mayuscula = false;
    }
    else {
        mayuscula = true;
    }
    
    cout << "La letra " << letra << " es mayuscula: " << mayuscula << endl;
    
    //Vocal
    cout << "Introduzca una letra: " << endl;
    cin >> letra;
    
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U'){
        vocal = true;
    }
    else {
        vocal = false;
    }
    
    cout << "La letra " << letra << " es una vocal: " << mayuscula << endl;
    
    //Bisiesto
    cout << "Introduzca un año: " << endl;
    cin >> numero;
    
    if ((numero % 4 == 0 && numero % 100 != 0) || numero % 400 == 0){
        bisiesto = true;
    }
    else {
        bisiesto = false;
    }
    
    cout << "El año " << numero << " es un año bisiesto: " << bisiesto << endl;
}
