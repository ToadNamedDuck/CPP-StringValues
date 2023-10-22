#include <iostream>
#include <string>
using namespace std;

double divide_string(string str, int dividend)
{
	int _string_value = 0;
	for (char c : str) {
		_string_value += (int)c;
	}

	return ((double)_string_value / (double)dividend);
}

int main()
{
	string stringValueConcat;
	string stringConcatWhitespace;
	int stringValueTotal = 0;
	string input;

	cout << "Enter a string: ";
	getline(cin, input);

	for(char c : input) {
		int castLetterToInt = (int)c;
		stringValueTotal += castLetterToInt;
		stringValueConcat += to_string(castLetterToInt);
		stringConcatWhitespace += to_string(castLetterToInt) + " ";
	}

	cout << "Total value of the string is: " << stringValueTotal << endl;
	cout << "A concatinated version of all of the values in the string would look like: " << stringValueConcat << endl;
	cout << "The same value, but with spaces between each individual ASCII value: " << stringConcatWhitespace << endl;
	cout << "If you divided the total value by 42, you'd get: " << divide_string(input, 42) << endl;
	return 0;
}