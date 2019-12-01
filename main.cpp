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

  string nombre;
  string claveEmpleado;

  cout << "Ingrese el nombre del empleado: "; getline(cin, nombre);
  system("clear");
  cout << "Ingrese la clave del empleado: "; cin >> claveEmpleado;
  system("clear");

  Empleado* empleado = new Empleado(nombre, claveEmpleado);

  cout << "Ingrese el numero de la opcion deseada: " << endl;
  cout << "1) Registrar venta" << endl;
  cout << "2) Generar reporte" << endl;
  cout << "3) Mostrar catalogo" << endl;
  cout << "4) Salir" << endl;
  return 0;
}
