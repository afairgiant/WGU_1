#include <iostream>
#include <string>
#include <array>
#include "degree.h"
#include "student.h"
#include "roster.h"
using namespace std;

//Roster Class defintions E1
// array of pointerrs, classRosterArray
// Parse EACH set of data in "studentData Table"
//add each student object to "ClassRosterArray"
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
	for (int i = 0; i < 5; ++i) {
		if (classRosterArray[i]->getStudentID() == studentID) {
			cout << "Removing student" << classRosterArray[i]->getStudentID() << endl;
			classRosterArray[i]->setStudentID("invalid");
			return;
		}
	}
	cout << "Error: Student not found" << endl;
	return;
}
// print 
void Roster::printAll()
{
	cout << "\n";
	int p = 0;
	for (int p = 0; p < 5; p++) {
		if (classRosterArray[p]->getStudentID() != "invalid") {
			cout << " ";
			classRosterArray[p]->Print();
		}
	}
}

void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < 5; i++) {
		if ((*classRosterArray[i]).getStudentID() == studentID) {
			int avg = 0;
			avg = ((*classRosterArray[i]).getDaysInCourse()[0] + (*classRosterArray[i]).getDaysInCourse()[1] + (*classRosterArray[i]).getDaysInCourse()[2]) / 3;
			cout << "The average number of days it took the student :" << studentID << " to finish 3 courses is: " << avg << "\n";
		}
	}
}
//checks each email for @ sign and a '.' at the end
void Roster::printInvalidEmails()
{
	cout << "Printing invalid emails: \n";
	for (int e = 0; e < 5; e++) {
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
	int i = 0;
	for (int d = 0; d < 5; d++) {
		if (classRosterArray[d]->getDegree() == degree) {
			++i;
			cout << i << "/t";
			classRosterArray[d]->Print();
		}
	}
}

Roster::~Roster()
{
}

