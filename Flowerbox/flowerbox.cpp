#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << "Enter a message: ";
    string message{};
    getline(cin, message);

    cout << "\n";
    string flowerLine(message.length() + 4, '*');

    cout << "\n";
    
    cout << flowerLine << "\n";
    cout << "* " << message << " *\n";
    cout << flowerLine << "\n";
}