#pragma once
#ifndef CUSTOM_STRING_HEADER
#define CUSTOM_STRING_HEADER

class String
{
public:
	String(); /// this is a default construtor //is this is a function declaration???
	String(const char* _str); //overloaded constructor

	String(const String& _other); //another overloaded constructor

	~String();

public:
	size_t Length() const;  //this uses strlen to get the length of the array
	char& CharacterAt(size_t _index);  // could use a for loop using Length ot use pointer to point to the location of the letter
	const char& CharacterAt(size_t _index) const;

	bool EqualTo(const String& _other) const;

	String& Append(const String& _str);
	String& Prepend(const String& _str);

	const char* CStr() const;

	String& ToLower();
	String& ToUpper();

	size_t Find(const String& _str);
	size_t Find(size_t _startIndex, const String& _str);

	String& Replace(const String& _find, const String& _replace);

	String& ReadFromConsole();
	String& WriteToConsole();

public:
	bool operator==(const String& _other);
	bool operator!=(const String& _other);

	String& operator=(const String& _str);

	char& operator[](size_t _index);
	const char& operator[](size_t _index) const;

private:
/*
* Put your internal data structures and members here
*/
};

#endif