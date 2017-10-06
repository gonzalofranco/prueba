#include <iostream>
#include "electrodomestico.h"
#include"cocina.h"
using namespace std;

int main()
{

   float peso;
   float precio;
   char consumo;
   string color;
//aqui se ingresa los datos con el que se crean los objetos
    cout<<"ingrese el peso :";
    cin>>peso;
    cout<<"ingrese color :";
    cin>>color;
    cout<<"ingrese consumo energetico :";
    cin>>consumo;
    cout<<"ingrese precio :";
    cin>>precio;
    electrodomestico elec1(precio,color,consumo,peso);//se crea un objeto del tipo electrodomesticos
    electrodomestico elec2(12);//se cre un objeto del tipo electrodomesticos con los valores por defecto excepto el precio qu es 12
    cout<<"peso :"<<elec1.getter_peso()<<endl;
    cout<<"color :"<<elec1.getter_color()<<endl;
    cout<<" consumo energetico :"<<elec1.getter_consumo_energetico()<<endl;
    cout<<"precio :"<<elec1.getter_precio()<<endl;
    cout<<"peso :"<<elec2.getter_peso()<<endl;
    cout<<"color :"<<elec2.getter_color()<<endl;
    cout<<"energetico :"<<elec2.getter_consumo_energetico()<<endl;
    cout<<"precio :"<<elec2.getter_precio()<<endl;


    cocina coc1();
    cocina coc(10,"verde");
    electrodomestico *p=&coc;
    cout<<"alto :"<<coc.getter_alto();
    cout<<"color :"<<p->getter_color();
    return 0;

}
