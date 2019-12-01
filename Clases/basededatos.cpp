#include "basededatos.h"

void BaseDeDatos::reporteDeVentas()
{
  cout << "reporte" << endl;
}

void BaseDeDatos::agregarVenta(Venta *venta)
{
  this->datos.push_back(venta);
}

void BaseDeDatos::quitarVenta()
{
  this->datos.pop_back();
}

void BaseDeDatos::quitarVenta(const int &index)
{
  this->datos.erase(this->datos.begin() + index);
}
