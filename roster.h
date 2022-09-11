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
	//Student* classRosterArray[5];
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeProgram degree);
	void remove(string studentID);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(degreeProgram degree);

	//Destructor
	~Roster();

private:
	Student** classRosterArray;
	int index = -1;
	int count;
};

#endif