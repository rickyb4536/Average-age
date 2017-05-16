// FirstApplication.cpp : Defines the entry point for the console application.
// This is a comment
// More Comments
/* This is a multi line comment*/

#include "stdafx.h"
#include <iostream>

using namespace std;

// Main function
int main()
{
	int age;
	int ageTotal = 0;
	int numberOfPeopleEntered = 0;

	cout << "Enter first persons age or -1 to quit" << endl;
	cin >> age;

	while (age != -1) {
		ageTotal = ageTotal + age;
		numberOfPeopleEntered++;

		cout << "Enter next persons age or -1 to quit" << endl;
		cin >> age;

	}
	cout << "Number of people entered: " << numberOfPeopleEntered << endl;
	cout << "Average age: " << ageTotal/numberOfPeopleEntered << endl;

	int pause;
	pause = 0;
	cin >> pause;
	
	return 0;
}

