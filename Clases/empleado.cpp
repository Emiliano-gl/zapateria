#include "empleado.h"

Empleado::Empleado(const string &nombre, const string &clave)
{
  this->nombre = nombre;
  this->clave = clave;
}

string Empleado::getNombre()
{
  return this->nombre;
}

string Empleado::getClave()
{
  return this->clave;
}
