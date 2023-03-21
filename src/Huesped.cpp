//
// Created by LENOVO I7 on 16/3/2023.
//

#include "Huesped.h"

Huesped::Huesped() {
    this-> nombre = "";
    this->fechaNacimiento="";
    this->sexo="";
    this->identificacion=0;
    this->puntaje=0;
}

string Huesped::getNombre(){
    return nombre;
}
string Huesped::getSexo(){
    return sexo;
}
string Huesped::getFechaNacimiento(){
    return fechaNacimiento;
}
int Huesped::getIdentificacion(){
    return identificacion;
}
int Huesped::getPuntaje(){
    return puntaje;
}

void Huesped::setNombre(string nombre) {
    Huesped::nombre = nombre;
}
void Huesped::setFechaNacimiento(string fechaNacimiento) {
    Huesped::fechaNacimiento = fechaNacimiento;
}
void Huesped::setSexo(string sexo) {
    Huesped::sexo = sexo;
}
void Huesped::setIdentificacion(int identificacion) {
    Huesped::identificacion = identificacion;
}
void Huesped::setPuntaje(int puntaje) {
    Huesped::puntaje = puntaje;
}

