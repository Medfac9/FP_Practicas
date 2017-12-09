//
//  Ejercicio 1
//  Relacion ejercicios 7
//
//  Created by Rafael Medina Facal on 8/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

//a)
class Fecha{
    public:
        int dia, mes, anio;
    
        int pasarADias(int dia, int mes, int anio);
};

//b)
class Hora{
    public:
        int hora, min, segundos;
    
        int pasarASegundos(int hora, int min, int segundos);
};

//c)
class Recta{
    public:
        double inicio, final;
    
        double longitud(double inicio, double final);
};

//d)
class Persona{
    public:
        int edad;
        double peso, altura;
        string nombre;
    
};

//e)
class Vehiculo{
public:
    double peso, altura;
    string marca;
    
};

//f)
class Intervalo{
public:
    double inicio, final;
    
    double amplitudIntervalo(double incicio, double final);
};

int main() {
    
}
