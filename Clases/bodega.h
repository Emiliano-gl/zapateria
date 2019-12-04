#ifndef BODEGA_H
#define BODEGA_H

#include <iostream>
#include <vector>
#include "producto.h"

using namespace std;

class Bodega
{
private:
  vector<Producto *> inventario;

public:
  void reporteInventario();
  void agregarProducto(Producto *producto);
  void eliminarProducto();
  void eliminarProducto(const int index);

  Producto *getProductoByClave(const string &clave);
  vector<Producto *> getProductoByCategoria(const int &categoria);
};

#endif // BODEGA_H
