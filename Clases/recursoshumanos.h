#ifndef RECURSOSHUMANOS_H
#define RECURSOSHUMANOS_H

#include <iostream>
#include <vector>
#include "empleado.h"

using namespace std;

class RecursosHumanos
{
private:
  vector<Empleado *> empleados;

public:
  void agregarEmpleado(Empleado *empleado);
  void listaEmpleados();

  Empleado *getEmpleado(const string &clave);
  vector<Empleado *> getEmpleados();
};

#endif // RECURSOSHUMANOS_H
