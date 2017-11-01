//
//  Ejercicio 2
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    double n;
    double resultado = 0;
    
    do{
        cout << "\nIntroduzca un valor entero y positivo: ";
        cin >> n;
    }while (n <= 0);
    
    for (float i = 1; i <= n; i ++ ) {
        resultado = resultado + (1 / i);
    }
    
    cout << "El resultado es: " << resultado << endl;
}

