#include "recursoshumanos.h"

void RecursosHumanos::agregarEmpleado(Empleado *empleado)
{
  this->empleados.push_back(empleado);
}

bool RecursosHumanos::existeEmpleado(const string &clave)
{
  bool existe = false;

  for(auto empleado : this->getEmpleados()){

      if(empleado->getClave() == clave)
        existe = true;
    }

  return existe;
}

Empleado *RecursosHumanos::getEmpleado(const string &clave)
{
  Empleado *auxiliar;

  for(auto empleado : this->empleados){

      if(empleado->getClave() == clave)
        auxiliar = empleado;

    }

  return auxiliar;
}

vector<Empleado *> RecursosHumanos::getEmpleados()
{
  return this->empleados;
}
