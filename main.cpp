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
