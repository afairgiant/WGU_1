#ifndef STUDENT_H
#define STUDENT_H
#include iostream
#include string
#include "degree.h"
using namespace std;

// Define Student Class - Section D1

class Student {
public:
    Student();

    // DECLARE ACCESSORS

    // DECCLARE MUTATORS

    // CONSTRUCTOR
    Student(string studentID, string nameFirst, string nameLast, string email, int age);
private:

    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int* daysInCourse;
    DegreeProgram degree;
};

#endif