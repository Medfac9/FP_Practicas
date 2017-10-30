//
//  Ejercicio 6
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    const int MIN = 1,MAX = 100;
    const int NUM_VALORES = MAX-MIN + 1; // rango
    int incognita; // numero generado
    int n; // numero introducido
    bool repetir = true;
    time_t tiempo;
    // Inicializacion de la secuencia:
    srand(time(&tiempo));
    // Generacion de un numero aleatorio incognita: // MIN <= incognita <= MAX
    incognita = (rand() % NUM_VALORES) + MIN;
    
    while (repetir) {
        cout <<"Bienvenido, vamos a jugar. Debe adivinar un numero del 1 al 100. Si desea salir pulse -1";

        cout << "Introduzca un numero: " << endl;
        cin >> n;
    
        while (incognita != n && n != -1){
            if (n > incognita){
                cout << "El numero introducido es mayor que el numero buscado" << endl;
            }
            else{
                cout << "El numero introducido es menor que el numero buscado" << endl;
            }
            if(n != incognita){
                cout << "Introduzca otro numero: " << endl;
                cin >> n;
            }
        }
        if (n == -1){
            cout << "Hasta luego, vuelve pronto" << endl;
        }
        else{
            cout << "Enhorabuena, encontraste el numero" << endl;
            cout << "Si quieres volver a jugar pulse 0, para salir pulse -1" << endl;
            cin >> n;
            if(n == 0){
                incognita = (rand() % NUM_VALORES) + MIN;
            }
            else{
                repetir = false;
            }
        }
    }
}




