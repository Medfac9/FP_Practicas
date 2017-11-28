//
//  Ejercicio 2
//  Relacion ejercicios 6
//
//  Created by Rafael Medina Facal on 27/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

//
//  Ejercicio 1
//  Relacion ejercicios 6
//
//  Created by Rafael Medina Facal on 27/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    const int MAX_SIZE = 10;
    int X[MAX_SIZE];
    int Y[MAX_SIZE];
    int mezcla[MAX_SIZE];
    int contPar = 2;
    int contImpar = 1;
    
    //Rellena X e Y
    for (int i = 0; i < MAX_SIZE; i ++) {
        X[i] = contPar;
        Y[i] = contImpar;
        contPar += 2;
        contImpar += 2;
    }
    
    //Rellena mezcla
    for (int i = 0; i < MAX_SIZE; i ++) {
        if (i % 2 == 0){
            mezcla[i] = X[i];
        }
        else{
            mezcla[i] = Y[i];
        }
    }
    
    //Pinta X
    cout << "X = {";
    for (int i = 0; i < MAX_SIZE; i ++) {
        cout << X[i];
        if (i + 1 < MAX_SIZE) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    
    //Pinta Y
    cout << "Y = {";
    for (int i = 0; i < MAX_SIZE; i ++) {
        cout << Y[i];
        if (i + 1 < MAX_SIZE) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    
    //Pinta mezcla
    cout << "mezcla = {";
    for (int i = 0; i < MAX_SIZE; i ++) {
        cout << mezcla[i];
        if (i + 1 < MAX_SIZE) {
            cout << ", ";
        }
    }
    cout << "}" << endl;
    
}
