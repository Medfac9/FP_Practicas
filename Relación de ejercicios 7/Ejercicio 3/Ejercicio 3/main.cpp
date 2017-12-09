//
//  Ejercicio 3
//  Relacion ejercicios 7
//
//  Created by Rafael Medina Facal on 8/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

//a)
class Cuadrado{
public:
    int x, y, longitud;
    
    Cuadrado(int x, int y, int longitud);
    bool contienePunto(int a, int b){
        bool contienePunto = false;
        
        if((a >= x) && (a <= x + longitud) && (b >= y) && (b <= y + longitud)){
            contienePunto = true;
        }
        
        return contienePunto;
    }
};

int main() {
    //a)
    Cuadrado c1(0,3,3);
    Cuadrado c2(3,3,3);
    //b)
    Cuadrado c3((c1.x + c2.x) / 2, (c1.y + c2.y) / 2, (c1.longitud + c2.longitud) / 2);
    
    //c)
    bool contiene = false;
    
    if((c2.x >= c1.x) && (c2.x + c2.longitud <= c1.x +c1.longitud) && (c2.y >= c2.y) && (c2.y + c2.longitud <= c1.y + c1.longitud)){
        contiene = true;
    }
    
    //d)
    c1.contienePunto(1, 1);
    
}

