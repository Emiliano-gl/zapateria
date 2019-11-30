#include "producto.h"

Producto::Producto()
{
  this->clave = "9999";
  this->categoria = "deportivo";
  this->descripcion = "calzado super deportivo";
  this->cantidadDisponible = 10;
  this->precio = 100;
}

Producto::Producto(const string &clave, const string &categoria, const string &descripcion, const int &cantidadDisponible, const int &precio)
{
  this->clave = clave;
  this->categoria = categoria;
  this->descripcion = descripcion;
  this->cantidadDisponible = cantidadDisponible;
  this->precio = precio;
}

void Producto::setClave(const string &clave)
{
  this->clave = clave;
}

void Producto::setCategoria(const string &categoria)
{
  this->categoria = categoria;
}

void Producto::setDescripcion(const string &descripcion)
{
  this->descripcion = descripcion;
}

void Producto::setCantidadDisponible(const int &cantidadDisponible)
{
  this->cantidadDisponible = cantidadDisponible;
}

void Producto::setPrecio(const int &precio)
{
  this->precio = precio;
}

string Producto::getClave()
{
  return this->clave;
}

string Producto::getCategoria()
{
  return this->categoria;
}

string Producto::getDescripcion()
{
  return this->descripcion;
}

int Producto::getCantidadDisponible()
{
  return this->cantidadDisponible;
}

int Producto::getPrecio()
{
  return this->precio;
}
