#include "basededatos.h"

void BaseDeDatos::reporteDeVentas()
{
  for(auto venta : this->datos){
      cout << "Productos vendidos: " << endl;
      for(auto producto : venta->getProductos()){
          cout << producto.first->getClave() << " \t " << producto.first->getDescripcion() << " \t " << producto.second << " \t " << producto.first->getPrecio() << endl;
        }
      cout << "Fecha de venta: " << venta->getFecha() << endl;
      cout << "Vendedor: " << endl;
      cout << venta->getEmpleado()->getClave() << " \t " << venta->getEmpleado()->getNombre() << endl;
      cout << endl;
    }
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
