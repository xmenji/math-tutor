#include <iostream> 
#include <iomanip>
using namespace std;

int main() {

	const int ADDITION = 1,
		SUBTRACTION = 2,
		MULTIPLICATION = 3,
		DIVISION = 4,
		USER_QUIT = 5;

	int userChoice,
		num1,
		num2,
		userAnswer,
		result;

	do {
		cout << setw(50) << "Select an option.\n";
		cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Quit Program\n\n";
		cout << "Enter choice: ";
		cin >> userChoice;

		switch (userChoice) {
			case ADDITION: 
				//Get first number
				cout << "First number: ";
				cin >> num1;
				cin.ignore();
				//Get second number
				cout << "Second number: ";
				cin >> num2;
				//Calculate result 
				result = num1 + num2;

				cout << "\nInput answer and press [Enter] to check.\n";
				cout << num1 << " + " << num2 << " = ";

				//get user input
				cin >> userAnswer;

				//compare user answer to result
				if (userAnswer == result)
					cout << "\nCongratulations! The answer " << userAnswer << " is correct.\n\n";
				else
					cout << "\nIncorrect.\nAnswer: " << result << endl;
				break;

			case SUBTRACTION:
				//Get first number
				cout << "First number: ";
				cin >> num1;
				cin.ignore();
				//Get second number
				cout << "Second number: ";
				cin >> num2;
				//Calculate result
				result = num1 - num2;

				cout << "\nInput answer and press [Enter] to check.\n";
				cout << num1 << " - " << num2 << " = ";

				//get user input
				cin >> userAnswer;

				//compare user answer to result
				if (userAnswer == result)
					cout << "\nCongratulations! The answer " << userAnswer << " is correct.\n\n";
				else
					cout << "\nIncorrect.\nAnswer: " << result << endl;
				break;

			case MULTIPLICATION:
				//Get first number
				cout << "First number: ";
				cin >> num1;
				cin.ignore();
				//Get second number
				cout << "Second number: ";
				cin >> num2;
				//Calculate result
				result = num1 * num2;

				cout << "\nInput answer and press [Enter] to check.\n";
				cout << num1 << " * " << num2 << " = ";

				//get user input
				cin >> userAnswer;

				//compare user answer to result
				if (userAnswer == result)
					cout << "\nCongratulations! The answer " << userAnswer << " is correct.\n\n";
				else
					cout << "\nIncorrect.\nAnswer: " << result << endl;
				break;

			case DIVISION:
				int remainder,
					userRemainder;
				//Get first number
				cout << "First number: ";
				cin >> num1;
				cin.ignore();
				//Get second number
				cout << "Second number: ";
				cin >> num2;
				cin.ignore();
				//Calculate result
				result = num1 / num2;
				remainder = num1 % num2;

				cout << "How many times does "<< num2 << " go into " << num1 << "?\t";
				cin >> userAnswer;
				cin.ignore();
				
				cout << "How many Remainders are left over?\t";
				cin >> userRemainder;
				
				//compare user answer to result
				if (userAnswer == result && userRemainder == remainder) {
					cout << "\nCongratulations! The answer " << userAnswer << " with a remainder of "
						<< userRemainder << " is correct.\n\n";
				}
				else {
					cout << "\nIncorrect.\nAnswer: " << result << " with a remainder of " << remainder << endl;
				}
				break;

			case USER_QUIT:
				cout << "\n\nProgram ending...\n";
				break;

			default: 
				cout << "\n\nThe Valid choices are 1 - 5. Please select another option.\n";
		}

	} while (userChoice != USER_QUIT);

	return 0;
}
