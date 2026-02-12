#include "../include/string_utils.h"
#include <iostream>
using namespace std;


int string_utils::runStringOption() {
	int len;
	string input;
	char arr[20];
	cout << "Enter string length:\n";
	cin >> len;
	
	if(len >= 20){
		cout << "Error: length is greater than 20\n";
		return 1;
	}

	cin.ignore();
	cout << "Enter string:\n";
	getline(cin, input);
				
	for(int i = 0; i < input.length(); i++){
		arr[i] = input[i];
	}
	arr[input.length()] = '\0';
	cout << "C-style string: " << arr << "\n";
	return 0;
}