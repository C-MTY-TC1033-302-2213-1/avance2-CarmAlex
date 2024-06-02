/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 25-Mayo-24
*/

#ifndef Video_h
#define Video_h

#include <stdio.h>
#include <string>
using namespace std;

class Video{

protected:
	string iD;
	string titulo;
	int duracion;
	string genero;
	double calificacion;

public:
	//Constructores
	Video();
	Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacion);

	//Setters
	void setID(string _iD);
	void setTitulo(string _titulo);
	void setGenero(string _genero);
	void setDuracion(int _duracion);
	void setCalificacion(double _calificacion);

	//Getters
	string getID();
	string getTitulo();
	string getGenero();
	int getDuracion();
	double getCalificacion();

	//Otros
	virtual string str();
};

#endif /* Video_h */