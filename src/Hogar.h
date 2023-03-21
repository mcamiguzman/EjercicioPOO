//
// Created by LENOVO I7 on 17/3/2023.
//

#ifndef EJERCICIOPOO_HOGAR_H
#define EJERCICIOPOO_HOGAR_H

#include <iostream>
#include <string>


using std::string;
using std::cout;
using std::endl;

class Hogar {
private:
    string direccion;
    int camas;
    bool bebes;
    string descripcion;
    bool disponibilidad;

public:
    Hogar() =  default;
    Hogar(string direccion,int camas,bool bebes,string descripcion,bool disponibilidad);

    bool getBebes();
    string getDireccion();
    string getDescripcion();
    int getCamas();
    bool getDisponibilidad();


    void setDireccion(string direccion);
    void setDescripcion(string descripcion);
    void setBebes(bool bebes);
    void setCamas(int camas);
    void setDisponibilidad(bool disponibilidad);

    
};


#endif //EJERCICIOPOO_HOGAR_H
