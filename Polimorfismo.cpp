/*
Nombre: Carmen Banda Juarez
Matricula: A01198988
Carrera: ITC
Fecha: 25-Mayo-24
*/
#include "Polimorfismo.h"

using namespace std;

// Constructores
Polimorfismo::Polimorfismo(){
    for (int index = 0; index < MAX_VIDEOS; index++){
        arrPtrVideos[index] = nullptr;
    }

    // Inicializar cantidad de videos
    cantidad = 0;
}

// Otra funcion
void Polimorfismo::leerArchivo(string nombre){
    Serie *arrPtrSeries[50];
    Pelicula *arrPtrPeliculas[50];
    Episodio episodio;
    fstream entrada;
    string row[7];
    string line, word;
    int cantidadPeliculas = 0;
    int cantidadSeries = 0;
    int iR = 0, index;
    double promedio;

    entrada.open(nombre, ios::in);

    while( getline( entrada, line ) ){
        stringstream s(line);
        iR = 0;

        // Ciclo que extrae caracteres de s y los almacena hasta que encuentre un ','
        while ( getline(s, word, ',')){
            row[iR++] = word;
        }

        // Determinar si es Pelicula, Serie o Episodio
        if (row[0] == "P"){
            // se cre un nuevo apuntador
            arrPtrPeliculas[cantidadPeliculas] = new Pelicula( row[1], row[2], stoi(row[3]), row[4], stoi(row[5]), stoi(row[6]));
            // cout << "Pelicula" << arrPeliculas[cantidadPeliculas] -> str() << endl;
            cantidadPeliculas++;
        } else if (row[0] == "S"){
            arrPtrSeries[cantidadSeries] = new Serie( row[1], row[2], stoi(row[3]), row[4], stoi(row[5]));
            // cout
            cantidadSeries++;
        } else if (row[0] == "E"){
            // A que Serie le pertenece el episodio?
            index = stoi(row[1]) - 500;
            // se agrega un episodio con agregaEpisodio y se crea un apuntador
            arrPtrSeries[index] -> agregaEpisodio(*(new Episodio( row[2], stoi(row[3]), stoi(row[4]))));
            // cout
        }
    }

    // se guardan los apuntadores de Pelicula y Serie en arrPtrVideo y se copian
    
    for(int index = 0; index < cantidadSeries; index++){
        promedio = arrPtrSeries[index] -> calculaPromedio();
        arrPtrSeries[index] -> setCalificacion(promedio);
        arrPtrSeries[index] -> calculaDuracion();

        arrPtrVideos[cantidad++] = arrPtrSeries[index];
    }

    for(int index = 0; index < cantidadPeliculas; index++){
        arrPtrVideos[cantidad++] = arrPtrPeliculas[index];
    }

    
   //Desplegar el contenido del arreglo de apuntadores de la clase Base
   /* 
   for(int index = 0; index < cantidad; index++){
    cout << index << " " << arrPtrVideos[index]->str() << endl;
   }
    */
   entrada.close();
}

// Setters
void Polimorfismo::setPtrVideo(int index, Video *video){
    // validar index >=0 && index < cantidad
    if ( index >=0 && index < cantidad){
        // cambiar modificar el apuntador
        arrPtrVideos[index] = video;
    }
}
// cambia el valor del atributo cantidad
// debe ser entre 0 ... MAX_VIDEOS - 1, de lo contrario NO se modifica el valor de cantidad
void Polimorfismo::setCantidad(int _cantidad){
    // validar el valor de _cantidad
    if ( _cantidad >= 0 && _cantidad < MAX_VIDEOS){
        cantidad + _cantidad; 
    }

}

// Getters
Video* Polimorfismo::getPtrVideo(int index){
    // validar que exista el index
    if(index >= 0 && index < cantidad){
        return arrPtrVideos[index];
    }

    // si no existe
    return nullptr;
}
int Polimorfismo::getCantidad(){
    return cantidad;
}

    // Otros
void Polimorfismo::reporteInventario(){
    // Declaracion de contadores
    int contPeli, contSeries;

    // inicializar
    contPeli = 0;
    contSeries = 0;

    //recorrer todo el arreglo de ptr usando un for
    for ( int index = 0; index < cantidad; index++){
        cout << arrPtrVideos[index] -> str() << endl;

        // * indireccion (ptr) genera el objeto
        if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            contPeli++;
        } else if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            contSeries++;
        }
    }

    cout << "Peliculas = " << contPeli << endl;
    cout << "Series = " << contSeries << endl;
}
void Polimorfismo::reporteCalificacion(double _calificacion){
    // contador total
    int total;

    // inicializar el contador
    total = 0;

    for (int index = 0; index < cantidad; index++){
        // verificar si tiene la calificacion == _calificacion
        // si es un apuntador se usa la notacion ->
        if(arrPtrVideos[index] -> getCalificacion() == _calificacion){
            cout << arrPtrVideos[index] -> str() << endl;

            total++;
        }
    }

    // desplegar el total fuera del 'for'

    cout << "Total = " << total << endl;
}

void Polimorfismo::reporteGenero(string _genero){
    // contador
    int total;
    total = 0;

    for (int index = 0; index < cantidad; index++){
        // Desplegar todas las Series y Peliculas que tienen el genero indicado en el parametro de entrada
        if(arrPtrVideos[index] -> getGenero() == _genero){
            cout << arrPtrVideos[index] -> str() << endl; 

            total++;
        }
    }

    cout << "Total = " << total << endl;
}

void Polimorfismo::reportePeliculas(){
    // contador de peliculas
    int cont;
    cont = 0;

    for (int index = 0; index < cantidad; index++){
        if (typeid(*arrPtrVideos[index]) == typeid(Pelicula)){
            cout << arrPtrVideos[index] -> str() << endl;
            cont++;
         }
    }

    if (cont > 0){
        cout << "Total Peliculas = " << cont << endl;
    } else {
        cout << "No peliculas" << endl;
    }
    
}

void Polimorfismo::reporteSeries(){
    // contador de Series
    
    int cont;
    cont = 0;

    for (int index = 0; index < cantidad; index++){
        if (typeid(*arrPtrVideos[index]) == typeid(Serie)){
            cout << arrPtrVideos[index] -> str() << endl;
            cont++;
         }
    }

    if (cont > 0){
        cout << "Total Series = " << cont << endl;
    } else {
        cout << "No series" << endl;
    }
}

