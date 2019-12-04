#include "venta.h"
#include "auxiliaresClases.h"

Venta::Venta(Empleado *vendedor)
{
  this->vendedor = vendedor;
  this->fecha = getDate();
}

void Venta::agregarProducto(Producto *producto, const int &cantidad)
{
  pair<Producto *, int> auxiliar;

  auxiliar.first = producto;
  auxiliar.second = cantidad;

  this->ventas.push_back(auxiliar);
}

void Venta::setEmpleado(Empleado *empleado)
{
  this->vendedor = empleado;
}

void Venta::setFecha(const int &day, const int &month, const int &year)
{
    this->fecha = to_string(day) + "/" + to_string(month) + "/" + to_string(year);
}

void Venta::informacion()
{
    double subtotal = 0;

    for(auto producto : this->ventas){
        subtotal += (producto.first->getPrecio() * producto.second);
    }

    double impouestos = subtotal * 0.16;
    double total = subtotal + impouestos;

    cout << "Cantidad" << " \t " << "Descripcion" << " \t\t " << "Precio unitario" << " \t " << "Importe" << endl;
    cout << "-----------------------------------------------------------------------------" << endl;

    for(auto producto : this->ventas){
        cout << producto.second << " \t\t " << producto.first->getDescripcion() << " \t " << producto.first->getPrecio() << " \t\t\t " << (producto.first->getPrecio() * producto.second) << endl;
    }

    cout << endl;
    cout << "Subtotal: " << subtotal << endl;
    cout << "Impuestos: "<< impouestos << endl;
    cout << "Total :" << total << endl;

    cout << endl;

    cout << "Vendedor: " << this->getEmpleado()->getNombre() << endl;
}

vector<pair<Producto *, int>> Venta::getProductos()
{
  return this->ventas;
}

Empleado *Venta::getEmpleado()
{
  return this->vendedor;
}

string Venta::getFecha()
{
  return this->fecha;
}
