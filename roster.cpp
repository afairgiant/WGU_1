#include <iostream>
#include <string>
#include <array>
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
const string studentData[] = // im confused
{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	//Add my own info
	"A5,Alex,Fair,afair26@wgu.edu,29,42,25,18,SOFTWARE"
};

Roster::Roster() 
{
	this->classRosterArray = nullptr;
	this->count = count;
	this->index = -1;

}
Roster::Roster(int count)
{
	this->count = count;
	this->index = -1;
	this->classRosterArray = new Student * [count];
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
	int p = 0;
	for (int p = 0; p < 5; p++) 
	{
		if (classRosterArray[p]->getStudentID() != "invalid") 
		{
			cout << " ";
			classRosterArray[p]->Print();
		}
	}
}

//Print average days in course
void Roster::printAverageDaysInCourse(string studentID)
{

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

void Roster::parse(string studentData) 
{

}