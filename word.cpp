/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> wordCount;
    string word;

    cout << "Enter words (type 'end' to stop):\n";

    while(cin >> word && word != "end") {
        wordCount[word]++;
    }

    cout << "\nWord Frequency:\n";
    for(auto pair : wordCount) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}

