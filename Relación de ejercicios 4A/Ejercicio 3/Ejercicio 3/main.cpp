//
//  Ejercicio 3
//  Relacion ejercicios 4A
//
//  Created by Rafael Medina Facal on 30/10/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    
    int n = 10;
    int n2 = 0;
    
    //a)
    cout << n;
    n --;
    
    while(n > 0){
        cout << ", " << n;
        n --;
    }
    
    cout << endl;
    
    //b)
    n = -10;
    
    cout << n;
    n ++;
    
    while(n <= 10){
        if(n % 2 == 0){
            cout << ", " << n;
        }
        n ++;
    }
    
    cout << endl;
    
    //c)
    n = 10;
    cout << "(" << n << "," << n2 << ")";
    n --;
    n2 ++;
    
    while(n >= 0){
        cout << "(" << n << "," << n2 << ")";
        n --;
        n2 ++;
    }
    
    cout << endl;
    
}

