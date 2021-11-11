#pragma once
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::ostream;
using std::istream;

class Person
{
public:
	Person(string newName = "", int newAge = 0, string newGender = "", int newHeight = 0);
	~Person();
	Person(Person& copy);
	string getName();
	int getAge();
	string getGender();
	int getHeight(); //inches
	void setName(string newName);
	void setAge(int newAge);
	void setGender(string newGender);
	void setHeight(int newHeight);

	Person& operator=(Person& rhs);
protected:
	string name;
	int age;
	string gender;
	int height;

};

ostream& operator<<(ostream& lhs, Person& rhs);
istream& operator>>(istream& lhs, Person& rhs);
