#include "bodega.h"

void Bodega::reporteInventario()
{
  cout << "Tenis casuales" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){

      if(producto->getCategoria() == "tenis casuales"){
          cout << producto->getClave() << " \t " << producto->getDescripcion() << " \t " << producto->getCantidadDisponible() << " \t\t $" << producto->getPrecio() << endl;
        }

    }

  cout << endl << "************************************************************************" << endl;
  cout << endl;

  cout << "Tenis de futbol" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){

      if(producto->getCategoria() == "tenis futbol"){
          cout << producto->getClave() << " \t " << producto->getDescripcion() << " \t " << producto->getCantidadDisponible() << " \t\t $" << producto->getPrecio() << endl;
        }

    }

  cout << endl << "************************************************************************" << endl;
  cout << endl;

  cout << "Chanclas" << endl;
  cout << "clave \t Descripcion \t cantidad disponible \t precio unitario" << endl;
  cout << "--------------------------------------------------------------" << endl;

  for(auto producto : this->inventario){

      if(producto->getCategoria() == "chanclas"){
          cout << producto->getClave() << " \t " << producto->getDescripcion() << " \t " << producto->getCantidadDisponible() << " \t\t $" << producto->getPrecio() << endl;
        }

    }

  cout << endl;
}

void Bodega::agregarProducto(Producto *producto)
{
  this->inventario.push_back(producto);
}

void Bodega::restarCantidad(const string &clave, const int &cantidad)
{
  for(auto producto : this->inventario){

      if(producto->getClave() == clave)
        producto->vederProducto(cantidad);

    }
}

bool Bodega::disponible(const string &clave, const int &cantidad)
{
  bool dispo = false;

  for(auto producto : this->inventario){

      if(producto->getClave() == clave)
        dispo = producto->disponible(cantidad);

    }

  return dispo;
}

Producto * Bodega::obtenerProducto(const string &clave, const int &cantidad)
{
  Producto * auxiliar;

  if(this->disponible(clave, cantidad)){
      this->restarCantidad(clave, cantidad);
      auxiliar = getProductoByClave(clave);
    } else{
      auxiliar = getProductoByClave(clave);
    }

  return auxiliar;
}

bool Bodega::existeProducto(const string &clave)
{
  bool existe = false;

  for(auto producto : this->inventario){

      if(producto->getClave() == clave)
        existe = true;
    }

  return existe;
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
