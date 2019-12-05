#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <iostream>
using namespace std;

class Producto
{
private:
  string clave;
  string categoria;
  string descripcion;
  int cantidadDisponible;
  double precio;

public:
  Producto(const string &clave, const int &categoria, const string &descripcion, const int &cantidadDisponible, const double &precio);
  void setCategoria(const int &categoria);
  void vederProducto(const int &cantidad);
  string getClave();
  string getCategoria();
  string getDescripcion();
  int getCantidadDisponible();
  double getPrecio();
  bool disponible(const int &cantidad);
};

#endif // PRODUCTO_H
