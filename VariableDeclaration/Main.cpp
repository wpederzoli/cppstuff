#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void print(const string &message, const vector<string> &v)
{
    cout << ' ' << message << ": ";
    for (const auto &s : v)
    {
        cout << s << ", ";
    }
    cout << '\n';
}

int main()
{
    vector<string> names{"Esther", "Frida", "Will"};
    print("Before", names);

    if (const auto it = find(begin(names), end(names), "Esther");
        it != end(names))
    {
        *it = "***";
    }

    print("After", names);
}