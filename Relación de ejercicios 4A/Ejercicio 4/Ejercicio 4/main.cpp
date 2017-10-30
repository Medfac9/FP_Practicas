//
//  Ejercicio 4
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    double capital_inicial, interes, capital_actual;
    int cont = 0;
    
    cout << "Introduzca el capital fijo: " << endl;
    cin >> capital_inicial;
    cout << "Introduzca el interes: " << endl;
    cin >> interes;
    
    capital_actual = capital_inicial;
    
    do{
        capital_actual = capital_actual * interes + capital_actual;
        cont ++;
        cout << "Capital con " << cont << " años: " << capital_actual << endl;
    }while (capital_actual < capital_inicial * 2);
    
    cout << "Han de pasar " << cont << " para doblar el capital actual" << endl;
}


