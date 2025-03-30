#include <iostream>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 3) {
        cout << "Usage: program <word>" << endl;
        return 1;  
    }

    char letter1 = argv[1][0];
    char letter2 = argv[2][0];
    string word;

    cout << "Enter a word: " << endl;
    cin >> word;
    for (int i = 0; i < word.length(); i++) {
        if(word[i] == letter1){
            word[i] = letter2;
        }
    }
    cout << "New Word is: " << word << endl;
}
