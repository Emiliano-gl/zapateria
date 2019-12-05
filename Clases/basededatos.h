#ifndef BASEDEDATOS_H
#define BASEDEDATOS_H

#include <iostream>
#include <vector>
#include "venta.h"

using namespace std;

class BaseDeDatos
{
private:
  vector<Venta *> datos;

public:
  void reporteDeVentas();
  void reporteDeVentasVendedor(const string &clave);
  void agregarVenta(Venta *venta);
};

#endif // BASEDEDATOS_H
