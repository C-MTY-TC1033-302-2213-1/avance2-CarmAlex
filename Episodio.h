/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 20-Mayo-24
*/

#ifndef Episodio_h
#define Episodio_h
#include <stdio.h>
#include <string>


class Episodio{
private:
	std::string titulo;
	int temporada;
	int calificacion;

public:
	// Constructores
	Episodio();
	Episodio(std::string _titulo, int _temporada, int _calificacion);

	//Setters
	void setTitulo(std::string _titulo);
	void setTemporada(int _temporada);
	void setCalificacion(int _calificacion);

	//Getters
	std::string getTitulo();
	int getTemporada();
	int getCalificacion();

	//Otros
	std::string str();	
};

#endif /* Episodio_h */