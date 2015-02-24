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
	
	String(const char* format, ...)
	String(const String&);

	int len() const{

		return strlen(cadena);
	}
	
	~String ();

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
