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

void Roster::printAll() {
	cout << "People are hosed!" << endl;
}

int main() {
	Roster studentRoster;

	studentRoster.printAll();
	return 0;
}