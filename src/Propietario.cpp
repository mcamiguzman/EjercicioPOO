//
// Created by LENOVO I7 on 17/3/2023.
//

#include "Propietario.h"
Propietario::Propietario() {
    this-> nombre = "";
    this->fechaNacimiento="";
    this->sexo="";
    this->identificacion=0;
    this->puntaje=0;
}
string Propietario::getNombre(){
    return nombre;
}
string Propietario::getSexo(){
    return sexo;
}
string Propietario::getFechaNacimiento(){
    return fechaNacimiento;
}
int Propietario::getIdentificacion(){
    return identificacion;
}
int Propietario::getPuntaje(){
    return puntaje;
}

void Propietario::setNombre(string nombre) {
    Propietario::nombre = nombre;
}
void Propietario::setFechaNacimiento(string fechaNacimiento) {
    Propietario::fechaNacimiento = fechaNacimiento;
}
void Propietario::setSexo(string sexo) {
    Propietario::sexo = sexo;
}
void Propietario::setIdentificacion(int identificacion) {
    Propietario::identificacion = identificacion;
}
void Propietario::setPuntaje(int puntaje) {
    Propietario::puntaje = puntaje;
}

void Propietario::setHogar(Hogar*pHoagr){
    this->pHogar=pHoagr;
}

void Propietario::agregarHogarAsociado(string direccion,int camas,bool bebes,string descripcion){
    this->pHogar = new Hogar(direccion,camas,bebes,descripcion)
}