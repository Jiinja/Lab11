#pragma once
#include "Person.h"


typedef struct course {
	string name;
	int credits;
	string grade;
} Course;

class Student : public Person
{
public:
	Student(const string& newName = "", const int& newAge = 0, const string& newGender = "", const int& newHeight = 0) :
		Person(newName, newAge, newGender, newHeight){}
	~Student();
	Student(Student &copy);
	int getClassCount();
	int getTotalCredits();
	Course* getClassList();
	Student& operator=(Student& copy);
private:
	Course* classList;
	int classCount;
	int totalCredits;
};

ostream& operator<<(ostream& lhs, Student& rhs);
istream& operator>>(istream& lhs, Student& rhs);