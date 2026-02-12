#include <iostream>
#include <cstring>
#include "../include/integer_utils.h"
#include "../include/string_utils.h"
#include "../include/grade_utils.h"
using namespace std;

void printmenu(){
cout << "1. Integer operations \n2. Character arrays and C-style strings \n3. Grade evaluation\n4. While-loop counting\n5. Do-while and range-based for counting\n6. Quit\n";
}

int main(int argc, char * argv[]){
	int choice;
	string input;
	char arr[20];
	int result;
	double result3;

	while(1){
		printmenu();
		cin >> choice;
		
		switch(choice){
			case 1:
				integer_utils::runIntegerOption();
				break;
			case 2:
				result = string_utils::runStringOption();
				if (result == 1){
					exit(1);
				}
				break;
			case 3:
				result3 = grade_utils::calculateGrade();
				if (result3 == 1){
					exit(1);
				}
				break;
			case 6:
				cout << "Goodbye!";
				exit(0);
			
			default:
				cout << "Invalid menu selection\n";
				break;
		}
	}
}

