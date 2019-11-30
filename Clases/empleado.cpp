#include "empleado.h"

Empleado::Empleado()
{
  this->nombre = "Luis Hernandez";
  this->clave = "1234";
}

Empleado::Empleado(const string &nombre, const string &clave)
{
  this->nombre = nombre;
  this->clave = clave;
}

void Empleado::setNombre(const string &nombre)
{
  this->nombre = nombre;
}

void Empleado::setClave(const string &clave)
{
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
