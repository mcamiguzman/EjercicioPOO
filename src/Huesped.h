//
// Created by LENOVO I7 on 16/3/2023.
//

#ifndef EJERCICIOPOO_HUESPED_H
#define EJERCICIOPOO_HUESPED_H

#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;

class Huesped {
private:
    string nombre;
    string fechaNacimiento;
    string sexo;
    int identificacion;
    int puntaje;

public:
    Huesped() ;

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
    void mostrarHuesped();

};


#endif //EJERCICIOPOO_HUESPED_H
