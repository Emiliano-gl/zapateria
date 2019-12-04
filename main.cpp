#include <iostream>
#include "Clases/bodega.h"
#include "Clases/basededatos.h"
#include "Clases/recursoshumanos.h"
#include "Clases/empleado.h"
#include "Clases/producto.h"
#include "Clases/venta.h"
#include "auxiliares.h"
#include "dataGenerator.h"
#include "sistemaVentas.h"

using namespace std;

int main()
{
    bool programa = true;
    int opcionReporte = 0;

    BaseDeDatos *baseDeDatos = new BaseDeDatos;
    Bodega *bodega = new Bodega;
    RecursosHumanos *recursosHumanos = new RecursosHumanos;

    sampleDataGenerator(recursosHumanos);
    sampleDataGenerator(bodega);

    while (programa) {
        int opcion = 0;
        cout << "Ingrese el numero de la opcion deseada: " << endl;
        cout << "1) Registrar venta" << endl;
        cout << "2) Generar reporte" << endl;
        cout << "3) Mostrar catalogo" << endl;
        cout << "4) Salir" << endl;

        cout << endl << "> "; cin >> opcion;
        cin.ignore();

        system("clear");

        switch(opcion){
        case 1:
            sistemaDeVentas(recursosHumanos, bodega, baseDeDatos);
            break;
        case 2:
            cout << "Ingrese el numero de la opcion deseada: " << endl;
            cout << "1) Reporte de ventas" << endl;
            cout << "2) Reporte de ventas por empleado" << endl;

            cout << endl << "> "; cin >> opcionReporte;
            cin.ignore();
            system("clear");

            if(opcionReporte == 1){
                baseDeDatos->reporteDeVentas();
                cout << endl << "Presiona ENTER para continuar...";
                getchar();
                system("clear");
            } else {
                string clave = "";
                cout << "Ingrese la clave del vendedor: "; cin >> clave;
                cin.ignore();

                system("clear");

                baseDeDatos->reporteDeVentasVendedor(clave);
                cout << endl << "Presiona ENTER para continuar...";
                getchar();
                system("clear");
            }

            break;
        case 3:
            bodega->reporteInventario();
            cout << endl << "Presiona ENTER para continuar...";
            getchar();
            system("clear");
            break;
        case 4:
            cout << "Hasta luego" << endl;
            programa = false;
            break;
        }
    }



  return 0;
}
