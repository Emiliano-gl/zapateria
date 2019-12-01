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
  int precio;

public:
  Producto(const string &clave, const string &categoria, const string &descripcion, const int &cantidadDisponible, const int &precio);

  void setClave(const string &clave);
  void setCategoria(const string &categoria);
  void setDescripcion(const string &descripcion);
  void setCantidadDisponible(const int &cantidadDisponible);
  void setPrecio(const int &precio);

  string getClave();
  string getCategoria();
  string getDescripcion();
  int getCantidadDisponible();
  int getPrecio();
};

#endif // PRODUCTO_H
