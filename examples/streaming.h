#ifndef STREAMING_H
#define STREAMING_H

#include "pelicula.h"
#include <string>
#include <sstream>

using namespace std;

class Streaming{
//atributos
protected:
		int peli;
		string nombre;
		string pais;
		string compa;
public:
		Pelicula pelis[100];

//metodos
public:
		Streaming():peli(0),nombre(""), pais(""), compa(""){};
		Streaming(string nom, string p, string comp):peli(0), nombre(nom), pais(p), compa(comp){};
		void crea_peli(string, string, int);
		string get_nombre(){return nombre;}
		string get_pais(){return pais;}
		string get_compa(){return compa;}
		string muestra_catalogo();
		virtual string to_string(){ return "";}
};

void Streaming::crea_peli(string nom, string dir, int dur){
	pelis[peli] = Pelicula(nom, dir, dur);
	peli ++ ;
}

string Streaming::muestra_catalogo(){
	std::stringstream aux;
	for (int i = 0; i < peli; i++){
		aux << " " << pelis[i].get_nombre() << " ";
		aux << " director " << pelis[i].get_dir() << " ";
		aux << " dur " << pelis[i].get_dur() << " ";
		aux << " calif " << pelis[i].get_calif() << endl;
	}
	return aux.str();
}

class Hulu : public Streaming{
	private:
		string canales[10];
		int ind;
	public:
		Hulu():Streaming(),ind(0){};
		Hulu(string nom, string p, string comp):Streaming(nom, comp, p), ind(0){};
		void agrega_canal(string);
		string to_string();
};

void Hulu::agrega_canal(string canal){
	canales[ind] = canal;
	ind++;
}

string Hulu::to_string(){
	std::stringstream aux;
	aux << "nombre : " << nombre << endl;
	aux << "pais : " << pais << endl;
	aux << "compañia : " << compa << endl;
	aux << "canales" << endl;
	for (int i = 0; i < peli; i++){
		aux << canales[i] << " ";
	}
	aux << endl << muestra_catalogo();
	return aux.str();
}



class HBO : public Streaming{
	private:
		string plus_max;

	public:
		HBO():Streaming(),plus_max("no definida"){};
		HBO(string nom, string p, string comp, string p_m):Streaming(nom, comp, p), plus_max(p_m){};
		string get_plus_max(){return plus_max;}
		string to_string();
};

string HBO::to_string(){
	std::stringstream aux;
	aux << "nombre : " << nombre << endl;
	aux << "pais : " << pais << endl;
	aux << "compañia : " << compa << endl;
	aux << "tipo de suscripcion : " << plus_max << endl;
	aux << endl << muestra_catalogo();
	return aux.str();
}

class Stars : public Streaming{
	private:
		bool disney;

	public:
		Stars():Streaming(),disney("no definida"){};
		Stars(string nom, string p, string comp, bool d):Streaming(nom, comp, p), disney(d){};
		bool get_disney(){return disney;}
		string to_string();
};

string Stars::to_string(){
	std::stringstream aux;
	aux << "nombre : " << nombre << endl;
	aux << "pais : " << pais << endl;
	aux << "compañia : " << compa << endl;
	aux << "disney : " << disney << endl;
	aux << endl << muestra_catalogo();
	return aux.str();
}
#endif
