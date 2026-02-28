#include <iostream>
#include "../include/while_count_utils.h"
using namespace std;

namespace while_count_utils{
int runWhileCount(){
	int input;
	int temp = 1;
	while(1){
		cout << "Enter a number to count to:" << endl;
		cin >> input;
		if(input > 10){
			cout << "I'm programmed to only count up to 10!";
		}
        break;
	}

	while(temp <= input){
		if(temp == 5){
            temp++;
			continue;
		}
		cout << temp << "\n";
		temp++;
	}
    return 0;
}
}
