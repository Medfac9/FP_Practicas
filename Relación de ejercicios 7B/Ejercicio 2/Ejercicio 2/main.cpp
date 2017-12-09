//
//  Ejercicio 2
//  Relacion ejercicios 7B
//
//  Created by Rafael Medina Facal on 9/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

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
    Pantalla extraeImagen(int x, int y, int longitud){
        Pantalla p(20,20);
        
        for (int i = 0; i < TAMANIO; i ++) {
            for (int j = 0; j < TAMANIO; j ++) {
                if (i >= x && i <= x + longitud && j >= y && j <= y + longitud) {
                    p.tabla[i][j] = tabla[i][j];
                }
            }
        }
        
        return p;
    }
    
    //b)
    Pantalla fusionar(Pantalla otra){
        Pantalla p(20,20);
        
        for (int i = 0; i < TAMANIO; i ++) {
            for (int j = 0; j < TAMANIO; j ++) {
                if (tabla[i][j] != false) {
                    p.tabla[i][j] = tabla[i][j];
                }
                if (otra.tabla[i][j] != false) {
                    p.tabla[i][j] = otra.tabla[i][j];
                }
            }
        }
        
        return p;
    }
    
};

int main()
{
    Pantalla a(20,20);
    Pantalla b(20,20);
    
    for(int i=0; i < 10; i++)
        a.Encender(i,i);
    
    b.Encender(15,12);
    b.Encender(9,12);
    b.Encender(5,12);
    
    cout << a.toString();
    cout << "***************************" << endl;
    cout << b.toString();
    cout << "***************************" << endl;
    cout << a.extraeImagen(5, 5,5).toString();
    cout << "***************************" << endl;
    cout << a.fusionar(b).toString();
    
}
