//
//  Ejercicio 4
//  Relacion ejercicios 7
//
//  Created by Rafael Medina Facal on 8/12/17.
//  Copyright © 2017 Rafael Medina Facal. All rights reserved.
//

#include <iostream>

using namespace std;

//a)
class Robot{
    public:
    string nombre;
    int x, y;
    
    //a)
    string getNombre(){
        return nombre;
    }
    
    int getX(){
        return x;
    }
    
    int getY(){
        return y;
    }
    
    void setNombre(string _nombre){
        nombre = _nombre;
    }
    
    void setX(int _x){
        x = _x;
    }
    
    void setY(int _y){
        y = _y;
    }
};

int main() {
    //b)
    Robot rafa;
    rafa.setX(5);
    rafa.setY(5);
    
    //c)
    cout << "Estoy en la posicion " << rafa.getX() << " " << rafa.getY() << endl;
    for (int i = rafa.getX() - 1; i >= 1; i --) {
        rafa.setX(i);
        cout << "Estoy en la posicion " << rafa.getX() << " " << rafa.getY() << endl;
    }
    
    for (int i = rafa.getY() + 1; i <= 10; i ++) {
        rafa.setY(i);
        cout << "Estoy en la posicion " << rafa.getX() << " " << rafa.getY() << endl;
    }
    
    //d)
    for (int i = rafa.getX() + 1; i <= 10; i ++) {
        rafa.setX(i);
        cout << "Estoy en la posicion " << rafa.getX() << " " << rafa.getY() << endl;
    }
    
    for (int i = rafa.getY() - 1; i >= 1; i --) {
        rafa.setY(i);
        cout << "Estoy en la posicion " << rafa.getX() << " " << rafa.getY() << endl;
    }
    
}


