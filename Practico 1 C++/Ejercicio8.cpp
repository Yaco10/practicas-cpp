#include <iostream>
using namespace std; 

int main(){
    int amount;
    cout << "Ingrese la cantidad de elementos" << endl;
    cin >> amount;
    int* arr = new int[amount];

    cout << "Ingrese los numeros con un espacio" << endl;
    for (int i = 0; i < amount; i++)
    {
        cin >> arr[i];
    }

    for (int i = amount - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
    return 0;
}