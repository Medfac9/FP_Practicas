//
//  Ejercicio 6
//  Relacion ejercicios 4B
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    
    char min_izda, max_izda, min_dcha, max_dcha;
    
    cout << "Introduzca el minimo del primer conjunto: " << endl;
    cin >> min_izda;
    cout << "Introduzca el maximo del primer conjunto: " << endl;
    cin >> max_izda;
    cout << "Introduzca el minimo del segundo conjunto: " << endl;
    cin >> min_dcha;
    cout << "Introduzca el maximo del segundo conjunto: " << endl;
    cin >> max_dcha;
    
    for (char i = min_izda; i <= max_izda; i ++) {
        for (char j = min_dcha; j <= max_dcha; j ++) {
            cout << i << j << " ";
        }
        cout << endl;
    }
    
}



