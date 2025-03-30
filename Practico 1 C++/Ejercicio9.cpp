#include <iostream>
using namespace std; 

void isPrime(int num){
    bool isPrime = true;
    for(int i=2; i<num; i++){
        if(num % i == 0){
            isPrime = false;
        }
    }
    if(isPrime == true){
        cout << "es primo" << endl;
    }
    else{
        cout << "No es primo" << endl;
    }
}

int main(){
    int num = 7;
    isPrime(num);
    return 0;
}