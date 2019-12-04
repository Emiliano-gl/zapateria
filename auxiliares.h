#ifndef AUXILIARES_H
#define AUXILIARES_H

#include <iostream>
#include "Clases/empleado.h"
#include "Clases/producto.h"

using namespace std;

using namespace std;

Empleado* copiarEmpleado(Empleado *from)
{
  Empleado *aux = new Empleado(from->getNombre(),from->getClave());
  return aux;
}

Producto* copiarProducto(Producto *from)
{
  Producto *aux = new Producto(from->getClave(), from->getCategoria(), from->getDescripcion(), from->getCantidadDisponible(), from->getPrecio());
  return aux;
}

#endif // AUXILIARES_H
