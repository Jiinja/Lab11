#include "TestPerson.h"

void TestPerson::testGetters() //we had individual test functions for each getter, but when we changed it to protected we found that we could merge it into one
{
	if(this->getName() == this->name && this->getAge() == age && this->getGender() == gender && this->getHeight() == height)
	{
		cout << "Getter test SUCCESS" << endl;
		cout << *this << endl;
	}
	else
	{
		cout << "Getter test FAILED" << endl;
	}
}

void TestPerson::testSetters()
{
	TestPerson Josh("Josh", 18, "Male", 71);
	cout << Josh << endl;
	Josh.setAge(69);
	Josh.setName("Alex");
	Josh.setHeight(62);
	Josh.setGender("N/A");
	cout << Josh << endl;
	if (Josh.getAge() == 69 && Josh.getName() == "Alex" && Josh.getHeight() == 62 && Josh.getGender() == "N/A")
	{ 
		cout << "Setter test SUCCESS" << endl; 
	}
	else cout << "Setter test FAILED" << endl;
}
	
void TestPerson::testOperators()
{
	TestPerson Bridget("Bridget", 18, "Female", 62);
	TestPerson newPerson;
	cout << Bridget << endl;
	cin >> newPerson;
	cout << newPerson;
}