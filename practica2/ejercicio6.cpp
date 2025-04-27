#include <iostream>
#include <string>
using namespace std;

// Método para verificar si un número existe en el arreglo (implementación de búsqueda binaria)
bool existe(int arr[], int size, int num) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        // Si el número está en el medio, ya existe
        if (arr[mid] == num) {
            return true;
        }

        // Si el número es mayor, busca en la mitad derecha
        if (arr[mid] < num) {
            left = mid + 1;
        }
        // Si el número es menor, busca en la mitad izquierda
        else {
            right = mid - 1;
        }
    }
    return false;
}

// Método para cargar los números en el nuevo arreglo, asegurando que no se repitan
void cargarArreglo(char* argv[], int* arreglo, int& size) {
    for (int i = 1; argv[i] != nullptr; i++) { // Empieza en 1 para omitir el nombre del programa
        int num = stoi(argv[i]); // Convierte el argumento a número entero
        
        // Verifica si el número ya está en el arreglo
        if (existe(arreglo, size, num)) continue;

        int pos = 0;
        while(pos < size && arreglo[pos] < num) pos++; // Encuentra la primera posición libre donde arreglo[pos] < num)

        for(int j=size-1; j>pos; j--){
            arreglo[j] = arreglo[j-1];
        }

        arreglo[pos] = num;
        size++;
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Debes pasar al menos un número como argumento." << endl;
        return 1;
    }

    int arreglo[100]; // Limita el tamaño del arreglo (puedes ajustarlo)
    int size = 0;

    // Llama al método para cargar los números en el arreglo
    cargarArreglo(argv, arreglo, size);

    // Imprime el arreglo con los números cargados
    cout << "Números cargados en el arreglo: ";
    for (int i = 0; i < size; i++) {
        cout << arreglo[i] << " ";
    }
    cout << endl;

    return 0;
}
