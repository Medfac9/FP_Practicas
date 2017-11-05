//
//  Ejercicio 5
//  Relacion ejercicios 5
//
//  Created by Rafael Medina Facal on 4/11/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

int extraeDigito (int a, int k){
    int esimo, cont = 0, aux, aux2;
    
    aux2 = a;
    
    while(a > 0){
        a = a / 10;
        cont ++;
    }
    
    aux = cont;
    
    while (aux - k +1 > 0) {
        esimo = aux2 % 10;
        aux2 = aux2 / 10;
        aux --;
    }
    
    if(k > cont){
        esimo = -1;
    }
    
    return esimo;
}



int main() {
    int cantidad, esimo, k;
    
    cout << "Introduzca un numero: " << endl;
    cin >> cantidad;
    cout << "Introduzca el digito que desea obtener: " << endl;
    cin >> k;
    
    esimo = extraeDigito(cantidad, k);
    
    cout << "El k-esimo digito es: " << esimo << endl;
}

