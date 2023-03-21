//
// Created by LENOVO I7 on 17/3/2023.
//

#ifndef EJERCICIOPOO_RESERVA_H
#define EJERCICIOPOO_RESERVA_H

#include <iostream>
#include <string>
#include "Propietario.h"
#include "Huesped.h"


using std::string;
using std::cout;
using std::endl;


class Reserva {
private:
    string fechaInicio;
    string fechaFin;
    Propietario*pPropietatio1;
    Huesped* pHuesped1;

public:
    Reserva();
    string getFechainicio();
    string getFechaFin();
    void setFechaInicio(string fechaInicio);
    void setFechaFin(string fechaFin);
    void agregarReserva(Propietario*pPropietario,Huesped*pHuesped);
    void finalizarReserva();
};


#endif //EJERCICIOPOO_RESERVA_H
