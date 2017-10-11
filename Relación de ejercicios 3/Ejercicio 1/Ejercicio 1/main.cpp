//
//  Ejercicio 1
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
    string palabra1, palabra2;
    float angulo1, angulo2, angulo3;
    
    //a)
    cout << "Introduzca una letra: " << endl;
    cin >> letra;
    
    if (letra >= 'a' && letra <= 'z'){
        cout << "La letra es minuscula" << endl;
    }
    else{
        cout << "La letra no es minuscula" << endl;
    }
    
    //b)
    cout << "Introduzca un numero: " << endl;
    cin >> numero;
    
    if (numero > 0 && numero % 3 == 0){
        cout << "Ok" << endl;
    }
    else{
        cout << "No ok" << endl;
    }
    
    //c)
    cout << "Introduzca una palabra: " << endl;
    cin >> palabra1;
    cout << "Introduzca otra palabra: " << endl;
    cin >> palabra2;
    
    if (palabra1.substr() < palabra2.substr()){
        cout << "La palabra " << palabra1 << " aparece antes en el diccionario que " << palabra2 << endl;
    }
    else{
        cout << "La palabra " << palabra2 << " aparece antes en el diccionario que " << palabra1 << endl;
    }
    
    //d)
    cout << "Introduzca el primer angulo: " << endl;
    cin >> angulo1;
    cout << "Introduzca el segundo angulo: " << endl;
    cin >> angulo2;
    cout << "Introduzca el tercer angulo: " << endl;
    cin >> angulo3;
    
    if (angulo1 < 180 && angulo2 < 180 && angulo3 < 180){
        cout << "El triangulo es valido" << endl;
    }
    else{
       cout << "El triangulo no es valido" << endl;
    }
}

