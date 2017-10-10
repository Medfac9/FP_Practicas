//
//  Ejercicio 4
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float nota_inicial = 0.0;
    float nota_final = 0.0;
    const float INCREMENTO = 1.05;
    
    cout << "Introduzca una nota inicial" << endl;
    cin >> nota_inicial;
    
    //a)
    cout << "La nota final es " << nota_inicial * INCREMENTO << endl;
    
    //b)
    nota_final = nota_inicial * INCREMENTO;
    cout << "La nota final es " << nota_final << endl;
    
    //c)
    nota_inicial = nota_inicial * INCREMENTO;
    cout << "La nota final es " << nota_inicial << endl;
    
}



