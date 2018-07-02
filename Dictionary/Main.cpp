#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    map<string, string> italianDictionary{
        {"casa", "home"},
        {"gatto", "cat"},
        {"tavolo", "table"}
    };

    auto [pos, success] = italianDictionary.insert({"cane", "dog"});
    if(success){
        cout << " Insertion OK. \n";
    }

    for(const auto& [italian, english] : italianDictionary){
        cout << ' ' << italian << " : " << english << '\n';
    }
}