#include <iostream>
#include <random>
using namespace std;

int main()
{
    random_device seed{};
    mt19937 engine{seed()};
    uniform_int_distribution<> dis{1, 10};

    constexpr int questionCount{3};

    int correctAnswers{0};

    for (int i = 0; i < questionCount; i++)
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
    }

    cout << "You got " << correctAnswers << "/" << questionCount << " correct answers\n";
    
}