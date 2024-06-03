/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 25-Mayo-24
*/

#ifndef Serie_h
#define Serie_h

// para Herencia
#include "Video.h"
// para Composicion
#include "Episodio.h"
#include <string>

using namespace std;

class Serie : public Video{
private:
    Episodio episodios[5];
    int cantidad;

public:
    //Constructores
    Serie();

    Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacion);
    void calculaDuracion();

    //Setters
    void setEpisodio(int posicion, Episodio episodio);
    void setCantidad(int _cantidad);

    //Getters
    Episodio getEpisodio(int posicion); //como es un arreglo se necesita la posicion en el parentesis
    int getCantidad();

    //Otros
    double calculaPromedio();
    string str();
    void agregaEpisodio(Episodio episodio);
};

#endif /* Serie_h */