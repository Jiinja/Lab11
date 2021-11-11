/*
Zach Fechko and Josh Maloy
Lab 11
11/11/2021
Using inheritance with a person and student class
*/

#include "TestPerson.h"

int main()
{
	TestPerson jimmy("Jimmy", 23, "M", 72);
	jimmy.testSetters();
	jimmy.testGetters();
	jimmy.testOperators();


return 0;
}