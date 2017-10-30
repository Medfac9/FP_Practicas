//
//  Ejercicio 7
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int identificacor;
    char codigo;
    int unidades;
    int sucursal1 = 0, sucursal2 = 0, sucursal3 = 0;
    
    cout << "Introduzca la sucursal" << endl;
    cin >> identificacor;
    cout << "Introduzca el producto" << endl;
    cin >> codigo;
    cout << "Introduzca lasunidades vendidas" << endl;
    cin >> unidades;
    
    
    while(identificacor != -1){
        if (identificacor == 1)
            sucursal1 = sucursal1 + unidades;
        if (identificacor == 2)
            sucursal2 = sucursal2 + unidades;
        if (identificacor == 3)
            sucursal3 = sucursal3 + unidades;
        
        cout << "Introduzca la sucursal" << endl;
        cin >> identificacor;
        cout << "Introduzca el producto" << endl;
        cin >> codigo;
        cout << "Introduzca lasunidades vendidas" << endl;
        cin >> unidades;
    }
    
    if(sucursal1 > sucursal2 && sucursal1 > sucursal3){
        cout << "La sucursal 1 es la que mas productos ha vendido con " << sucursal1 << " unidades" << endl;
    }
    else{
        if (sucursal2 > sucursal3) {
            cout << "La sucursal 2 es la que mas productos ha vendido con " << sucursal2 << " unidades" << endl;
        }
        else{
            cout << "La sucursal 3 es la que mas productos ha vendido con " << sucursal3 << " unidades" << endl;
        }
    }
}





