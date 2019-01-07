#include <iostream> 
using namespace std;

int main() {
	int num1,
		num2,
		userAnswer,
		result;

	//Prompt user for two numbers
	cout << "Enter two numbers to add together\n";

	//Get first number
	cout << "First number: ";
	cin >> num1;
	cin.ignore();

	//Get second number
	cout << "Second number: ";
	cin >> num2;

	//get user input
	cout << "\nInput answer and press [Enter] to check.\n";
	cout << num1 << " + " << num2 << " = ";
	cin >> userAnswer;

	//Calculate result and display answer to the user.
	result = num1 + num2;

	//compare user answer to result
	if (userAnswer == result)
		cout << "\nCongratulations! The answer " << userAnswer << " is correct.\n";
	else
		cout << "\nIncorrect.\nAnswer: " << result << endl;

	return 0;
}
