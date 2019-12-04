#include "bodega.h"

void Bodega::reporteInventario()
{
  cout << "Tenis casuales" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){

      if(producto->getCategoria() == "tenis casuales"){
          cout << producto->getClave() << " \t " << producto->getDescripcion() << " \t " << producto->getCantidadDisponible() << " \t " << producto->getPrecio() << endl;
        }

    }

  cout << endl << "************************************************************************" << endl;
  cout << endl;

  cout << "Tenis de futbol" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){

      if(producto->getCategoria() == "tenis futbol"){
          cout << producto->getClave() << " \t " << producto->getDescripcion() << " \t " << producto->getCantidadDisponible() << " \t " << producto->getPrecio() << endl;
        }

    }

  cout << endl << "************************************************************************" << endl;
  cout << endl;

  cout << "Chanclas" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){

      if(producto->getCategoria() == "chanclas"){
          cout << producto->getClave() << " \t " << producto->getDescripcion() << " \t " << producto->getCantidadDisponible() << " \t " << producto->getPrecio() << endl;
        }

    }

  cout << endl;
}

void Bodega::agregarProducto(Producto *producto)
{
  this->inventario.push_back(producto);
}

void Bodega::eliminarProducto()
{
  this->inventario.pop_back();
}

void Bodega::eliminarProducto(const int index)
{
  this->inventario.erase(this->inventario.begin() + index);
}

Producto * Bodega::getProductoByClave(const string &clave)
{
  Producto *auxiliar;

  for(auto producto : this->inventario){

      if(producto->getClave() == clave)
         auxiliar = producto;

    }

  return auxiliar;
}

vector<Producto *> Bodega::getProductoByCategoria(const int &categoria)
{
  vector<Producto *> auxiliar;
  string cate = "";

  if(categoria == 0)
    cate = "tenis casuales";

  if(categoria == 1)
    cate = "tenis futbol";

  if(categoria == 2)
    cate = "chanclas";

  for(auto producto : this->inventario){

      if(producto->getCategoria() == cate)
        auxiliar.push_back(producto);

    }

  return auxiliar;
}
