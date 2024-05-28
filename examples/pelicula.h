#ifndef PELICULA_H
#define PELICULA_H

#include <iostream>
#include <string>

using namespace std;

class Pelicula{
private:
  string nombre;
  string dir;
  int dur;
  int calif;

public:
  Pelicula():nombre(""),dir(""),dur(0),calif(0){};
  Pelicula(string nom, string di, int du):nombre(nom),dir(di),dur(du),calif(0){};
  string get_nombre(){return nombre;}
  string get_dir(){return dir;}
  int get_dur(){return dur;}
  int get_calif(){return calif;}
  void set_calif(int c){ calif = c;}
};

#endif
