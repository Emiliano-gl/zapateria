#ifndef AUXILIARES_H
#define AUXILIARES_H

#include <ctime>
#include <sstream>
#include <cstdlib>
#include <vector>
#include "venta.h"

using namespace std;

auto getDay() -> string{
  time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  stringstream ss_day;
  ss_day << timePtr->tm_mday;
  string Day = ss_day.str();

  return Day;
}

auto getMonth() -> string{
  time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  stringstream ss_month;
  ss_month << timePtr->tm_mon+1;
  string Month = ss_month.str();

  return Month;
}

auto getYear() -> string{
  time_t t = time(NULL);
  tm* timePtr = localtime(&t);

  stringstream ss_year;
  ss_year << timePtr->tm_year+1900;
  string Year = ss_year.str();

  return Year;
}

auto getDate() -> string{
  string auxFecha = "";

  auxFecha += getDay() + "/";
  auxFecha += getMonth() + "/";
  auxFecha += getYear();

  return auxFecha;
}


#endif // AUXILIARES_H
