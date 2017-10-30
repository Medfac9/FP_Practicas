//
//  Ejercicio 5
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    const int TERMINADOR = -1;
    int cant, valor;
    double suma, promedio;
    int cant_par, cant_impar;
    double suma_par, suma_impar, resta, promedio_par, promedio_impar;
    int maximo, minimo;
    int valor_anterior;
    bool crece = false;
    int mayor_secuencia, mayor_secuencia_total;
    
    cant = 0;
    suma = 0;
    cant_par = 0;
    suma_par = 0;
    cant_impar = 0;
    suma_impar = 0;
    maximo = -1;
    minimo = -1;
    valor_anterior = 0;
    mayor_secuencia = 0;
    mayor_secuencia_total = 0;
    
    // filtro para enteros positivos o terminador
    do{
        cout << "Ingrese un numero (-1 para terminar) ";
        cin >> valor;
    }while((valor < 0) && (valor != TERMINADOR));
    
    // si el valor es valido
    while (valor != TERMINADOR){
        // lo proceso
        suma = suma + valor;
        cant = cant + 1;
        
        if(valor % 2 == 0){
            suma_par = suma_par + valor;
            cant_par = cant_par + 1;
        }
        else{
            suma_impar = suma_impar + valor;
            cant_impar = cant_impar + 1;
        }
        
        if (maximo < valor || maximo == -1)
            maximo = valor;
        if (minimo > valor || minimo == -1)
            minimo = valor;
        
        if (valor_anterior < valor){
            crece = true;
            mayor_secuencia ++;
            if(mayor_secuencia_total < mayor_secuencia){
                mayor_secuencia_total = mayor_secuencia;
            }
        }
        else{
            crece = false;
            mayor_secuencia = 0;
        }
        
        valor_anterior = valor;
        
        // leo el siguiente valor
        do{
            cout << "Ingrese un numero (-1 para terminar) ";
            cin >> valor;
        }while((valor < 0) && (valor != TERMINADOR));
        
    }
    
    if (cant > 0){
        promedio = suma / cant;
        promedio_par = suma_par /cant_par;
        promedio_impar = suma_impar /cant_impar;
        
        resta = promedio_impar - promedio_par;
        
        cout << "\nLeidos " << cant << " valores, con promedio " << promedio << endl;
        
        //a)
        cout << "\nDiferencia entre el promedio par e impar " << resta << endl;
        
        //b)
        cout << "\nEl valor máximo es " << maximo << " y el minimo " << minimo << endl;
        
        //c)
        cout << "\nLa secuencia es creciente " << crece << endl;
        
        //d)
        cout << "\nLa mayor secuencia creciente es de tamaño " << mayor_secuencia_total << endl;
        
    }
    else
        cout << "No se han leido valores ";
    
    return(0);
}



