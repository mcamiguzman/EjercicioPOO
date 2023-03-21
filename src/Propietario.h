//
// Created by LENOVO I7 on 17/3/2023.
//

#ifndef EJERCICIOPOO_PROPIETARIO_H
#define EJERCICIOPOO_PROPIETARIO_H

#include <iostream>
#include <string>
#include "Hogar.h"
using std::string;
using std::cout;
using std::endl;
class Propietario {

private:
    string nombre;
    string fechaNacimiento;
    string sexo;
    int identificacion;
    int puntaje;
    Hogar*pHogar;
public:
    Propietario() ;

    string getNombre();
    string getSexo();
    string getFechaNacimiento();
    int getIdentificacion();
    int getPuntaje();

    void setNombre(string nombre);
    void setFechaNacimiento(string fechaNacimiento);
    void setSexo(string sexo);
    void setIdentificacion(int identificacion);
    void setPuntaje(int puntaje);
    void agregarHogarAsociado(string direccion,int camas,bool bebes,string descripcion);
    void setHogar(Hogar*pHoagr);

};


#endif //EJERCICIOPOO_PROPIETARIO_H
