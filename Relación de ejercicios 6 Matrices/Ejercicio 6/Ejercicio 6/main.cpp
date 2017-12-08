//
//  Ejercicio 6
//  Relacion ejercicios 6 Matrices
//
//  Created by Rafael Medina Facal on 7/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int MAX = 10;
    int cerca = -1;
    int cercaI = 0;
    int cercaJ = 0;
    string cerca1, cerca2;
    int lejos = -1;
    int lejosI = 0;
    int lejosJ = 0;
    string lejos1, lejos2;
    double valor = 0;
    double suma = 0;
    double promedio = 0;
    int cont = 0;
    double valorMejorCiudad = 0;
    double sumaMejorCiudad = 0;
    double promedioMejorCiudad = 0;
    double promedioTotalMejorCiudad = 0;
    int mejorI = 0;
    string mejor;
    double valorPeorCiudad = 0;
    double sumaPeorCiudad = 0;
    double promedioPeorCiudad = 0;
    double promedioTotalPeorCiudad = 0;
    int peorI = 0;
    string peor;
    
    int D[MAX][MAX] = {
        {0,640,400,800,590,1100,700,950,960,1015},
        {640,0,380,306,396,606,603,612,860,825},
        {400,380,0,537,254,837,270,611,527,675},
        {800,306,537,0,320,306,623,311,856,739},
        {590,396,254,320,0,617,299,357,532,428},
        {1100,606,837,306,617,0,930,365,1015,901},
        {700,603,270,623,299,930,0,651,263,520},
        {950,612,611,311,357,365,651,0,659,527},
        {960,860,527,856,532,1015,263,659,0,252},
        {1015,825,675,739,428,901,520,527,252,0}};
    
    string c[MAX] = {"Coruna", "Bilbao", "Zamora", "Zaragoza", "Madrid", "Barcelona", "Caceres", "Valencia", "Sevilla", "Granada"};
    
    //a)
    for (int i = 0; i < MAX; i ++) {
        for (int j = 0; j < MAX; j ++) {
            if ((D[i][j] <= cerca || cerca == -1) && D[i][j] != 0) {
                cerca = D[i][j];
                cercaI = i;
                cercaJ = j;
            }
        }
    }
    
    for (int i = 0; i < MAX; i ++) {
        if (i == cercaI) {
            cerca1 = c[i];
        }
        if (i == cercaJ){
            cerca2 = c[i];
        }
    }
    
    //b)
    
    for (int i = 0; i < MAX; i ++) {
        for (int j = 0; j < MAX; j ++) {
            if ((D[i][j] >= lejos || lejos == -1) && D[i][j] != 0) {
                lejos = D[i][j];
                lejosI = i;
                lejosJ = j;
            }
        }
    }
    
    for (int i = 0; i < MAX; i ++) {
        if (i == lejosI) {
            lejos1 = c[i];
        }
        if (i == lejosJ){
            lejos2 = c[i];
        }
    }
    
    //c)
    
    for (int i = 0; i < MAX; i ++) {
        for (int j = 0; j < MAX; j ++) {
            if (D[i][j] != 0) {
                valor = D[i][j];
            }
            else{
                break;
            }
            suma = suma + valor;
            cont ++;
        }
    }
    
    promedio = suma / (cont - MAX);
    
    //d)
    
    for (int i = 0; i < MAX; i ++) {
        for (int j = 0; j < MAX; j ++) {
            if (D[i][j] != 0) {
                valorMejorCiudad = D[i][j];
                sumaMejorCiudad = sumaMejorCiudad + valorMejorCiudad;
            }
        }
        promedioMejorCiudad = sumaMejorCiudad / (MAX - 1);
        if (promedioMejorCiudad <= promedioTotalMejorCiudad || promedioTotalMejorCiudad == 0) {
            promedioTotalMejorCiudad = promedioMejorCiudad;
            mejorI = i;
        }
        sumaMejorCiudad = 0;
    }
    
    for (int i = 0; i < MAX; i ++) {
        if (i == mejorI) {
            mejor = c[i];
        }
    }
    
    //e)
    
    for (int i = 0; i < MAX; i ++) {
        for (int j = 0; j < MAX; j ++) {
            if (D[i][j] != 0) {
                valorPeorCiudad = D[i][j];
                sumaPeorCiudad = sumaPeorCiudad + valorPeorCiudad;
                cout << sumaPeorCiudad << endl;
            }
        }
        promedioPeorCiudad = sumaPeorCiudad / (MAX - 1);
        if (promedioPeorCiudad >= promedioTotalPeorCiudad || promedioTotalPeorCiudad == 0) {
            promedioTotalPeorCiudad = promedioPeorCiudad;
            peorI = i;
        }
        sumaPeorCiudad = 0;
    }
    
    for (int i = 0; i < MAX; i ++) {
        if (i == peorI) {
            peor = c[i];
        }
    }
    
    cout << " Las ciudades que se encuentran mas cercanas son: " << cerca1 << " y " << cerca2 << endl;
    cout << " Las ciudades que se encuentran mas lejanas son: " << lejos1 << " y " << lejos2 << endl;
    cout << " La longitud promedio de las carreteras es: " << promedio << endl;
    cout << " La ciudad mejor conectada es: " << mejor << endl;
    cout << " La ciudad peor conectada es : " << peor << endl;
    
}

