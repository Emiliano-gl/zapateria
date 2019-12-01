#ifndef RANDOMDATA_H
#define RANDOMDATA_H

#include <iostream>
#include <vector>
#include <chrono>
#include <thread>
#include "Clases/bodega.h"
#include "Clases/recursoshumanos.h"
#include "Clases/empleado.h"
#include "Clases/producto.h"
#include "auxiliares.h"

using namespace std;

void randomEmpleados(RecursosHumanos *empleados){
  vector<string> nombreEmpleados = {"Maria carmen ", "Isabel ", "Antonio ", "Jose ", "Javier ", "Sofia "};
  vector<string> apellidosEmpleados = {"Flores", "Suarez", "Torres", "Rojas", "Castro", "Ortiz"};
  string nombre = "";

  nombre += nombreEmpleados[randomNumber(0, 5)];
  this_thread::sleep_for(chrono::milliseconds(3));
  nombre += apellidosEmpleados[randomNumber(0, 5)];

  Empleado *empleado = new Empleado(nombre, claveGenerator());

  empleados->agregarEmpleado(copiarEmpleado(empleado));

  delete empleado;
  nombre = "";

}

#endif // RANDOMDATA_H
