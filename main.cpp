#include <iostream>
#include<stack>

using namespace std;

void  cargar(stack<int> &p1){
    char resp;
    int valor;
    do{
        cout<<"ingrese un valor"<<endl;
        cin>>valor;
        p1.push(valor);
        cout<<"desea ingresar otro valor"<<endl;
        cin>>resp;
    }while(resp=='s');
}

int comparar_pila(stack<int>p1,stack <int>p2){
    int numero1,numero2;

    while(!p1.empty() || !p2.empty()){
    numero1=p1.top();
    numero2=p2.top();
    if (numero1 < numero2){
        return -1;
        cout<<"entro 1";
    }else if(numero1 > numero2){
        return 1;
        cout<<"entro";
    }
    p1.pop();
    p2.pop();
}
return 0;
}
int main()
{
    stack<int> p1,p2;
    int valor;
    cout <<"cargando pila 1:"<<endl;
    cargar(p1);
    cout<<"cargando pila 2:"<<endl;
    cargar(p2);
    cout<<"el valor es :"<<comparar_pila(p1,p2);
    return 0;
}
