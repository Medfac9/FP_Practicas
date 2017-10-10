//
//  Ejercicio 10
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int x0 = 0;
    int y0 = 0;
    double distancia = 0;
    
    cout << "Introduzca el punto X: " << endl;
    cin >> x0;
    cout << "Introduzca el punto Y: " << endl;
    cin >> y0;
    
    distancia = (abs(2 * x0 + (-7) * y0 + (-10))) / (sqrt(4 + 49));
    
    cout << "La distancia es: " << distancia << endl;
}
