/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 25-Mayo-24
*/

#ifndef Polimorfismo_h
#define Polimorfismo_h

#include <typeinfo>
#include <iostream>
#include <sstream>
#include <fstream>
#include "Pelicula.h"
#include "Serie.h"
#include "Episodio.h"
#include <stdio.h>
#include "Video.h"
const int MAX_VIDEOS = 100;


// 

class Polimorfismo{
private:
    Video *arrPtrVideos[MAX_VIDEOS]; 
    int cantidad;

public:
    // Constructores
    Polimorfismo();

    // Otra funcion
    void leerArchivo(string _nombre);

    // Setters
    void setPtrVideo(int index, Video *video);
    void setCantidad(int _cantidad);

    // Getters
    Video* getPtrVideo(int index);
    int getCantidad();

    // Otros
    void reporteInventario();
    void reporteCalificacion(double _calificacion);
    void reporteGenero(string _genero);
    void reportePeliculas();
    void reporteSeries();
};

#endif /* Polimorfismo_h */