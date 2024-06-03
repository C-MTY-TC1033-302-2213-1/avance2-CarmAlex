/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 2-Junio-24
Reflexión:
- ¿Qué aprendí en el desarrollo de esta clase?
Al principio pensé que esta clase también era una clase derivada de Video, o más bien una clase derivada de Serie, pero resultó que no
y que solo era una clase más que podía ser usado por otras clases. 
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