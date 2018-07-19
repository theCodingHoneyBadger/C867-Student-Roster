#pragma once
#include <string>
#include <iostream>
#include <sstream>
#include "student.h"

using namespace std;

// Student Roster Class
class Roster {
public:
	
	Student * courseRosterArray[5] = { nullptr, nullptr, nullptr, nullptr,nullptr };
	void populateStudentData();
	void printAll();


};