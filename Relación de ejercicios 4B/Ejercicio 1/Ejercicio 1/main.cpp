//
//  Ejercicio 1
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int kilos = 1;
    double libras = 3.0959752321981;
    const double VALOR = 3.0959752321981;
    
    for (int i = 1; i <= 50; i ++){
        if (kilos % 5 == 0) {
            cout << kilos << " kilos son " << libras << " libras" << endl;
        }
        kilos ++;
        libras = kilos * VALOR;
    }
}
