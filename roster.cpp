#include <iostream>
#include <string>
#include <array>
#include <sstream>
#include <vector>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

//Roster Class defintions E1
//Array of pointerrs, classRosterArray
//Parse EACH set of data in "studentData Table"
//add each student object to "ClassRosterArray"

//Add each student to classRoster
//use the provided data
/*const string studentData[] =
{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	//Add my own info
	"A5,Alex,Fair,afair26@wgu.edu,29,42,25,18,SOFTWARE"
};
*/

/*
Roster::Roster()
{
	this -> classRosterArray = nullptr;
	this -> index = -1;

}
Roster::Roster(int count)
{
	this -> count = count;
	this -> index = -1;
	this -> classRosterArray = new Student * [count];
}
*/

//Breaks down studentData with vector tokens, and then uses Roster add which adds them to classRosterArray via student() constructor
void Roster::parse(string studentData)
{
	vector<string> tokens;
	degreeProgram tempDegree{};
	for (int i = 0; i < count; ++i) {
		stringstream ss(studentData);

		while (ss.good()) {
			string substr;
			getline(ss, substr, ',');
			tokens.push_back(substr);
		}

		if (tokens[8] == "SECURITY") {
			tempDegree = SECURITY;
		}
		if (tokens[8] == "NETWORK") {
			tempDegree = NETWORK;
		}
		if (tokens[8] == "SOFTWARE") {
			tempDegree = SOFTWARE;
		}
		Roster::add(tokens.at(0), tokens.at(1), tokens.at(2), tokens.at(3), stoi(tokens.at(4)), stoi(tokens.at(5)), stoi(tokens.at(6)), stoi(tokens.at(7)), tempDegree);
	}
}

//Add new student to the list
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, degreeProgram degree)
{
	int daysInCourse[] = {daysInCourse1, daysInCourse2, daysInCourse3};
	classRosterArray[++index] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse, degree);

	cout << "\n Student added.\n";
}

// Remove students based on ID, error if ID not found
void Roster::remove(string studentID)
{
	cout << "\n";
	for (int i = 0; i < 5; ++i) 
	{
		if (classRosterArray[i]->getStudentID() == studentID) 
		{
			cout << "Removing student" << classRosterArray[i]->getStudentID() << "\n";
			classRosterArray[i]->setStudentID("invalid");
			return;
		}
	}
	cout << "Error: Student not found" << "\n";
	return;
}

// print 
void Roster::printAll()
{
	cout << "\n";
	for (int p = 0; p < 5; p++) 
	{
	//	  if (classRosterArray[p] != nullptr) {
			classRosterArray[p]->print();
	//	 }
	}
}

//Print average days in course
void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < Roster::count; ++i)
	{
		if (classRosterArray[i]->getStudentID() == studentID)
		{
			cout << studentID << ": ";
			//add all numbers together and divide by 3 and new line
			cout << (classRosterArray[i]->getDaysInCourse()[0] + classRosterArray[i]->getDaysInCourse()[1] + classRosterArray[i]->getDaysInCourse()[2]) / 3 << "\n";
		}
	}
}

//check each email for @ sign and a '.' at the end - Section E3.e
void Roster::printInvalidEmails()
{
	cout << "Printing invalid emails: \n";
	for (int e = 0; e < 5; e++) 
	{
		string email = classRosterArray[e]->getEmailAddress();
		int posAtSign = email.find('@');
		int perAtSign = email.find('.', posAtSign);
		if (perAtSign == -1) cout << "\t" << email << "\n";
		else if (email.find(' ') != -1) cout << "\t" << email << "\n";
	}
	return;
}

void Roster::printByDegreeProgram(degreeProgram degree)
{

}


Roster::~Roster()
{
}
