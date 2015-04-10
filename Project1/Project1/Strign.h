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
	
	String(const String& c){};

	String(const char *format, ...){};

	~String(){};

	bool operator ==(const char* c)const;

	bool operator ==(const String& s)const;

	bool operator != (const char* c)const;

	bool operator != (const String& s)const;

	const String operator= (const char* c){};

	const String operator= (const String& c){};

	const String& operator += (const char* c){};

	const String& operator += (const String& c){};

	const String& prefix(const char* c){};

	const String& prefix(const String& c){};

	int len() const{};

	int capacity(){};

	char* getString(){};
	
	void clear(){};

private:
	void alloc(unsigned int size_memory){
		this->size_memory = size_memory;
		cadena = new char[size_memory];
	}

	
};

#endif