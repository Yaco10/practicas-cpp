#include <iostream>
using namespace std;

int main() {
    int mount, timeLimit;
    float percMonth, profitability;
    
    cout << "Enter mount: " << endl;
    cin >> mount;
    cout << "Enter timeLimit (in days): " << endl;
    cin >> timeLimit;
    
    float timeInMonths = timeLimit / 30.0;  

    percMonth = 35.0 / 12.0;

    profitability = 0;

    for (int i = 0; i < timeInMonths; i++) {
        float profMonth = (mount + profitability) * percMonth / 100;
        profitability += profMonth; 
    }

    cout << "The profitability is: " << profitability << endl;
    return 0;
}
