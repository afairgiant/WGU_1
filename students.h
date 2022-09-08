#ifndef STUDENT_H
#define STUDENT_H
#include iostream
#include string
#include "degree.h"
using namespace std;

// Define Student Class - Section D

class Student {
public:
    Student();

    // DECLARE ACCESSORS - Section D2.A

    // DECCLARE MUTATORS - Section D2.B

    // CONSTRUCTOR - Section D2.D
    Student(string studentID, string nameFirst, string nameLast, string email, int age, int daysInCourse[], degreeProgram degree);
private:

    // Data variables - Section D1
    string studentID;
    string firstName;
    string lastName;
    string emailAddress;
    int age;
    int* daysInCourse;
    degreeProgram degree;
};

#endif