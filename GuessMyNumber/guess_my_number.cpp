#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(0));
	int attempts = 0;

	int number = rand() % 100 + 1;

	cout << "Guess a number between 1 - 100 \n";
	int guess;
	cin >> guess;
	while (number != guess) {
		attempts++;
		if (guess > number) {
			cout << "Too high m8!\n";
		}
		else {
			cout << "Too low bro!\n";
		}
		cout << "Try again\n";
		cin >> guess;
	}
	cout << "Great job! It only took you " << attempts << " attempts...\n";
	cin.ignore();
	cin.ignore();

	return 0;
}