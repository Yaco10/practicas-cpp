#include <iostream>
using namespace std;

int main(){
    string wordOne, wordTwo, result;
    cout << "Enter a word one: " << endl;
    cin >> wordOne; 
    cout << "Enter a word one: " << endl;
    cin >> wordTwo;
    result = wordOne + " " + wordTwo;
    cout << "The result is: " << result << endl;
    return 0;
}