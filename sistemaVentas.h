#ifndef SISTEMAVENTAS_H
#define SISTEMAVENTAS_H

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

void sistemaDeVentas(RecursosHumanos *recursosHumanos, Bodega *bodega, BaseDeDatos *baseDeDatos){
    string clave = "";
    int cantidad = 0;
    bool confirmar = false;

    cout << "Ingrese la clave del vendedor: "; cin >> clave;
    system("clear");
    cin.ignore();

    if(recursosHumanos->existeEmpleado(clave)){
        Venta *venta = new Venta(recursosHumanos->getEmpleado(clave));
        clave = "";

        system("clear");

        while(!confirmar){
            int opcion = 0;

            venta->informacion();
            cout << endl;

            cout << "Ingrese el numero de la opcion deseada: " << endl;
            cout << "1) Agregar producto" << endl;
            cout << "2) Confirmar venta" << endl;

            cout << endl << "> "; cin >> opcion;
            system("clear");

            if(opcion == 1){
                cout << "Ingrese la clave del producto: "; cin >> clave;
                cout << "Ingrese la cantidad a comprar: "; cin >> cantidad;
                cin.ignore();

                system("clear");

                if(bodega->disponible(clave, cantidad)){
                    venta->agregarProducto(bodega->obtenerProducto(clave, cantidad), cantidad);
                } else {
                    cout << "La cantidad ingresada es mas grande de la disponible" << endl;
                    cout << endl << "Presiona ENTER para continuar...";
                    getchar();
                    system("clear");
                }
            } else {
                baseDeDatos->agregarVenta(venta);
                confirmar = true;
            }
        }
    } else {
        cout << "La clave ingresada no coincide con ningun empleado" << endl;
        cout << endl << "Presiona ENTER para continuar...";
        getchar();
        system("clear");
    }
}

#endif // SISTEMAVENTAS_H
