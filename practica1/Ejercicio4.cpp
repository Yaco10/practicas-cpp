#include <iostream>
#include <cmath>  
using namespace std;

int main() {
    float a, b, c, rootOne, rootTwo, disc;
    cout << "Enter a: " << endl;
    cin >> a;
    cout << "Enter b: " << endl;
    cin >> b;
    cout << "Enter c: " << endl;
    cin >> c;  
    
    disc = (b * b) - 4 * a * c; 
    
    if (disc > 0) {
        
        rootOne = (-b + sqrt(disc)) / (2 * a);  
        rootTwo = (-b - sqrt(disc)) / (2 * a);  
        cout << "The roots are: " << rootOne << " and " << rootTwo << endl;
    } 
    else if(disc == 0) {
        rootOne = -b / (2 * a);
        rootTwo = rootOne;  
        cout << "The roots are: " << rootOne << " and " << rootTwo << endl;
    }
    else {
        rootOne = -b / (2 * a);
        rootTwo = sqrt(-disc) / (2 * a);  
        cout << "The roots are complex: " << rootOne << " + " << rootTwo << "i and "
             << rootOne << " - " << rootTwo << "i" << endl;
    }
}
