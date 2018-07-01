#include <iostream>
using namespace std;

[[deprecated("DoSomething() is deprecated. Use DoSomethingBetter instead.")]]
void DoSomething(){
    cout << "I'm doing something inefficient. " << '\n';
}

void DoSomethingBetter(){
    cout << "I'm doing something better. " << '\n';
}

int main(){
    DoSomething();
}