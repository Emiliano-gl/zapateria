#ifndef AUXILIARES_H
#define AUXILIARES_H

#include "Clases/venta.h"

using namespace std;

Venta* copiarVenta(Venta *from)
{
  Venta *aux = new Venta(from->getEmpleado());
  return aux;
}

#endif // AUXILIARES_H
