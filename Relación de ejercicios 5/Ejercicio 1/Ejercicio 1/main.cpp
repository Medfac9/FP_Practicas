//
//  Ejercicio 1
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 4/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

//a)
bool consecutivas (char primera, char segunda){
    bool consecutivas = false;
    
    if(primera + 1 == segunda){
        consecutivas = true;
    }
    else{
        consecutivas = false;
    }
    
    return consecutivas;
}

//b)
bool sonIguales(double n1, double n2, double valor){
    bool sonIguales = true;
    double diferencia = n1 - n2;
    
    if(diferencia < valor){
        sonIguales = true;
    }
    else{
        sonIguales = false;
    }
    
    return sonIguales;
}

//c)
int digito(int n){
    int n_digitos = 0;
    
    while(n > 0){
        n = n / 10;
        n_digitos ++;
    }
    
    return n_digitos;
}

int main() {
    char primera, segunda;
    bool seguidas = false;
    double n1, n2, valor;
    bool iguales = false;
    int cantidad, n_digitos;
    
    do {
        cout << "Introduzca una letra: " << endl;
        cin >> primera;
    } while ((primera < 'a' || primera > 'z') && (primera < 'A' || primera > 'Z'));
    
    do {
        cout << "Introduzca otra letra: " << endl;
        cin >> segunda;
    } while ((segunda < 'a' || segunda > 'z') && (segunda < 'A' || segunda > 'Z'));
    
    seguidas = consecutivas(primera, segunda);
    
    if(seguidas){
        cout << "Las letras son consecutivas" << endl;
    }
    else{
        cout << "Las letras no son consecutivas" << endl;
    }
    
    cout << "Introduzca un numero: " << endl;
    cin >> n1;
    cout << "Introduzca otro numero: " << endl;
    cin >> n2;
    cout << "Introduzca un valor: " << endl;
    cin >> valor;
    
    iguales = sonIguales(n1, n2, valor);
    
    if(iguales){
        cout << "Son iguales" << endl;
    }
    else{
        cout << "No son iguales" << endl;
    }
    
    cout << "Introduzca un numero: " << endl;
    cin >> cantidad;
    
    n_digitos = digito(cantidad);
    
    cout << "Hay " << n_digitos << " digitos" << endl;
    
}

