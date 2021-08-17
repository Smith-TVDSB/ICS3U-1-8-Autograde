#pragma once // prevents multiple definitions

#include <iostream> // print library
#include <string>
using namespace std;

// Exercise 1: implements function 'add', that adds two numbers
int add(int a, int b);

// Exercise 2: remainder calculator
int remainder(int a, int b);

// Exercise 3: Circumference function
float circumference(float r);

//Exercise 4: Concatenate a full name with middle initial
string concat(string firstName, char middleInitial, string lastName);

// ===============
// implementations

int add(int a, int b)
{
   return a+b; // TODO: fix
}

// Exercise 2: implements function that calculates remainder
int remainder(int a, int b)
{
   return a%b; // TODO: fix
}

//Exercise 3: implements function that calculates circumference
float circumference(float r)
{
	return 3.14159*r*2; //TODO: fix
}

//Exercise 4: concate first name, middle initial, and last name in proper format
string concat(string firstName, char middleInitial, string lastName)
{
	return firstName+" "+middleInitial+". "+lastName;//TODO: fix
}
