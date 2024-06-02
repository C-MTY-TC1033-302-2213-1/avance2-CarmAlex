/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 20-Mayo-24
*/

#include "Pelicula.h"
    
//Constructores
Pelicula::Pelicula():Video(){
    oscares = 100;
}

Pelicula::Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares):Video(_iD, _titulo, _duracion, _genero, _calificacion)
{
    oscares = _oscares;
}

//Setters - Modificadores
void Pelicula::setOscares(int _oscares){
    oscares = _oscares;
}

//Getters - Acceso
int Pelicula::getOscares(){
    return oscares;
}

//Otros
string Pelicula::str(){
    // tenemos accesso directo a los atributos de la clse Padre
    return iD + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion) + ' ' + to_string(oscares) ;
}