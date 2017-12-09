//
//  Ejercicio 2
//  Relacion ejercicios 7
//
//  Created by Rafael Medina Facal on 8/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

//a)
class Imagen{
public:
    double ancho, altura, pixeles;
    
    int calidad(double ancho, double altura);
};

//b)
class Pantalla{
public:
    double pulgadas;
    
    double calcularAltura(double pulgadas);
    double calcularAnchura(double pulgadas);
};

//c)
class Coche{
public:
    double altura, peso;
    string marca;
    
    string getMarca(string marca);
};

//d)
class ConjuntoObjetos{
public:
    int cantidad, tipo;
    double peso, altura;
    
    
};

int main() {
    
}
