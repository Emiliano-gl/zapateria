#include "venta.h"
#include "auxiliaresClases.h"

Venta::Venta(Empleado *vendedor)
{
  this->vendedor = vendedor;
  this->fecha = getDate();
}

void Venta::agregarProducto(Producto *producto)
{
  this->ventas.push_back(producto);
}

void Venta::setEmpleado(Empleado *empleado)
{
  this->vendedor = empleado;
}

void Venta::setFecha(const int &day, const int &month, const int &year)
{
  this->fecha = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

vector<Producto *> Venta::getProductos()
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
