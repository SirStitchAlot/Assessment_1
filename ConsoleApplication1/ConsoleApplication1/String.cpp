#include <iostream>
#include "String.h"
#pragma warning(disable : 4996)
using namespace std;
int main()
{
/*=================================================================*/
	//Constructor Country

	// This test the default constructor
	String Empty;
	cout << "testing default constructor lmao:" << Empty.CStr() << endl;

	//Overloaded constructor
	String Hello("Hello, World");
	cout << "testing constructor with const char* parameter, Good luck:" << endl;

	//Copy Constructor 
	String HelloCopy(Hello);
	cout << "Testing da Copy Constructor =D  :" << endl;

/*==================================================================*/
	//Method Testing zone 

	String MyString("Hello, World");


	String EmptyString("");
	String TestString("How long is this string?");

	cout <<"testing Character At"<< TestString.CharacterAt(9);









	
	


	



	
	





}

