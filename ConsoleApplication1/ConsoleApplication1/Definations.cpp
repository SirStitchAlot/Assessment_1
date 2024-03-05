#include "String.h"
#include <iostream>
using namespace std;

String::String() {
	m_data = new char[0];

	m_data[0] = '\0';
	cout << "deafault constructor called or whatever" << endl;

}

String::String(const char* _str) {
	if (_str) {
		m_data = new char[strlen(_str) + 1];
		strcpy(m_data, _str);

	}
	else
	{
		m_data = new char[1];
		m_data[0] = '\0';
	}

}


String::String(const String& _other) : m_data(new char[_other.Length() + 1]) {

	strcpy (m_data, _other.m_data);

}

String::~String() {

	delete[] m_data;
	m_data = nullptr;

}


// contructors and destructors 
/*==============================================================================================================================*/

int String :: Length() const {      //this is used to get the length of the array

	int length = strlen (m_data);

	return length;

}

char& String :: CharacterAt(int _index)
{

	if (_index >= 0 && _index < Length()) {

		return m_data[_index];




		
	}

	cout << "Your Chosen position is out of range" << endl;                              //dont think i need to put a else here


}

bool String :: EqualTo(const String& _other) const
{







}
