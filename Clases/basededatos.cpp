#include "basededatos.h"

void BaseDeDatos::reporteDeVentas()
{
  string fecha = "";
  int totalDeVentas = 0;
  double totalVendido = 0;

  totalDeVentas = this->datos.size();

  if(totalDeVentas >= 1){
      fecha = this->datos[0]->getFecha();

      for(auto venta : this->datos){

          for(auto producto : venta->getProductos()){
              totalVendido += producto.first->getPrecio();
            }

        }

      cout << "Ventas del dia: " << fecha << endl;
      cout << "Total de ventas realizadas: " << totalDeVentas << endl;
      cout << "Total de ingresos de las ventas del dia: $" << totalVendido << endl;
  } else {
      cout << "No hay ventas realizadas todavia" << endl;
  }

}

void BaseDeDatos::reporteDeVentasVendedor(const string &clave)
{
  string fecha = "";
  string nombre = "";
  int totalDeVentas = 0;
  double totalVendido = 0;

  totalDeVentas = this->datos.size();

  if(totalDeVentas >= 1){
      fecha = this->datos[0]->getFecha();

      for(auto venta : this->datos){

          if(venta->getEmpleado()->getClave() == clave){
              nombre = venta->getEmpleado()->getNombre();

              for(auto producto : venta->getProductos()){
                  totalVendido += producto.first->getPrecio();
                }

            }

        }

      cout << "Clave de vendedor \t Nombre del vendedor" << endl;
      cout << "--------------------------------------------------------" << endl;
      cout << clave << " \t\t\t " << nombre << endl;
      cout << "--------------------------------------------------------" << endl;

      cout << endl << "Ventas del dia: " << fecha << endl;
      cout << "Total de ventas realizadas: " << totalDeVentas << endl;
      cout << "Total de ingresos de las ventas del dia: $" << totalVendido << endl;
  } else {
      cout << "No hay ventas realizadas todavia" << endl;
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
