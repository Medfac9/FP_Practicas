//
//  Ejercicio 13
//  Relacion ejercicios 1
//
//  Created by Rafael Medina Facal on 28/9/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main() {
    const float CARBONO = 12.011;
    const float HIDROGENO = 1.00794;
    const float NITROGENO = 14.00674;
    const float OXIGENO = 15.9994;
    const float AZUFRE = 32.066;
    
    int carbono1 = 0;
    int hidrogeno1 = 0;
    int nitrogeno1 = 0;
    int oxigeno1 = 0;
    int azufre1 = 0;
    int carbono2 = 0;
    int hidrogeno2 = 0;
    int nitrogeno2 = 0;
    int oxigeno2 = 0;
    int azufre2 = 0;
    
    double peso1 = 0;
    double peso2 = 0;
    double diferencia = 0;
    
    cout << "Ingrese el numero de atomos de carbono, hidrogeno, nitrogeno, oxigeno y azufre del primer aminoacido: " << endl;
    cin >> carbono1;
    cin >> hidrogeno1;
    cin >> nitrogeno1;
    cin >> oxigeno1;
    cin >> azufre1;
    
    cout << "Ingrese el numero de atomos de carbono, hidrogeno, nitrogeno, oxigeno y azufre del primer aminoacido: " << endl;
    cin >> carbono2;
    cin >> hidrogeno2;
    cin >> nitrogeno2;
    cin >> oxigeno2;
    cin >> azufre2;
    
    peso1 = carbono1 * CARBONO + hidrogeno1 * HIDROGENO + nitrogeno1 * NITROGENO + oxigeno1 * OXIGENO + azufre1 * AZUFRE;
    
    peso2 = carbono2 * CARBONO + hidrogeno2 * HIDROGENO + nitrogeno2 * NITROGENO + oxigeno2 * OXIGENO + azufre2 * AZUFRE;
    
    diferencia = abs(peso1 - peso2);
    
    cout << "El peso molecular del primer aminoacido es: " << peso1 << endl;
    cout << "El peso molecular del segundo aminoacido es: " << peso2 << endl;
    cout << "La diferencia de peso es: " << diferencia << endl;
}

