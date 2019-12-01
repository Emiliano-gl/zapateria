#include "venta.h"
#include "auxiliaresClases.h"

Venta::Venta(Empleado *vendedor)
{
  this->vendedor = vendedor;
  this->fecha = getDate();
}

void Venta::agregarProducto(Producto *producto, const int &cantidad)
{
  pair<Producto*, int> articulo;
  articulo.first = producto;
  articulo.second = cantidad;

  this->ventas.push_back(articulo);
}

void Venta::setEmpleado(Empleado *empleado)
{
  this->vendedor = empleado;
}

void Venta::setFecha(const int &day, const int &month, const int &year)
{
  this->fecha = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

vector<pair<Producto *, int> > Venta::getProductos()
{
  return this->ventas;
}

Empleado *Venta::getEmpleado()
{
  return this->vendedor;
}

string Venta::getFecha()
{
  return this->fecha;
}
