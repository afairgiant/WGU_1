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

	// Add each student to classRoster
	//use the provided data
	const string studentData[] = {
		"A1,John,Smith,John1989@gm  [ail.com](http://ail.com/),20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,[Erin.black@comcast.net](mailto:Erin.black@comcast.net),22,50,58,40,SECURITY",
		// add personal info for A5
		"A5,Alex,Fair,afair26@wgu.edu,29,42,25,30,SOFTWARE"
	};
}