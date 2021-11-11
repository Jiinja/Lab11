#include "Person.h"

Person::Person(string newName, int newAge, string newGender, int newHeight)
{
	this->name = newName;
	this->age = newAge;
	this->gender = newGender;
	this->height = newHeight;
}

Person::Person(Person& copy)
{
	copy.setAge(this->age);
	copy.setGender(this->gender);
	copy.setHeight(this->height);
	copy.setName(this->name);
}

Person::~Person()
{
	//nothing because implicit
}

string Person::getName()
{
	return this->name;
}

int Person::getAge()
{
	return this->age;
}

string Person::getGender()
{
	return gender;
}

int Person::getHeight() //inches
{
	return height;
}

void Person::setName(string newName)
{
	this->name = newName;
}

void Person::setAge(int newAge)
{
	this->age = newAge;
}

void Person::setGender(string newGender)
{
	this->gender = newGender;
}

void Person::setHeight(int newHeight)
{
	this->height = newHeight;
}

Person& Person::operator=(Person& rhs)
{
	if (this != &rhs)
	{
		rhs.setAge(this->age);
		rhs.setHeight(this->height);
		rhs.setGender(this->gender);
		rhs.setName(this->name);
	}
	return rhs;
}


ostream& operator<<(ostream& lhs, Person& rhs)
{
	lhs << rhs.getName() << "[" << rhs.getAge() << ", " << rhs.getGender() << ", " << rhs.getHeight() << "in.]";
	return lhs;
}

istream& operator>>(istream& lhs, Person& rhs)
{
	string newName, newGender;
	int newHeight, newAge;
	
	cout << "Enter a name: ";
	getline(cin, newName);
	rhs.setName(newName);
	cout << "Enter their age: ";
	cin >> newAge;
	rhs.setAge(newAge);
	cout << "Enter their gender: ";
	cin >> newGender;
	rhs.setGender(newGender);
	cout << "Enter their height in inches: ";
	cin >> newHeight;
	rhs.setHeight(newHeight);
	return lhs;
}
