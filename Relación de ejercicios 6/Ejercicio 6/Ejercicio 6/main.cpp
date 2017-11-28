//
//  Ejercicio 6
//  Relacion ejercicios 6
//
//  Created by Rafael Medina Facal on 28/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 1000;
    char cifrado[MAX_SIZE];
    char descifrado[MAX_SIZE];
    int total_utilizados = 0;
    int total_utilizados_des = 0;
    int total_letras = 0;
    char letra, anterior = '@';
    
    cout << "Ingrese el mensaje cifrado. # para terminar: ";
    letra = cin.get();
    
    while (letra != '#'){
        cifrado[total_utilizados] = letra;
        total_utilizados ++;
        total_letras ++;
        
        if (letra != ' ' && (anterior == '@' || anterior == ' ')) {
            descifrado[total_utilizados_des] = letra;
            total_utilizados_des ++;
        }
        else if (letra == ' ') {
            total_letras --;
            if (anterior != '@' && anterior != ' ' && total_letras != 1) {
                descifrado[total_utilizados_des] = anterior;
                total_utilizados_des ++;
            }
            total_letras = 0;
        }
        
        anterior = letra;
        
        letra = cin.get();
    }
    
    cout << "Vector cifrado  [" ;
    for (int i = 0; i < total_utilizados; i ++) {
        cout << cifrado[i];
    }
    cout << "]" << endl;
    
    
    
    cout << "Vector descifrado  [" ;
    for (int i = 0; i < total_utilizados; i ++) {
        cout << descifrado[i];
    }
    cout << "]" << endl;
}
