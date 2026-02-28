#include "../include/grade_utils.h"
#include <iostream>
using namespace std;


double grade_utils::calculateGrade() {
	string type;
	double grade;

	cout << "Enter student type: \n";
	cin.ignore();
	cin >> type;

	if(type != "U" && type != "G" && type != "u" && type != "g"){
		cout << "Invalid student type\n";
		return 1;
	}
	cout << "Enter numeric grade: \n";
	cin >> grade;


	if(grade < 0 || grade > 100){
		cout << "Invalid grade\n";
		return 1;
	}

	if(type == "G"){
		if(grade >= 70){
			cout << "Status: Pass\n";
		}
		cout << "Status: Fail\n";
        return grade;
	}

	else{
		if(grade >= 60){
			cout << "Status: Pass\n";
		}
		cout << "Status: Fail\n";
		return grade;
	}
}
