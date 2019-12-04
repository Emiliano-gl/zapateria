#include <iostream>
#include "Clases/bodega.h"
#include "Clases/basededatos.h"
#include "Clases/recursoshumanos.h"
#include "Clases/empleado.h"
#include "Clases/producto.h"
#include "Clases/venta.h"
#include "auxiliares.h"
#include "dataGenerator.h"

using namespace std;

int main()
{
  BaseDeDatos *baseDeDatos = new BaseDeDatos;
  Bodega *bodega = new Bodega;
  RecursosHumanos *recursosHumanos = new RecursosHumanos;

  sampleDataGenerator(recursosHumanos);
  sampleDataGenerator(bodega);

//  cout << "Ingrese el numero de la opcion deseada: " << endl;
//  cout << "1) Registrar venta" << endl;
//  cout << "2) Generar reporte" << endl;
//  cout << "3) Mostrar catalogo" << endl;
//  cout << "4) Mostrar lista de empleados" << endl;
//  cout << "5) Salir" << endl;

  Venta *venta = new Venta(recursosHumanos->getEmpleado("45678"));
  venta->agregarProducto(bodega->getProductoByClave("34567"));
  venta->agregarProducto(bodega->getProductoByClave("28754"));

  baseDeDatos->agregarVenta(venta);

  baseDeDatos->reporteDeVentas();

  cout << endl << endl;
  baseDeDatos->reporteDeVentasVendedor("45678");
  cout << endl;

  return 0;
}
