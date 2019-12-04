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

  void setClave(const string &clave);
  void setCategoria(const int &categoria);
  void setDescripcion(const string &descripcion);
  void setCantidadDisponible(const int &cantidadDisponible);
  void setPrecio(const double &precio);

  string getClave();
  string getCategoria();
  string getDescripcion();
  int getCantidadDisponible();
  double getPrecio();
};

#endif // PRODUCTO_H
