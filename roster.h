#ifndef ROSTER_H
#define ROSTER_H
#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"
#pragma once
using namespace std;

// Roster Class header file
// Section E

class Roster
{
public:
		//define functions E3. Sets instance variables from D1 and update roster
	Roster();
	Roster(int count);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeProgram degree);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(degreeProgram degree);
	void parse(string studentData);

	//Destructor
	~Roster();

	//moved from private for access on main.cpp
	//Student** classRosterArray[5] = {nullptr, nullptr, nullptr, nullptr, nullptr};
	Student** classRosterArray;


private:
	//Student** classRosterArray;
		//for incremetal adding student object for Roster::add
	int index = 0;
		//for setting up classRosterArray blanks
	int count;
};

#endif