//
// Created by LENOVO I7 on 17/3/2023.
//

#include "Hogar.h"

Hogar::Hogar(string direccion,int camas,bool bebes,string descripcion, bool disponibilidad){
    this ->direccion=direccion;
    this->camas=camas;
    this->bebes=bebes;
    this->descripcion=descripcion;
    this->disponibilidad=disponibilidad;
}
string Hogar::getDireccion(){
    return direccion;
}
string Hogar::getDescripcion(){
    return descripcion;
}
int Hogar::getCamas() {
    return camas;
}
bool Hogar::getBebes() {
    return bebes;
}
bool Hogar::getDisponibilidad(){
    return disponibilidad;
}

void Hogar::setDireccion(string direccion){
    Hogar::direccion=direccion;
}
void Hogar::setDescripcion(string descripcion){
    Hogar::descripcion=descripcion;
}
void Hogar::setCamas(int camas){
    Hogar::camas=camas;
}
void Hogar::setBebes(bool bebes){
    Hogar::bebes=bebes;
}
void Hogar::setDisponibilidad(bool disponibilidadd) {
    Hogar::disponibilidad=disponibilidadd;
}