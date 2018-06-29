#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter your name ";
    string name{};
    cin >> name;

    cout << "\n";
    cout << "Hi " << name << "\n";
}