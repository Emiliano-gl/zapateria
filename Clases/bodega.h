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
  void restarCantidad(const string &clave, const int &cantidad);
  bool disponible(const string &clave, const int &cantidad);
  Producto * obtenerProducto(const string &clave, const int &cantidad);

  Producto *getProductoByClave(const string &clave);
  vector<Producto *> getProductoByCategoria(const int &categoria);
};

#endif // BODEGA_H
