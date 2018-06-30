#include <iostream>
#include <string>
using namespace std;

void Underline(string const& s){
    string line(s.length(), '=');

    cout << s << '\n';
    cout << line << '\n';
}

int main(){
    string word{};
    cout << "Write a word: ";
    cin >> word;

    Underline(word);
}