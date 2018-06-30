#include <iostream>
using namespace std;

void Swap(int & x, int & y){
    int temp{x};
    x = y;
    y = temp;
}

int main(){
    int a{2};
    int b{5};

    cout << "Before swap: \n";
    cout << "a: " << a << '\n';
    cout << "b: " << b << '\n';

    Swap(a, b);

    cout << "After swap: \n";
    cout << "a: " << a << '\n';
    cout << "b: " << b << '\n';    
}
