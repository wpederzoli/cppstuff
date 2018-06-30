#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s{};
    cout << "Please enter a string: ";
    cin >> s;

    cout << '\n';
    for(char c : s){
        char u = toupper(c);
        cout << u;
    }
    cout << '\n';
}