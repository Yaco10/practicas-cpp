#include <iostream>
using namespace std;

struct Nodo
{
    int valor;
    Nodo* siguiente;
};

void agregarNodoPrincipio(int valor, Nodo*& cabeza) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->valor = valor;
    nuevoNodo->siguiente = cabeza;
    cabeza = nuevoNodo;
    
}

void borrarNodo(int valor, Nodo*& cabeza){
    if(cabeza != nullptr){
        Nodo* aux = cabeza;
        Nodo* auxAnterior = nullptr;
        while(aux != nullptr && aux->valor!=valor){
            auxAnterior = aux;
            aux = aux->siguiente;
        }
        if(aux!=nullptr){
            if(auxAnterior == nullptr){
                cabeza = aux->siguiente;
            }
            else{
                auxAnterior->siguiente = aux->siguiente;
            }
            delete aux;
            aux = nullptr;
        }
    }
}

void agregarNodoFinal(int valor, Nodo*& cabeza) {
    Nodo* nuevoNodo = new Nodo;
    nuevoNodo->valor = valor;
    nuevoNodo->siguiente = nullptr;
    if(cabeza == nullptr){
        cabeza = nuevoNodo;
    }
    else{
        Nodo* ptrAux = cabeza;
        while(ptrAux->siguiente != nullptr){
            ptrAux = ptrAux->siguiente;
        }
        ptrAux->siguiente = nuevoNodo;
    }
    
} 

int main()
{
    Nodo* cabeza = nullptr;

 
    agregarNodoPrincipio(3,cabeza);
    agregarNodoPrincipio(2,cabeza);
    agregarNodoPrincipio(1,cabeza);
    borrarNodo(2,cabeza);
   

    Nodo* mostrar = cabeza;
    while( mostrar != nullptr ){
        cout << mostrar->valor << " ";
        mostrar = mostrar->siguiente;
       
        
    }

    while(cabeza != nullptr){
        Nodo* temp = cabeza;
        cabeza = cabeza->siguiente;
        delete temp;
    }

   cout << cabeza;
    


    return 0;
}
