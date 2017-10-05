#include "libro.h"
libro::libro(string titulo,vector<string> &autor,string editorial,int anio)
{
    this->titulo=titulo;
    this->autor=autor;
    this->editorial=editorial;
    this->anio=anio;
}
void libro::setlibro(){
    cout<<"Titulo :"<<this->titulo<<endl;
    cout<<"Editorial :"<<this->editorial<<endl;
    cout<<"autores :"<<endl;
    for(int i=0;i<autor.size();i++){
        cout<<autor[i]<<endl;
    }
    cout<<"Año de publicacion  :"<<this->anio<<endl;
}
