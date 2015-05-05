#include "Strign.h"
#include "utilities.h"
#include <stdio.h>
#include <stdarg.h>
#include <assert.h>


String::String(){
	
	size_memory = 1;
	cadena = new char[size_memory];
	cadena[0] = '\0';

}
String::String(const String& c){

	size_memory = c.len() + 1;
	cadena = new char[size_memory];
	strcpy_s(cadena, size_memory, c.cadena);
}
String::String(const char* format,...){
	
	size_memory = 0;
	if (format != NULL)
	{
		static char tmp[ESPAI];
		static va_list ap;
		// Construct the string from variable arguments
		va_start(ap, format);
		int res = vsprintf_s(tmp, ESPAI, format, ap);
		va_end(ap);
		if (res > 0)
		{
			alloc(res + 1);
			strcpy_s(cadena, size_memory, tmp);
		}
	}
	if (size_memory == 0)
	{
		alloc(1);
		clear();
	}
}
String::~String(){

	delete[] cadena;

}
bool String::operator==(const char* c) const{
	assert(c != NULL);
	if (strlen(c) != size_memory - 1)
		return false;
	if (strcmp(cadena, c) != 0)
		return false;

	return true;
}
bool String::operator==(const char* c) const{
	assert(c != NULL);
	if (strlen(c) != size_memory - 1)
		return false;
	if (strcmp(cadena, c) != 0)
		return false;

	return true;
}
bool String::operator!=(const char* c) const{
	assert(c != NULL);
	if (strlen(c) != size_memory - 1)
		return true;
	if (strcmp(cadena, c) != 0)
		return true;

	return false;
}

bool String::operator!=(const String& s) const{

	if (s.size_memory != size_memory)
		return true;
	if (strcmp(cadena, s.cadena) != 0)
		return true;

	return false;
}
const String& String:: operator += (const char* c){
	
	if (c != NULL){
		if (len() + strlen(c) + 1 <= size_memory){
			strcat(cadena, c);
		}
		else
		{
			char* tmp = new char[len() + strlen(c) + 1];
			strcpy(tmp, cadena);
			strcat(tmp, c);
			delete[] cadena;
			cadena = tmp;
		}

	}
	return *this;
}

const String String::operator=(const String& c){

	if (c.len() + 1 > size_memory)
	{
		delete[] cadena;
		alloc(c.len() + 1);
	}
	strcpy_s(cadena, size_memory, c.cadena);

	return *this;
}

const String& String::prefix(const char* c){

	if (c != NULL){

		char* tmp1 = new char[len() + 1];
		char* tmp2 = new char[len() + strlen(c) + 1];
		strcpy(tmp1, cadena);
		strcpy(tmp2, c);

		strcat(tmp2, tmp1);

		delete[]cadena;
		cadena = tmp2;

	}
	return *this;
}

const String& String::prefix(const String& c){

	if (c != NULL){

		char* tmp1 = new char[len() + 1];
		char* tmp2 = new char[len() + strlen(c.cadena) + 1];
		strcpy(tmp1, cadena);
		strcpy(tmp2, c.cadena);
		strcat(tmp2, tmp1);
		delete[]cadena;
		cadena = tmp2;

		}
	return *this;

}
int String::len() const{
	return strlen(cadena);
}

int String::capacity(){

	return size_memory;
}
char* String::getString(){
	
	return cadena;
}
void String::clear(){

	cadena[0] = '\0';
}