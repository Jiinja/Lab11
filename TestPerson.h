#pragma once
#include "Person.h"
class TestPerson : public Person
{
private:

public:
	TestPerson(const string& newName = "", const int& newAge = 0, const string& newGender = "", const int& newHeight = 0) :
		Person(newName, newAge, newGender, newHeight) 
		{}
	void testSetters();
	void testGetters();
	void testOperators();
};



