//
//  Ejercicio 5
//  Relacion ejercicios 2
//
//  Created by Rafael Medina Facal on 10/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    //a)
    int chico, chico1, chico2;
    chico1 = 1234567;
    chico2 = 1234567;
    chico = chico1 * chico2;
    //Desbordamiento
    
    //b)
    long grande;
    int chico1, chico2;
    chico1 = 1234567;
    chico2 = 1234567;
    grande = chico1 * chico2;
    //1234567*1234567
    
    //c)
    double resultado, real1, real2;
    real1 = 123.1;
    real2 = 124.2;
    resultado = real1 * real2;
    //123.1*124.2
    
    //d)
    double resultado, real1, real2;
    real1 = 123456789.1;
    real2 = 123456789.2;
    resultado = real1 * real2;
    //Desborda
    
    //e)
    double real, otro_real;
    real = 2e34;
    otro_real = real + 1;
    otro_real = otro_real - real;
    //Precision
    
    //f)
    double real, otro_real;
    real = 1e+300;
    otro_real = 1e+200;
    otro_real = otro_real * real;
    //Desborda
    
    //g)
    float chico;
    double grande;
    grande = 2e+150;
    chico = grande;
    //Precision
}

