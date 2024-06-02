/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 25-Mayo-24
*/

#include "Video.h"

//Constructores
Video::Video(){
	iD = "A01198988";
	titulo = "Carmen";
	genero = "Si";
	duracion = 1000;
	calificacion = 100;
}

Video::Video(string _iD, string _titulo, int _duracion, string _genero, double _calificacion) {
	iD = _iD;
	titulo = _titulo;
	genero = _genero;
	duracion = _duracion;
	calificacion = _calificacion;
}

//Setters
void Video::setID(string _iD) {
	iD = _iD;
}
void Video::setTitulo(string _titulo) {
	titulo = _titulo;
}
void Video::setGenero(string _genero) {
	genero = _genero;
}
void Video::setDuracion(int _duracion) {
	duracion = _duracion;
}
void Video::setCalificacion(double _calificacion) {
	calificacion = _calificacion;
}

//Getters
string Video::getID() {
	return iD;
}
string Video::getTitulo() {
	return titulo;
}
string Video::getGenero() {
	return genero;
}
int Video::getDuracion() {
	return duracion;
}
double Video::getCalificacion() {
	return calificacion;
}

//Otros
string Video::str() {
	return iD + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion);
}