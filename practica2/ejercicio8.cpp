#include <iostream>
using namespace std;

int busquedaBinaria(int arr[], int n, int elemento){
    int menor = 0;
    int mayor = n;
    while(menor < mayor){
        int mid = (menor + mayor) / 2;
        if(arr[mid] == elemento) return mid;

        else if(elemento < arr[mid]){
            mayor= mid -1;
        }
        else {
            menor= mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    
}
