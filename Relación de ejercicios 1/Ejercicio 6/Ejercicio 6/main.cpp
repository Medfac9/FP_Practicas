//
//  Ejercicio 6
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    double media_aritmetica = 0;
    double media_armonica = 0;
    double n1 = 0;
    double n2 = 0;
    
    cout << "Introduzca el primer numero: " << endl;
    cin >> n1;
    cout << "Introduzca el segundo numero: " << endl;
    cin >> n2;
    
    media_aritmetica = (n1 + n2) / 2;
    
    media_armonica = 2 / ((1 / n1) + (1 / n2));
    
    cout << "La media aritmetica es " << media_aritmetica << " y la media armonica es " << media_armonica << endl;
    
}


