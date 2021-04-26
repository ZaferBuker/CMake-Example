#include <iostream>
#include <string>
using namespace std;

int main()

{
	string GetFact;
	int UserInput, UserSecondInput;
	bool EnteredValidValue = false;
	int ValidNumbers[4] = { 1, 2, 3, 4 };		// Only these 4 valid numbers will be accepted.

	cout << "I) What is the weather like today?\n";
	cout << "\t1: Sunny\n\t2: Rainy\n\t3: Foggy\n\t4: Snowy\n";
	cout << "\tEnter a number that suits you: ";
	cin >> UserInput;

	while (!cin.good()) {						// Checks whether the type of userinput is int or not. If yes, true boolean value will be return. If no, false boolean value will be return.
		cin.clear();							// Clears the failure messages.
		cin.ignore(INT_MAX, '\n');				// Defines how many characters will be ignored after the first number of input.
		cout << "\tPlease enter a number: ";
		int UserSecondInput;					// Requires a new valid input.
		cin >> UserSecondInput;
		UserInput = UserSecondInput;			// Assigns new valid input to the first one.
	}											// The loop will require a new entry until it finds the valid input type.

	for (int counter = 0; counter < ValidNumbers[counter]; counter++) {  // Checks whether the entered valid input exists in validnumbers.
		if (UserInput == ValidNumbers[counter]) {
			EnteredValidValue = true;									// If entered valid input exists in validnumbers, it will allow to go to the suggestion loop.
		}
	}

	if (EnteredValidValue == true) {
		switch (UserInput) {					// Switch-case is used to make a suggestion according to the input.
		case 1: {
			cout << "\t\tGo out and enjoy the nice weather.\n";
			break;
		}
		case 2: {
			cout << "\t\tDon't forget to take an umbrella with you.\n";
			break;
		}
		case 3: {
			cout << "\t\tTake care to drive your vehicle at low speeds.\n";
			break;
		}
		case 4: {
			cout << "\t\tWear thick clothes and go out to build a snowman!\n";
			break;
		}
		}

	}
	else if (EnteredValidValue == false) {
		cout << "\t\tNo correct number is entered, next question!";
	}

	cout << "\n\n\nII) Tell me an interesting fact.: ";
	cin >> GetFact;

	return 0;
}
