//
//  Ejercicio 4
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int inicio = 1;
    int j = 1;
    int n = 6;
    for (int i = 1; i <= 6; i ++){
        for (j; j <= n; j ++) {
            cout << j << " " ;
        }
        inicio ++;
        j = inicio;
        n ++;
        cout << endl;
    }
}

