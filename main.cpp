int main()
{
    srand(time(0));
    list<Heladera> lista_heladera;
    list<cocina> lista_cocina;
    list<lavarropa> lista_lavarropa;
    queue <int> cola;
    cargar_lista(lista_heladera,lista_cocina,lista_lavarropa,cola);
    mostrar_lista(lista_heladera,lista_cocina,lista_lavarropa,cola);
    return 0;
}
void mostrar_lista(list<Heladera> &lista_heladera,list<cocina> &lista_cocina,list<lavarropa> &lista_lavarropa,queue<int> &cola){

        for(int i=0;i<10;i++){
            switch(cola.front()){
            case 0:{
                Heladera hel;
                hel=lista_heladera.front();
                lista_heladera.pop_front();
                cout<<"Heladera :";
                cout<<"Tipo :"<<hel.getter_tipo();
                cout<<", Capacidad :"<<hel.getter_capacidad()<<"L, ";
                mostrar(&hel);


            }break;
            case 1:{
                cocina coc;
                coc=lista_cocina.front();
                lista_cocina.pop_front();
                cout<<"Cocina :";
                cout<<"Alto :"<<coc.getter_alto();
                cout<<"cm, Ancho :"<<coc.getter_ancho();
                cout<<"cm, Profundidad :"<<coc.getter_profundidad();
                cout<<"cm, Alimentacion :"<<coc.getter_alimentacion();
                mostrar(&coc);
            }
            break;
            case 2:{
                lavarropa lav;
                lav=lista_lavarropa.front();
                lista_lavarropa.pop_front();
                cout<<"Lavarropa : ";
                cout<<"Carga de lavarropa :"<<lav.getter_carga_en_kilogramo()<<", ";
                mostrar(&lav);
            }
                break;
            }
            cola.pop();
    }}