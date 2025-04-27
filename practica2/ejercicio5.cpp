#include <iostream>
using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

struct Lista{
    Nodo *cabeza;
    Nodo *cola;

    Lista() : cabeza(nullptr), cola(nullptr) {}
};

// Agregar al final de manera eficiente
void agregarNodo(Lista& lista, int valor) {
    Nodo* nuevo = new Nodo{valor, nullptr};
    if (lista.cabeza == nullptr) {
        lista.cabeza = nuevo;
        lista.cola = nuevo;
    } else {
        lista.cola->siguiente = nuevo;
        lista.cola = nuevo;
    }
}

// Obtener el primer elemento
int obtenerPrimero(const Lista& lista) {
    if (lista.cabeza != nullptr) {
        return lista.cabeza->dato;
    } else {
        throw runtime_error("Lista vacia");
    }
}

// Obtener el ultimo elemento
int obtenerUltimo(const Lista& lista) {
    if (lista.cola != nullptr) {
        return lista.cola->dato;
    } else {
        throw runtime_error("Lista vacia");
    }
}

void liberarMemoria(Lista& lista) {
    Nodo* actual = nullptr;
    while(lista.cabeza != nullptr){
        actual = lista.cabeza;
        lista.cabeza = lista.cabeza->siguiente;
        delete actual;
        actual = nullptr;
    
    }
    lista.cola=nullptr;
}

int main() {
    Lista miLista;

    agregarNodo(miLista, 10);
    agregarNodo(miLista, 20);
    agregarNodo(miLista, 30);

    cout << "Primero: " << obtenerPrimero(miLista) << endl;
    cout << "Ultimo: " << obtenerUltimo(miLista) << endl;

    liberarMemoria(miLista);

    return 0;
}

