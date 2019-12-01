#include <iostream>
#include "Clases/bodega.h"
#include "Clases/basededatos.h"
#include "Clases/recursoshumanos.h"
#include "Clases/empleado.h"
#include "Clases/producto.h"
#include "Clases/venta.h"
#include "auxiliares.h"
#include "randomData.h"

using namespace std;

int main()
{
  BaseDeDatos *baseDeDatos = new BaseDeDatos;
  Bodega *bodega = new Bodega;
  RecursosHumanos *recursosHumanos = new RecursosHumanos;

  for(int i = 0; i < 5; i++)
    randomEmpleados(recursosHumanos);

  recursosHumanos->listaEmpleados();

//  cout << "Ingrese el numero de la opcion deseada: " << endl;
//  cout << "1) Registrar venta" << endl;
//  cout << "2) Generar reporte" << endl;
//  cout << "3) Mostrar catalogo" << endl;
//  cout << "4) Mostrar lista de empleados" << endl;
//  cout << "5) Salir" << endl;
  return 0;
}
