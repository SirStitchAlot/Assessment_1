#include "String.h"
#include <iostream>
#pragma warning(disable : 4996)
using namespace std;

String::String() {
	m_data = new char[1];

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

	if (strcmp(m_data, _other.m_data ) == 0) {

		cout << "they are the same =)" << endl;

		return true;
	}
	else
	{
		cout << "they are not the same =(" << endl;

		return false;
	}




	
}

/* String& String::Append(const String& _str) const {        //just comented these out so its easier to debug

	strcpy_s( m_data, Length () + 1, _str);


	cout << m_data << endl;
}


 String& String::Prepend(const String& _str) const {

	 strcpy_s(_str, Length() + 1, m_data);        //overload strcpy_s late


	 cout << _str << endl;                    // overload << later
 }*/

const char* String::CStr() const {

	return m_data;

	                                               // Not sure what this one is asking me lmao

} 

String& String::ToLower() {

	for (int i = 0; i < Length(); i++) {

		if (m_data[i] >= 65 && m_data[i] <= 90) {

			m_data[i] -= 32;

		}
		
	}
	return *this;
}

String& String::ToUpper() {

	for (int i = 0; i < Length(); i++) {

		if (m_data[i] >= 97 && m_data[i] <= 122)

			m_data[i] += 32;
	}
	return *this;
}





/*==================================*/
//overloading stuff n things

