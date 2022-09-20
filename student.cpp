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
Student::Student(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse[], degreeProgram degree) 
{
	//Debug Code
	//cout << "im making things\n"; 
	//cout << "'" << studentID << "','" << firstName << "' '"<<emailAddress << "'\n";
	this->studentID = studentID;
	this->firstName = firstName;
	this->lastName = lastName;
	this->emailAddress = emailAddress;
	this->age = age;
	this->daysInCourse = new int[3];
	this->daysInCourse[0] = daysInCourse[0];
	this->daysInCourse[1] = daysInCourse[1];
	this->daysInCourse[2] = daysInCourse[2];
	this->degree = degree;
}

// Access Functions D2-a

string Student::getStudentID() const
{
	return studentID;
}

string Student::getFirstName() const
{
	return firstName;
}

string Student::getLastName() const
{
	return lastName;
}

string Student::getEmailAddress() const
{
	return emailAddress;
}

int Student::getAge() const
{
	return age;
}

int* Student::getDaysInCourse() const
{
	return daysInCourse;
}

degreeProgram Student::getDegree() const
{
	return degree;
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

void Student::print() {
	int* cDays = getDaysInCourse();
	string dProS = "Security";
	if (getDegree() == degreeProgram::NETWORK) dProS = "Network";
	if (getDegree() == degreeProgram::SOFTWARE) dProS = "Software";
	cout << "Student ID: " << getStudentID()
		<< "\t First Name: " << getFirstName()
		<< "\t Last Name: " << getLastName()
		<< "\t Email Address: " << getEmailAddress()
		<< "\t Age: " << getAge()
	    << "\t Days in Course: {" << cDays[0] << ", " << cDays[1] << ", " << cDays[2] << "}"
	    << "\t Degree Program: " << dProS << "." << endl;
}