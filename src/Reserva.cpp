//
// Created by LENOVO I7 on 17/3/2023.
//

#include "Reserva.h"
string Reserva::getFechainicio() {
    return fechaInicio;
}
string Reserva::getFechaFin() {
    return fechaFin;
}

void Reserva::setFechaInicio(string fechaInicio) {
    this->fechaInicio=fechaInicio;
}
void Reserva::setFechaFin(string fechFin) {
    this->fechaFin=fechaFin;
}

void Reserva::agregarReserva(Propietario *pPropietario, Huesped *pHuesped) {
    this->pHuesped1=pHuesped;
    this->pPropietatio1=pPropietario;
}

