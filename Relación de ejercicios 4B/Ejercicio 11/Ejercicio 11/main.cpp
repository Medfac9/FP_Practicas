//
//  Ejercicio 11
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 1/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int FIN = 0;
    int codigo, nota1, nota2, nota3, nota4, nota5, maxima_nota_codigo = 0;
    string nombre, maxima_nota_nombre;
    double resultado, resultado_maximo = 0;
    
    cout << "Introduce un codigo: " << endl;
    cin >> codigo;
    cout << "Introduce el nombre del alumno: " << endl;
    cin >> nombre;
    cout << "Introduce la primera nota: " << endl;
    cin >> nota1;
    cout << "Introduce la segunda nota: " << endl;
    cin >> nota2;
    cout << "Introduce la tercera nota: " << endl;
    cin >> nota3;
    cout << "Introduce la cuarta nota: " << endl;
    cin >> nota4;
    cout << "Introduce la quinta nota: " << endl;
    cin >> nota5;
    
    while (codigo != FIN) {
        resultado = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
        if(resultado > resultado_maximo){
            resultado_maximo = resultado;
            maxima_nota_codigo = codigo;
            maxima_nota_nombre = nombre;
        }
        
        cout << "Introduce un codigo: " << endl;
        cin >> codigo;
        
        if(codigo != FIN){
            cout << "Introduce el nombre del alumno: " << endl;
            cin >> nombre;
            cout << "Introduce la primera nota: " << endl;
            cin >> nota1;
            cout << "Introduce la segunda nota: " << endl;
            cin >> nota2;
            cout << "Introduce la tercera nota: " << endl;
            cin >> nota3;
            cout << "Introduce la cuarta nota: " << endl;
            cin >> nota4;
            cout << "Introduce la quinta nota: " << endl;
            cin >> nota5;
        }
    }
    
    cout << "El alumno " << maxima_nota_nombre << " con el codigo " << maxima_nota_codigo << " tiene la mejor nota" << endl;
}



