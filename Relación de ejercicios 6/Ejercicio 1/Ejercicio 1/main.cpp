//
//  Ejercicio 1
//  Relacion ejercicios 6
//
//  Created by Rafael Medina Facal on 27/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <cctype>

using namespace std;

const int MAX_SIZE = 100;

int main() {
    char frase[MAX_SIZE];
    char aux1[MAX_SIZE];
    char aux2[MAX_SIZE];
    int total_u = 0;
    char letra;
    int posiciones = 0;
    int cont = 0;
    int eliminar = 0 ;
    bool palindromo = false;
    
    cout << "Ingrese la frase. @ para terminar: ";
    letra = cin.get();
    
    while (letra != '@'){
        frase[total_u] = letra;
        total_u ++;
        letra = cin.get();
    }
    
    for(int i = 0; i < total_u; i ++){
        cout << frase[i];
    }
    cout << endl;
    
    //a)
    cout << "Se convierte a mayuscula" << endl;
    for(int i = 0; i < total_u; i ++){
        aux1[i] = toupper(frase[i]);
        cout << aux1[i];
    }
    
    cout << endl;
    
    //b)
    cout << "Posiciones a rotar hacia la izquierda: ";
    cin >> posiciones;

    if (posiciones >= total_u) {
        cout << "No se puede rotar esa posicion ya que no existe" << endl;
    }
    else{
        for(int i = 0; i < posiciones; i ++){
            aux1[total_u - posiciones + i] = frase[i];
            cont ++;
        }
        for(int i = 0; i < total_u - posiciones; i ++){
            aux1[i] = frase[i + cont];
        }
        for(int i = 0; i < total_u; i ++){
            cout << aux1[i];
        }
    }

    cout << endl;

    //c)
    cout << "Posiciones a rotar hacia la derecha: ";
    cin >> posiciones;
    cont = 0;

    if (posiciones >= total_u) {
        cout << "No se puede rotar esa posicion ya que no existe" << endl;
    }
    else{
        for(int i = posiciones; i < total_u; i ++){
            aux1[i] = frase[i - posiciones];
            cont ++;
        }
        for(int i = 0; i < total_u - cont; i ++){
            aux1[i] = frase[i + cont];
        }
        for(int i = 0; i < total_u; i ++){
            cout << aux1[i];
        }
    }

    cout << endl;
 
    //d)
    cout << "Eliminar la posicion: ";
    cin >> eliminar;
    
    if (eliminar >= total_u) {
        cout << "No se puede eliminar esa posicion ya que no existe" << endl;
    }
    else{
        for(int i = 0; i < eliminar; i ++){
            aux2[i] = frase[i];
        }
        for(int i = eliminar + 1; i < total_u; i ++){
            aux2[i - 1] = frase[i];
        }
        for(int i = 0; i < total_u; i ++){
            cout << aux2[i];
        }
    }
    
    cout << endl;
    
    //e)
    cout << "Se añade $ en la quinta posicion" << endl;
    
    if (total_u < 5) {
        cout << "No se puede añadir $ en la quinta posicion";
    }
    else{
        for(int i = 0; i < 5; i ++){
            aux2[i] = frase[i];
        }
        aux2[5] = '$';
        for(int i = 6; i < total_u + 1; i ++){
            aux2[i] = frase[i - 1];
        }
        for(int i = 0; i < total_u + 1; i ++){
            cout << aux2[i];
        }
    }
    
    cout << endl;
    
    //f)
    cout << "Comprobacion si el vector es palindromo" << endl;
    
    cont = total_u - 1;
    for(int i = 0; i < total_u / 2; i ++){
        if (frase[i] == frase[cont]) {
            palindromo = true;
        }
        else{
            palindromo = false;
            break;
        }
        cont --;
    }
    cout << "¿Es palindromo? " << palindromo << endl;
    
    //g)
    cout << "Invertir el vector" << endl;
    
    for(int i = total_u - 1; i >= 0; i --){
        cout << frase[i];
    }
    
     cout << endl;
    
    return(0);
}

