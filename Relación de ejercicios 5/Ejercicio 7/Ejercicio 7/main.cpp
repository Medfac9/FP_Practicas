//
//  Ejercicio 7
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 5/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include<stdlib.h>

using namespace std;

int nroAlAzar (int limite1, int limite2){
    int n_aleatorio;
    
    n_aleatorio = limite1 + rand()%((limite2 + 1) - limite1);
    
    return n_aleatorio;
}

int main() {
    int limite1, limite2, n_aleatorio;
    int cuatroRangos;
    int contA = 0, contB = 0, contC = 0, contD = 0;
    double porcentajeA = 0, porcentajeB = 0, porcentajeC = 0, porcentajeD = 0;
    
    cout << "Introduzca el primer limite: " << endl;
    cin >> limite1;
    cout << "Introduzca el segundo limite: " << endl;
    cin >> limite2;
    
    cuatroRangos = limite2 / 4;
    
    for (int i = 0; i < 1000; i ++) {
        n_aleatorio = nroAlAzar(limite1, limite2);
        
        if (n_aleatorio <= cuatroRangos){
            contA ++;
        }
        else if(n_aleatorio <= cuatroRangos * 2){
            contB ++;
        }
        else if (n_aleatorio <= cuatroRangos * 3){
            contC ++;
        }
        else{
            contD ++;
        }
    }
    
    porcentajeA = (contA * 100.0) / 1000.0;
    porcentajeB = (contB * 100.0) / 1000.0;
    porcentajeC = (contC * 100.0) / 1000.0;
    porcentajeD = (contD * 100.0) / 1000.0;
    
    cout << "El porcentaje en el primer rango es: " << porcentajeA << endl;
    cout << "El porcentaje en el segundo rango es: " << porcentajeB << endl;
    cout << "El porcentaje en el terecer rango es: " << porcentajeC << endl;
    cout << "El porcentaje en el cuarto rango es: " << porcentajeD << endl;
}

