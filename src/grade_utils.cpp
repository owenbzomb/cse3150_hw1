#include "../include/grade_utils.h"
#include <iostream>
using namespace std;


double grade_utils::calculateGrade() {
	string type;
	double grade;

	cout << "Enter student type: \n";
	cin.ignore();
	cin >> type;

	if(type != "U" && type != "G"){
		cout << "Invalid student type\n";
		return -1;
	}
	cout << "Enter a numeric grade: \n";
	cin >> grade;

	if(grade < 0 || grade > 100){
		cout << "Invalid grade";
		return -1;
	}

	string status;
	status = (grade >= 50) ? "Pass": "Fail";
	
	if(type == "G"){
		if(grade >= 70){
			cout << "Status: Pass\n";
		}
		else{
			cout << "Status: Fail\n";
		}
		return grade;
	}

	else{
		if(grade >= 60){
			cout << "Status: Pass\n";
		}
		else{
			cout << "Status: Fail\n";
		}
		return grade;
	}
}