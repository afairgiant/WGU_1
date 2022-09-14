#include <iostream>
#include <string>
#include "student.h"
#pragma once
using namespace std;



// Section D1 create student class
Student::Student() {
	studentID = "";
	firstName = "";
	lastName = "";
	emailAddress = "";
	age = 0;
	this->daysInCourse = new int[3];
}


// constructor using all the variables D2-c
Student::Student(string studentID, string nameFirst, string nameLast, string email, int age, int daysInCourse[], degreeProgram degree) 
{
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse = new int[3];

}

// Access Functions D2-a

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

// Mutator Functions D2-b

void Student::setStudentID(string studentID)
{
	this->studentID = studentID;
}

void Student::setFirstName(string firstName)
{
	this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
	this->lastName = lastName;
}

void Student::setEmailAddress(string emailAddress)
{
	this->emailAddress = emailAddress;
}

void Student::setAge(int age)
{
	this->age = age;
}

void Student::setDaysInCourse(int daysInCourse[])
{
	this->daysInCourse = daysInCourse;
}


// print specific student data D2-e

void Student::Print() {
	int* cDays = getDaysInCourse();
	string dProS = "Security";
	if (getDegree() == degreeProgram::NETWORK) dProS = "Network";
	if (getDegree() == degreeProgram::SOFTWARE) dProS = "Software";
	cout << "Student ID: " << getStudentID()
		<< "\t First Name: " << getFirstName()
		<< "\t Last Name: " << getLastName()
		<< "\t email Address: " << getEmailAddress()
		<< "\t Age: " << getAge();
	cout << "\t Days in Course: {" << cDays[0] << ", " << cDays[1] << ", " << cDays[2] << "}";
	cout << "\t Degree Program: " << dProS << "." << endl;
}