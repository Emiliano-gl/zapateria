#ifndef BODEGA_H
#define BODEGA_H

#include <iostream>
#include <vector>
#include "producto.h"

using namespace std;

class Bodega
{
private:
  vector<pair<Producto *, int>> inventario;

public:
  void reporteInventario();
  void agregarProducto(Producto *producto, const int &cantidad);
  void eliminarProducto();
  void eliminarProducto(const int index);
};

#endif // BODEGA_H
