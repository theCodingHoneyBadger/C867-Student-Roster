#include <iostream>
#include "roster.h"

using namespace std;

// Student Data Table
const string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Jason,Morrissette,Jmor132@wgu.edu,31,30,49, 33, SOFTWARE"
};

void Roster::populateStudentData() {
	string input, token, tmp[9];
	for (int i = 0; i < sizeof(studentData) / sizeof(studentData[i]); i++) {
		input = studentData[i];
	}
}

// Method for Printing 
void Roster::printAll() {
	for (int i = 0; i < sizeof(courseRosterArray) / sizeof(courseRosterArray[i]); i++) {
		courseRosterArray[i]->print();
	}
}

int main() {
	Roster studentRoster;

	cout << "C867 - Scripting and Programming - Applicaitons \n";
	cout << "C++ \n";
	cout << "Jason Morrissettte \n";

	studentRoster.printAll(); // Call Print all Method
	cout << "----------------- \n";
	cout << "Test line \n";
	return 0;
}