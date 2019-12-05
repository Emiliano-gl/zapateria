#ifndef VENTA_H
#define VENTA_H

#include <iostream>
#include <vector>
#include "empleado.h"
#include "producto.h"

using namespace std;

class Venta
{
private:
  vector<pair<Producto *, int>> ventas;
  Empleado* vendedor;
  string fecha;

public:
  Venta(Empleado *vendedor);

  void agregarProducto(Producto *producto, const int &cantidad);
  void informacion();

  vector<pair<Producto *, int>> getProductos();
  Empleado *getEmpleado();
  string getFecha();
};

#endif // VENTA_H
