#include "../include/integer_utils.h"
#include <iostream>
using namespace std;


void integer_utils::runIntegerOption() {
	int int_input, int_input2, quotient;
	cout << "Enter first integer:\n";
	cin >> int_input;
	cout << "Enter second integer:\n";
	cin >> int_input2;

	if (int_input2 == 0){
		cout << "Error: division by zero\n";
		return;
	}

	quotient = int_input/int_input2;
	
	cout << "Result: " << quotient << "\n";
	int_input++;
	
	cout << "After post-increment: " << int_input << "\n";
	cout << "After pre-increment: " << ++int_input << "\n";

}