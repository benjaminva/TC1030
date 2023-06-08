#ifndef CONTENIDO_H
#define CONTENIDO_H
#include <sstream>
#include <iostream>
#include <string>


using namespace std;

class Contenido {

protected:

  float rating;
  string tipo;
  string nombre;

public:
  Contenido(string nom, float r, string t): nombre(nom), rating(r), tipo(t){};
  virtual string to_string() = 0;
  float get_rating(){return rating;}
  string get_nombre(){return nombre;}
};

class Pelicula : public Contenido{

public:
    Pelicula(string nom, float r): Contenido(nom, r, "Pelicula"){};
    string to_string();
};

string Pelicula::to_string(){
  stringstream aux;
  aux << "nombre " << nombre <<  " rating " << rating << " tipo "
  << tipo << "\n";
  return aux.str();
}


class Serie : public Contenido{

private:
  int capitulos;
  bool terminada;
public:
  Serie(string nom, float r, int c, bool ter): Contenido(nom, r, "Serie"),
                                              capitulos(c),
                                              terminada(ter){};

  string to_string();

};

string Serie::to_string(){
  stringstream aux;
  aux << "nombre " << nombre <<  " rating " << rating << " tipo "
      << tipo << " capitulos " << capitulos << " terminada "
      <<  terminada << "\n";
  return aux.str();
}

#endif
