#include <iostream>
using namespace std;

// Nodo de la lista enlazada
class Nodo {
public:
    int valor;
    Nodo* siguiente;

    Nodo(int valor) {
        this->valor = valor;
        this->siguiente = nullptr;
    }
};

// Método para insertar un número en la lista manteniendo el orden
Nodo* insertarOrdenado(Nodo* cabeza, int valor) {
    Nodo* nuevoNodo = new Nodo(valor);
    
    // Caso de lista vacía
    if (cabeza == nullptr) {
        nuevoNodo->siguiente = cabeza;
        cabeza = nuevoNodo;
    } else {
        Nodo* actual = cabeza;
        Nodo* anterior = nullptr;
        
        // Buscar el lugar adecuado para insertar el nuevo nodo
        while (actual != nullptr && actual->valor < valor) {
            anterior = actual;
            actual = actual->siguiente;
        }
        
        // Si el valor no existe en la lista, insertamos
        if (actual == nullptr || actual->valor != valor) {
            if (anterior == nullptr) {
                // Insertar al principio
                nuevoNodo->siguiente = cabeza;
                cabeza = nuevoNodo;
            } else {
                // Insertar entre dos nodos
                anterior->siguiente = nuevoNodo;
                nuevoNodo->siguiente = actual;
            }
        } else {
            
            delete nuevoNodo;  // Evitar la memoria desperdiciada
            return cabeza;
        }
    }
    
    return cabeza;  
}

// Método para mostrar la lista
void mostrarLista(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        cout << actual->valor << " ";
        actual = actual->siguiente;
    }
    cout << endl;
}

void liberarMemoria(Nodo* cabeza) {
    Nodo* actual = cabeza;
    while (actual != nullptr) {
        Nodo* siguiente = actual->siguiente;
        delete actual;  // Liberar el nodo actual
        actual = siguiente;  // Avanzar al siguiente nodo
    }
}

int main(int argc, char* argv[]) {
    Nodo* cabeza = nullptr;

    // Validar si se pasaron argumentos
    if (argc < 2) {
        cout << "Por favor, ingrese al menos un número como argumento." << endl;
        return 1;
    }

    // Insertamos los números pasados como argumentos
    for (int i = 1; i < argc; i++) {
        int numero = atoi(argv[i]);  // Convertir el argumento a entero
        cabeza = insertarOrdenado(cabeza, numero);
    }

    // Mostramos la lista final
    mostrarLista(cabeza);
    liberarMemoria(cabeza);
    return 0;
}