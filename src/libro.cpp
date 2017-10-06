#include "libro.h"

libro::libro(string titulo,string autor,string editorial,int anio)
{
    this->titulo=titulo;
    this->autor=autor;
    this->editorial=editorial;
    this->anio=anio;
}
void libro::setlibro(){
    cout<<"Titulo :"<<this->titulo<<endl;
    cout<<"Autor :"<<this->autor<<endl;
    cout<<"Editorial :"<<this->editorial<<endl;
    cout<<"Año de publicacion"<<this->anio<<endl;
}
