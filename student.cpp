#include "student.h"
#include <iostream>
#include "student.h"
#include <iostream>
using namespace std;

// constructor using all the variables
Student::Student(string studentID, string nameFirst, string nameLast, string email, int age, int daysInCourse[], degreeProgram degree)
{
}

// Access Functions

string Student::getStudentID() const
{
	return string();
}

string Student::getFirstName() const
{
	return string();
}

string Student::getLastName() const
{
	return string();
}

string Student::getEmailAddress() const
{
	return string();
}

int Student::getAge() const
{
	return 0;
}

int* Student::getDaysInCourse() const
{
	return nullptr;
}

degreeProgram Student::getDegree() const
{
	return degreeProgram();
}

// Mutator Functions

void Student::setStudentID(string studentID)
{
}

void Student::setFirstName(string firstName)
{
}

void Student::setLastName(string lastName)
{
}

void Student::setEmailAddress(string emailAddress)
{
}

void Student::setAge(int age)
{
}

void Student::setDaysInCourse(int daysInCourse[])
{
}

void Student::setDegree(degreeProgram degree)
{
}
