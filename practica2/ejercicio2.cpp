#include <iostream>
#include <random>
using namespace std;

int* randomNum(int n){
    int* arreglo = new int[n];
    std::random_device rd;
    std::mt19937 gen(rd());  // Mersenne Twister, un generador de alta calidad
    
    // Definir un rango de números aleatorios (por ejemplo, de 1 a 100)
    std::uniform_int_distribution<> distrib(1, 100);

    for(int i = 0; i < n; i++){
        int random_number = distrib(gen);
        arreglo[i] = random_number;
    }

    return arreglo;
}

int main()
{
    int n;
    cout << "Ingrese el tamanio del arreglo: ";
    cin >> n;

    int* randomArray = randomNum(n);

    for(int i = 0; i < n; i++){
        cout << randomArray[i] << " ";
    }

    delete[] randomArray;
    randomArray = nullptr;
    cout << randomArray;
    return 0;
}

// 