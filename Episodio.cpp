/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 20-Mayo-24
*/

#include "Episodio.h"
using namespace std;

Episodio::Episodio(){
    titulo = "Algo";
    temporada = 0;
    calificacion = 0;
}
Episodio::Episodio(string _titulo, int _temporada, int _calificacion){
    titulo = _titulo;
    temporada = _temporada;
    calificacion = _calificacion;
}

//Setters
void Episodio::setTitulo(string _titulo){
    titulo = _titulo;
}
void Episodio::setTemporada(int _temporada){
    temporada = _temporada;
}
void Episodio::setCalificacion(int _calificacion){
    calificacion = _calificacion;
}


//Getters
string Episodio::getTitulo(){
    return titulo;
}
int Episodio::getTemporada(){
    return temporada;
}
int Episodio::getCalificacion(){
    return calificacion;
}

//Otros
string Episodio::str(){
    return titulo + ' ' + to_string(temporada) + ' ' + to_string(calificacion);
}