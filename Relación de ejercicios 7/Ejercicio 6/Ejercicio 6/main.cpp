//
//  Ejercicio 6
//  Relacion ejercicios 7
//
//  Created by Rafael Medina Facal on 8/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include "math.h"

using namespace std;

class Pantalla{
private:
    static const int TAMANIO = 20;
    bool tabla[TAMANIO][TAMANIO];
    int util_f;
    int util_c;
    
    bool posValida(int x, int y) {
        bool x_ok = (x >= 0) && (x < util_f);
        bool y_ok = (y >= 0) && (y < util_c);
        return(x_ok && y_ok);
    }
    
public:
    Pantalla(int f, int c){
        util_f = f;
        util_c = c;
        Limpiar();
    }
    
    int GetFilas() {
        return(util_f);
    }
    
    int GetCols() {
        return(util_c);
    }
    
    bool Libre(int x, int y) {
        if (posValida(x,y))
            return(tabla[x][y]);
        else
            return false;
    }
    
    void Encender(int x, int y) {
        if (posValida(x,y))
            tabla[x][y] = true;
    }
    
    void Apagar(int x, int y) {
        if (posValida(x,y))
            tabla[x][y] = false;
    }
    
    void Limpiar() {
        int i,j;
        
        for(i=0; i < util_f; i++)
            for(j=0; j < util_c; j++)
                tabla[i][j] = false;
    }
    
    string toString(){
        // devuelve la pantalla como un string
        // los 0's como blancos y los 1's como asteriscos
        int i,j;
        string s = "\n";
        char blanco = ' ';
        char otro = '*';
        char actual;
        for(i=0; i < util_f; i++){
            for(j=0; j < util_c; j++){
                actual = blanco;
                if(tabla[i][j])
                    actual = otro;
                s = s + actual;
            }
            s = s + "\n";
        }
        return(s);
    }
    
    //a)
    void dibujaCuadrado(int x, int y, int longitud){
        bool activo = false;
        bool activoVerticalI = false;
        bool activoVerticalD = false;
        int distancia = longitud;
        int distanciaVertical = longitud;
        
        for (int i = 0; i < TAMANIO; i ++) {
            for (int j = 0; j < TAMANIO; j ++) {
                //Horizontal arriba, vertical izquierda y vertical derecha
                if (i == x && j == y) {
                    tabla[i][j] = true;
                    activo = true;
                    activoVerticalI = true;
                    activoVerticalD = true;
                }
                
                //Horizontal abajo
                else if (i == x + longitud - 1 && j == y){
                    tabla[i][j] = true;
                    activo = true;
                }
                
                //Activar vertical izquierda
                if (activoVerticalI && distanciaVertical != 0 && i <= x + longitud -1 && j == y) {
                    tabla[i][j] = true;
                    distanciaVertical --;
                }
                else{
                    distanciaVertical = longitud;
                }
                
                //Activar vertical derecha
                if (activoVerticalD && distanciaVertical != 0 && i <= x + longitud - 1 && j == y + longitud - 1) {
                    tabla[i][j] = true;
                    distanciaVertical --;
                }
                else{
                    distanciaVertical = longitud;
                }
                
                //Activar horizontal
                if (activo && distancia != 0) {
                    tabla[i][j] = true;
                    distancia --;
                }
                else{
                    activo = false;
                    distancia = longitud;
                }
            }
        }
    }
    
    //b)
    void dibujaCirculo(int x, int y, int r){
        double distancia = 0;
        for (int i = 0; i < TAMANIO; i ++) {
            for (int j = 0; j < TAMANIO; j ++) {
                
                distancia = sqrt(((i - x) * (i - x)) + ((j - y) * (j - y)));
                
                if(distancia <= r){
                    tabla[i][j] = true;
                }
            }
        }
    }
    
};

int main()
{
    //c)
    Pantalla cuadrado(20,20);
    Pantalla circulo(20,20);
    
    //Cuadrado grande
    cuadrado.dibujaCuadrado(0, 0, 16);
    //Cuadrado arriba izquierda
    cuadrado.dibujaCuadrado(2, 2, 6);
    //Cuadrado abajo derecha
    cuadrado.dibujaCuadrado(8, 8, 6);
    cout << cuadrado.toString();
    
    cout << "***************************************************" << endl;
    
    //Circulo arriba izquierda
    circulo.dibujaCirculo(3, 3, 3);
    //Circulo arriba derecha
    circulo.dibujaCirculo(3, 11, 3);
    //Circulo abajo izquierda
    circulo.dibujaCirculo(11, 3, 3);
    //Circulo abajo derecha
    circulo.dibujaCirculo(11, 11, 3);
    cout << circulo.toString();
    
}

