//
//  Ejercicio 8
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 1/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    
    int x = 0;
    int y = -10;
    double resultado;
    
    for (int i = 0; i < 6; i ++) {
        for (int j = 0; j < 4; j ++) {
            resultado = sqrt(x) / (y * y - 1);
            if (x != 10 || y != -4) {
                cout << resultado << ", ";
            }
            else{
                cout << resultado << endl;
            }
            
            y = y + 2;
        }
        y = - 10;
        x = x + 2;
    }
}
