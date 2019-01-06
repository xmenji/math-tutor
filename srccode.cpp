#include <iostream>
using namespace std;

int main() {
	int num1,
		num2,
		result;

	//Prompt user for two numbers
	cout << "Enter two numbers to add together\n";
	cout << "First number: ";
	//Get first number
	cin >> num1;
	cin.ignore();
	//Get second number
	cout << "Second number: ";
	cin >> num2;
	//Pause and wait for user to solve answer before pressing [Enter] to see the solution
	cout << "\nPress [Enter] to see the answer.\n";
	cout << num1 << " + " << num2;
	cin.ignore();
	cin.get();
	//Calculate result and display answer to the user.
	result = num1 + num2;
	cout << "\nAnswer: " << result << endl;

	return 0;
}
