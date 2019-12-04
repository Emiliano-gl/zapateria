#ifndef RANDOMDATA_H
#define RANDOMDATA_H

#include <iostream>
#include <vector>
#include "Clases/bodega.h"
#include "Clases/recursoshumanos.h"
#include "Clases/empleado.h"
#include "Clases/producto.h"
#include "auxiliares.h"

using namespace std;

void sampleDataGenerator(RecursosHumanos *empleados){
  vector<string> nombreEmpleados = {"Maria carmen ", "Isabel ", "Antonio ", "Jose ", "Javier ", "Sofia "};
  vector<string> apellidosEmpleados = {"Flores", "Suarez", "Torres", "Rojas", "Castro", "Ortiz"};
  vector<string> clavesEmpleado = {"23845", "23476", "98535", "27547", "45678", "91235"};
  string nombre = "";

  for(int i = 0; i < 6; i++){
      nombre += nombreEmpleados[i];
      nombre += apellidosEmpleados[i];

      Empleado *empleado = new Empleado(nombre, clavesEmpleado[i]);

      empleados->agregarEmpleado(copiarEmpleado(empleado));

      delete empleado;
      nombre = "";
    }

}

void sampleDataGenerator(Bodega *productos){
  vector<string> clavesTenisCasuales = {"12345", "15767", "18654", "185904", "10256"};
  vector<string> clavesTenisFutbol = {"23456", "28654", "29495", "20043", "28754"};
  vector<string> clavesChanclas = {"34567", "30000", "35789", "39457", "30809"};

  vector<string> desTenisCasuales;
  vector<string> desTenisFutbol;
  vector<string> desChanclas;

  vector<int> cantidadTenisCasuales;
  vector<int> cantidadTenisFutbol;
  vector<int> cantidadChanclas;

  vector<double> precioTenisCasuales;
  vector<double> precioTenisFutbol;
  vector<double> precioChanclas;

  for(int casual = 0; casual < 5; casual++){
      Producto *producto = new Producto(clavesTenisCasuales[casual], 0, desTenisCasuales[casual], cantidadTenisCasuales[casual], precioTenisCasuales[casual]);
      productos->agregarProducto(copiarProducto(producto));
      delete producto;
    }

}

#endif // RANDOMDATA_H
