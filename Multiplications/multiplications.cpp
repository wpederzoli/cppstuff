#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device seed{};
    mt19937 engine{seed()};
    uniform_int_distribution<> dis{1, 10};

    int questionCount{0};

    int correctAnswers{0};
    bool askMore{true};

    while (askMore)
    {
        int a{dis(engine)};
        int b{dis(engine)};

        cout << a << " * " << b << " = ? ";

        int userAnswer{};
        cin >> userAnswer;

        if (userAnswer == (a * b))
        {
            cout << "Correct!\n";
            correctAnswers++;
        }
        else
        {
            cout << "Incorrect!\n";
        }
        questionCount++;
        cout << "Continue (Y/N)?\n";
        char ch{};
        cin >> ch;
        if(ch == 'n' || ch == 'N'){
            askMore = false;
        }
    }

    cout << "You got " << correctAnswers << "/" << questionCount << " correct answers\n";
}