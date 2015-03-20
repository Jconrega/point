#ifndef __String__
#define __String__

#include <string.h>



class String
{
private:
	char* cadena;
	unsigned int size_memory;
	
public:

	String(){};
	
	String(const String& c){}´;

	String(const char *format, ...){}

	~String(){}

	const String operator= (const char* c){}

	const String operator= (const String& c){}

	const String& operator += (const char* c){}

	int len() const{}

	int capacity(){}

	char* getString(){}
	
	void clear(){}

private:
	void alloc(unsigned int size_memory){
		this->size_memory = size_memory;
		cadena = new char[size_memory];
	}

	
};

#endif