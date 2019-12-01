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
  void quitarVenta();
  void quitarVenta(const int &index);
};

#endif // BASEDEDATOS_H
