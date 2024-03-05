#pragma once
#ifndef CUSTOM_STRING_HEADER
#define CUSTOM_STRING_HEADER
#include <iostream>
class String
{
/*=================================================================================================================*///
	//memeber zone??																			     				 
private:																										    
    char * m_data=new char[0];																								 
	int size=0;																									 
																													 
/*=================================================================================================================*///
	//construct zone																								 
public:																												 
	String();                       // this is a default construtor 												 
																													 
																													 
	String(const char* _str);  //this is to get a string to start doing all the calculations						     
																													 
		
																													 
																													 
																													 
	String(const String& _other);              //I Don't what this is for yet									 
																													 
	~String();             //deconstructor																	 
/*=================================================================================================================*///
		//method zone
public:


	int Length() const;
		  



	char& CharacterAt(int _index) 
		                               // could use a for loop using Length to use pointer to point to the location of the letter

	

    bool EqualTo(const String& _other) const;
//
//	String& Append(const String& _str);
//	String& Prepend(const String& _str);
//
//	const char* CStr() const;
//
//	String& ToLower();
//	String& ToUpper();
//
//	size_t Find(const String& _str);
//	size_t Find(size_t _startIndex, const String& _str);
//
//	String& Replace(const String& _find, const String& _replace);
//
//	String& ReadFromConsole();
//	String& WriteToConsole();
//
//public:
//	bool operator==(const String& _other);
//	bool operator!=(const String& _other);
//
//	String& operator=(const String& _str);
//
//	char& operator[](size_t _index);
//	const char& operator[](size_t _index) const;

};

#endif