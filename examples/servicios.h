#ifndef SERVICIOS_H
#define SERVICIOS_H

#include "streaming.h"

class Servicios {
public:
  Streaming* streamings[4];
  Servicios();
  void muestra_info();

};

Servicios::Servicios(){
  streamings[0] = new Hulu("Hulu Latam", " Mexico", "Hulu");
  streamings[0]->crea_peli("Duro de matar", "luc beso", 140);
  streamings[0]->crea_peli("Openheimer", "Chris Nolan", 240);

  streamings[0]->pelis[1].set_calif(3);
  ((Hulu *)streamings[0])->agrega_canal("televisa");
  ((Hulu *)streamings[0])->agrega_canal("tnt");


  streamings[1] = new HBO("HBO US", "US", "HBO", "plus");
  streamings[1]->crea_peli("El perfecto Asesino", "Luc Besson", 120);
  streamings[1]->crea_peli("Señor de los anillos", "Chris Nolan", 220);

  streamings[1]->pelis[1].set_calif(5);

  streamings[2] = new HBO("HBO Latam", "Mexico", "HBO", "max");
  streamings[2]->crea_peli("Die Hard", "luc beso", 140);
  streamings[2]->crea_peli("Openheimer", "Chris Nolan", 240);

  streamings[2]->pelis[0].set_calif(4);
  streamings[2]->pelis[1].set_calif(3);

  streamings[3] = new Stars("Stars Europa", "UK", "Stars", 1);
  streamings[3]->crea_peli("Harry Potter", "Guillermo del Toro", 140);
  streamings[3]->crea_peli("Lord of the Rings", "Chris Nolan", 240);

  streamings[3]->pelis[0].set_calif(4);
  streamings[3]->pelis[1].set_calif(5);


}

void Servicios::muestra_info(){
  for(int i =0; i < 4; i++){
    cout << streamings[i]->to_string();
  }
}

#endif
