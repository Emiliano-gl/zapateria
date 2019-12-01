#include "bodega.h"

void Bodega::reporteInventario()
{
  cout << "Tenis casuales" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){
      if(producto.first->getCategoria() == "tenis casuales"){
          cout << producto.first->getClave() << " \t " << producto.first->getDescripcion() << " \t " << producto.second << " \t " << producto.first->getPrecio() << endl;
        }
    }

  cout << endl;

  cout << "Tenis de futbol" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){
      if(producto.first->getCategoria() == "tenis futbol"){
          cout << producto.first->getClave() << " \t " << producto.first->getDescripcion() << " \t " << producto.second << " \t " << producto.first->getPrecio() << endl;
        }
    }

  cout << endl;

  cout << "Chanclas" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){
      if(producto.first->getCategoria() == "chanclas"){
          cout << producto.first->getClave() << " \t " << producto.first->getDescripcion() << " \t " << producto.second << " \t " << producto.first->getPrecio() << endl;
        }
    }

  cout << endl;
}

void Bodega::agregarProducto(Producto *producto, const int &cantidad)
{
  pair<Producto*, int> articulo;
  articulo.first = producto;
  articulo.second = cantidad;

  this->inventario.push_back(articulo);
}

void Bodega::eliminarProducto()
{
  this->inventario.pop_back();
}

void Bodega::eliminarProducto(const int index)
{
  this->inventario.erase(this->inventario.begin() + index);
}
