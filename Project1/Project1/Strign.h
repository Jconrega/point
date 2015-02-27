#ifndef _String_H_
#define _String_H_

#include <string.h>

class String
{
public:
	String();
	{
		sizeMemory = 1;
		cadena = new char[sizeMemory];
		cadena[0] = '\0';
	}
	String(const char* c){
		
		sizeMemory = strlen(c)+1;
		cadena = new char[sizeMemory];
		strcpy( cadena, c);
	}
	
	String(const char* format, ...){

		size = 0;

		if (format != NULL){
			static va_list
		}
	}
	String(const String&);

	int len() const{

		return strlen(cadena);
	}
	
	~String(){
		delete[]=
	}
	//Operators
	bool operator==(const String& string)const{
		return strcmp(string.cadena, cadena);
	}
	bool operator == (const char* string) const{
		if (string != NULL)
			return strcmp(string, cadena) == 0;
		return false;
	}
	const String& operator=(const char* str){

		if (str != NULL){

			if (strnlen(str) <= sizeMemory - 1){

				strcpy_s(cadena, sizeMemory, str);

			}

		}
		
		
		else
			Clear();
		return *this;

			
		
	}
	void Clear(){
		cadena[0] = '\0';
	}
public:
	
	char* cadena;
	int sizeMemory;


};

String::String()
{
}

String::~String()
{
}
#endif // !_String_H_
