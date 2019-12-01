#include <iostream>
#include "Clases/bodega.h"
#include "Clases/basededatos.h"
#include "Clases/empleado.h"
#include "Clases/producto.h"
#include "Clases/venta.h"
#include"auxiliares.h"

using namespace std;

int main()
{
  BaseDeDatos* baseDeDatos = new BaseDeDatos;
  Bodega* bodega = new Bodega;

  bodega->reporteInventario();
  baseDeDatos->reporteDeVentas();
  return 0;
}
