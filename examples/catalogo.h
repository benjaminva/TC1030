#ifndef CATALOGO_H
#define CATALOGO_H
#include <iostream>
#include "contenido.h"
#include <string>


class Catalogo{

private:
  Contenido *contenidos[1000];
  int indice;

public:
  Catalogo():indice(0){};
  void agrega_contentido(Contenido*);
  void filtra_por_nombre(string);
  void filtra_por_rating(float);

};

void Catalogo::agrega_contentido(Contenido* cont){
  contenidos[indice] = cont;
  indice ++;
}

void Catalogo::filtra_por_rating(float r){
  for (int i = 0; i < indice; i ++){
    if(contenidos[i]->get_rating() > r){
      std::cout << contenidos[i]->to_string();
    }
  }
}

void Catalogo::filtra_por_nombre(string nom){
  for (int i = 0; i < indice; i ++){
    if(contenidos[i]->get_nombre() == nom){
      std::cout << contenidos[i]->to_string();
    }
  }
}

#endif
