#ifndef AUXILIARES_H
#define AUXILIARES_H

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Clases/empleado.h"

using namespace std;

using namespace std;

Empleado* copiarEmpleado(Empleado *from)
{
  Empleado *aux = new Empleado(from->getNombre(),from->getClave());
  return aux;
}

auto randomNumber(const int &min, const int &max) -> int{
   srand(unsigned(time(nullptr)));
  return rand() % max + min;
}

auto claveGenerator() -> string{
  string aux = "";

  for(int i = 0; i < 5; i++)
    aux += to_string(randomNumber(0, 9));

  return aux;
}

#endif // AUXILIARES_H
