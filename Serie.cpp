/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 2-Junio-24
Reflexión:
- ¿Qué aprendí en el desarrollo de esta clase?
En esta clase había dejado de lado la clase str() porque no estaba muy segura de cómo continuar el código, ya que una parte de mi decía:
"has un loop dentro del return", lo cual pues no es posible y si hubiera un return dentro del for pues también solo se cancelaría, así que 
pensé que la mejor manera de poder poner una cierta cantidad de strings 
*/

#include "Serie.h"


//Constructores
Serie::Serie() : Video(){
    //Solo inicializar cantidad
    cantidad = 0;
}

Serie::Serie(string _iD, string _titulo, int _duracion, string _genero, double _calificacion) : Video(_iD, _titulo, _duracion, _genero, _calificacion){
    // ya todo deberia de estar inicializado
}

void Serie::calculaDuracion(){
    int acum = 0;

    for (int index = 0; index < 5; index++){
        acum += episodios[index].getTemporada();
    }
    
    duracion = acum;

}

//Setters
void Serie::setEpisodio(int posicion, Episodio episodio){
    //primero validar que exista ese episodio
    if(posicion < cantidad && posicion >= 0){
        episodios[posicion] = episodio;
    }
}
    //Cambiar el valor del atributo con el nuevo valor recibido
void Serie::setCantidad(int _cantidad){
    cantidad = _cantidad; 
}

//Getters
Episodio Serie::getEpisodio(int posicion){ //como es un arreglo se necesita la posicion en el parentesis
    // Crea un objeto del tipo Episodio y lo inicializa con el Constructor Default
    Episodio epi;

    // Validar que exista el episodio solicitado
    if(posicion >= 0 && posicion < cantidad){
        return episodios[posicion];
    }

    // Si no existe se retorna un Episodio default
    return epi;

}
// retorna el valor del atributo cantidad
int Serie::getCantidad(){
    return cantidad;
}

//Otros
double Serie::calculaPromedio(){
    double acum = 0;

    for(int index = 0; index < cantidad; index++){
        acum += episodios[index].getCalificacion();
    }

    //Validar que tenga episodios
    if(cantidad > 0){
        return acum / cantidad;
    }else{
        return 0;
    }
}

string Serie::str(){
    // contador
    string cont = "";
    for (int index = 0; index < cantidad; index++){
        cont += getEpisodio(index).str() + '\n';
    }

    return iD + ' ' + titulo + ' ' + to_string(duracion) + ' ' + genero + ' ' + to_string(calificacion) + ' ' + to_string(cantidad) 
    + '\n' + cont;
    // le falta desplegar los episodios que hayan 
}

// agrega un episodio solo si existe espacio
void Serie::agregaEpisodio(Episodio episodio){
    if(cantidad < 5){
        episodios[cantidad++] = episodio; //primero se uso el valor de cantidad que luego se implemento
    }
}