/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 20-Mayo-24
*/

#ifndef Pelicula_h
#define Pelicula_h

#include <string>
#include <iostream>
#include "Video.h"
using namespace std;

//Clase Pelicula es derivada de Video
class Pelicula : public Video{
    private:
    int oscares;

    public:
    //Constructores
    Pelicula();
    Pelicula(string _iD, string _titulo, int _duracion, string _genero, double _calificacion, int _oscares);

    //Setters - Modificadores
    void setOscares(int _oscares);

    //Getters - Acceso
    int getOscares();

    //Otros
    string str();
};

#endif /* Pelicula_h */