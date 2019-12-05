#include "producto.h"

Producto::Producto(const string &clave, const int &categoria, const string &descripcion, const int &cantidadDisponible, const double &precio)
{
  this->clave = clave;
  this->setCategoria(categoria);
  this->descripcion = descripcion;
  this->cantidadDisponible = cantidadDisponible;
  this->precio = precio;
}

void Producto::setClave(const string &clave)
{
  this->clave = clave;
}

void Producto::setCategoria(const int &categoria)
{
  if(categoria == 0)
    this->categoria = "tenis casuales";

  if(categoria == 1)
    this->categoria = "tenis futbol";

  if(categoria == 2)
    this->categoria = "chanclas";
}

void Producto::setDescripcion(const string &descripcion)
{
  this->descripcion = descripcion;
}

void Producto::setCantidadDisponible(const int &cantidadDisponible)
{
  this->cantidadDisponible = cantidadDisponible;
}

void Producto::setPrecio(const double &precio)
{
  this->precio = precio;
}

void Producto::vederProducto(const int &cantidad)
{
  if(cantidad <= this->cantidadDisponible){
      this->cantidadDisponible -= cantidad;
    }
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

double Producto::getPrecio()
{
  return this->precio;
}

bool Producto::disponible(const int &cantidad)
{
  if(cantidad <= this->cantidadDisponible){
      return true;
    } else {
      return false;
    }
}
