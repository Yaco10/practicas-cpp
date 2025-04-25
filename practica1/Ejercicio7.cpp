#include <iostream>
using namespace std;

void funcion(int arr[], int tamaño){
    int majorAmount = 0;
    int majorNum;
    for(int i=0; i < tamaño; i++){
        int currentAmount = 0;
        for(int j=0; j < tamaño; j++){
            if(arr[i] == arr[j]){
                currentAmount++;
            }
        }
        if(currentAmount > majorAmount){
            majorNum = arr[i];
            majorAmount = currentAmount;
        }
    }
    if(majorAmount >= (tamaño/2)){
        cout << majorNum <<" es mayoria su cantiad es: " << majorAmount << " de un arreglo de longitud " << tamaño << " " << endl;
    }
    else {
        cout << majorNum <<" no es mayoria su cantiad es: " << majorAmount << " de un arreglo de longitud " << tamaño << " " << endl;
    }
}

int main() {
    int arr[] = {1, 1, 1, 4, 5};
    int tamaño = sizeof(arr) / sizeof(arr[0]);  
    funcion(arr, tamaño);
    return 0;
}