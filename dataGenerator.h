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
  vector<string> nombreEmpleados = {"Maria carmen ", "Isabel ", "Antonio ", "Jose ", "Jorge ", "Sofia "};
  vector<string> apellidosEmpleados = {"Flores ", "Suarez ", "Torres ", "Rojas ", "Castro ", "Ortiz "};
  vector<string> apellidosEmpleados2 = {"Peralta", "Cruz", "Banderas", "Ortiz", "Rivera", "Jimenez"};
  vector<string> clavesEmpleado = {"23845", "23476", "98535", "27547", "45678", "91235"};
  string nombre = "";

  for(int i = 0; i < 6; i++){
      nombre += nombreEmpleados[i];
      nombre += apellidosEmpleados[i];
      nombre += apellidosEmpleados2[i];

      Empleado *empleado = new Empleado(nombre, clavesEmpleado[i]);

      empleados->agregarEmpleado(copiarEmpleado(empleado));

      delete empleado;
      nombre = "";
    }

}

void sampleDataGenerator(Bodega *productos){
  vector<string> clavesTenisCasuales = {"12345", "15767", "18654", "18590", "10256"};
  vector<string> clavesTenisFutbol = {"23456", "28654", "29495", "20043", "28754"};
  vector<string> clavesChanclas = {"34567", "30000", "35789", "39457", "30809"};

  vector<string> desTenisCasuales = {"vans blancos #26    ", "Tommy Hilfirend #27 ", "Nike color rojo #26 ", "addidas blancos #23 ", "capa de ozono   #26 "};
  vector<string> desTenisFutbol = {"Pirma Blancos #26-29", "Nike rojo  #25-29   ", "adidas negros #24-28", "Rebook depor #24-28 ", "Cr7 negros #24-28   "};
  vector<string> desChanclas= {"vans negras #25-28  ", "ChanCla suave #23-27", "chancla gris #22-28 ", "chanclas ok  #22-28 ", "chancla Roja #22-25 "};

  vector<int> cantidadTenisCasuales = {2 , 4, 10, 3, 8};
  vector<int> cantidadTenisFutbol = {5, 3, 4, 7, 8};
  vector<int> cantidadChanclas = {50, 20, 9, 7, 4};

  vector<double> precioTenisCasuales = {400, 550, 720, 840, 450};
  vector<double> precioTenisFutbol = {800, 700, 950, 1200, 1350};
  vector<double> precioChanclas = {700, 100, 50, 90, 80};

  for(int casual = 0; casual < 5; casual++){
      Producto *producto = new Producto(clavesTenisCasuales[casual], 0, desTenisCasuales[casual], cantidadTenisCasuales[casual], precioTenisCasuales[casual]);
      productos->agregarProducto(copiarProducto(producto, 0));
      delete producto;
    }

  for(int fut = 0; fut < 5; fut++){
      Producto *producto = new Producto(clavesTenisFutbol[fut], 1, desTenisFutbol[fut], cantidadTenisFutbol[fut], precioTenisFutbol[fut]);
      productos->agregarProducto(copiarProducto(producto, 1));
      delete producto;
    }

  for(int chan = 0; chan < 5; chan++){
      Producto *producto = new Producto(clavesChanclas[chan], 2, desChanclas[chan], cantidadChanclas[chan], precioChanclas[chan]);
      productos->agregarProducto(copiarProducto(producto, 2));
      delete producto;
    }

}

#endif // RANDOMDATA_H
