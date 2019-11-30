#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
using namespace std;

class Empleado
{
private:
  string nombre;
  string clave;

public:
  Empleado();
  Empleado(const string &nombre, const string &clave);

  void setNombre(const string &nombre);
  void setClave(const string &clave);

  string getNombre();
  string getClave();
};

#endif // EMPLEADO_H