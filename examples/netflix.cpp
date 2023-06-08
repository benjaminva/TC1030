#include "catalogo.h"
#include "contenido.h"


int main(){

  Catalogo cat;

  Contenido * s  = new Serie("Serie 1", 6.7, 16, 0);
  Contenido * p  = new Pelicula("Pelicula 1", 9.7);

  cat.agrega_contentido(s);
  cat.agrega_contentido(p);

  cat.filtra_por_rating(7);
  cat.filtra_por_nombre("Serie 1");

}
