//
// Created by LENOVO I7 on 18/3/2023.
//

#ifndef EJERCICIOPOO_OPERACIONES_H
#define EJERCICIOPOO_OPERACIONES_H

#include <iostream>
#include <string>
#include <vector>
#include "Huesped.h"
#include "Hogar.h"
#include "Propietario.h"
#include "Reserva.h"

using std::string;
using std::cout;
using std::endl;
using std::vector;
class Operaciones {
private:
    vector<Propietario> listaPropietarios;
    vector<Reserva> litstaReservas;
public:
    void agregarPropietarioHogar();
    void ListadoPropietarios();
    void hacerReserva();
    void listadoReservas();
    void liberarReserva();
    void evaluar();
};


#endif //EJERCICIOPOO_OPERACIONES_H
