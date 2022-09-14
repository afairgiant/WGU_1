#include <iostream>
#include "roster.h"
#include "student.h"
#include "degree.h"
using namespace std;

int main() {
	
	// Print out course title, programming langue, WGU tudent ID and name. Section F1

	cout << "Scripting and Programming - Applications - C867\n";
	cout << "Programing Language: C++\n";
	cout << "WGU Student ID: 001574781\n";
	cout << "Author: Alex Fair\n";


	// size of table for parsing?
	const int stuDataTable = 5;

	// Empty empty roster using default constructor
	Roster Roster;

	// print out all students
	for (int i = 0; i < stuDataTable; ++i) Roster.parse(studentData[i]);
	cout << "Showing all students: \n";
	Roster.printAll();
	cout << "\n";

	// Print invalid emails
	cout << "Showing invalid emails: \n";
	Roster.printInvalidEmails();
	cout << "\n";

	// Print each student's average days in course
	cout << "Showing average days per class: \n";
	for (int i = 0; i < stuDataTable; i++) {
		Roster.printAverageDaysInCourse(i); // UPDATE ME TO WORK
	}
	cout << "\n";

	// Print students in software degree
	cout << "Showing students in the Software program \n";
	Roster.printByDegreeProgram(SOFTWARE);
	cout << "\n";

	// Remove student A3
	cout << "Removing student A3 \n";
	Roster.remove("A3");
	cout << "\n";

	// Print all students
	cout << "Showing all students: \n";
	Roster.printAll();
	cout << "\n";

	// Remove student A3. - should throw an error. "Student with 'ID' was not found" or something like that
	cout << "Removing student A3 \n";
	Roster.remove("A3");
	cout << "\n";

	// Deconsturctor to clear memeory 
	Roster.~Roster();

}