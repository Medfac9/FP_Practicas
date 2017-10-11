//
//  Ejercicio 6
//  Relacion ejercicios 3
//
//  Created by Rafael Medina Facal on 11/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    float nota_A, nota_B, nota_C;
    char mejor_nota;
    
    cout << "Introduzca una nota: " << endl;
    cin >> nota_A;
    cout << "Introduzca otra nota: " << endl;
    cin >> nota_B;
    cout << "Introduzca otra nota: " << endl;
    cin >> nota_C;
    
    if (nota_A > nota_B && nota_A > nota_C){
        mejor_nota = 'A';
    }
    else if (nota_B > nota_C){
        mejor_nota = 'B';
    }
    else{
        mejor_nota = 'C';
    }
    
    cout << "La mejor nota es: " << mejor_nota << endl;
}



