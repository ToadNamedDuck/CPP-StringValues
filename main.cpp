#include <iostream>
#include <string>
using namespace std;

int main()
{
	string stringValueConcat;
	int stringValueTotal = 0;
	string input;

	cout << "Enter a string: ";
	cin >> input;

	for(char c : input) {
		int castLetterToInt = (int)c;
		stringValueTotal += castLetterToInt;
		stringValueConcat += to_string(castLetterToInt);
	}

	cout << "Total value of the string is: " << stringValueTotal << endl;
	cout << "A concatinated version of all of the values in the string would look like: " << stringValueConcat;
}