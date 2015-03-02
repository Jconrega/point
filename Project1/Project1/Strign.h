#ifndef __String__
#define __String__

#include <string.h>
#include <stdarg.h>

class String
{
public:
	char* cadena;
	unsigned int size_memory;
	
	String(){};

	String()
	{
		sizeMemory = 1;
		cadena = new char[size_memory];
		cadena[0] = '\0';
	}
	String(const char* c)
	{
		sizeMemory = strlen(c) + 1;
		cadena = new char[size_memory];
		strcpy_s(cadena, size_memory, c);

	}
	String(const String& c)
	{
		size_memory = c.len() + 1;
		cadena = new char[size_memory];
		strcpy_s(cadena, size_memory, c.cadena);
	}
	String(const char* format, ...)
	{
		/*FILE *tmp = tmpfile();
		va_list ap;
		va_start(ap, format);
		size_memory = vfprintf(tmp, format, ap) + 1;
		cadena = new char[size_memory];
		vsprintf_s(cadena, size_memory, format, ap);
		va_end(ap);*/
	}


	~String(){
		delete[] cadena;
	}

	const String operator= (const char* c){
		if (c != NULL)
		{
			if (strlen(c) + 1 > size_memory)
			{
				delete[] cadena;
				alloc(strlen(c) + 1);

			}
			strcpy_s(cadena, size_memory, c);
		}
		else
		{
			clear();
		}
		return *this;
	}
	const String operator= (const String& c){

		if (c.len() + 1 > size_memory)
		{
			delete[] cadena;
			alloc(c.len() + 1);
		}
		strcpy_s(cadena, size_memory, c.cadena);

		return *this;
	}

	int len() const{
		return strlen(cadena);
	}

	int capacity(){

		return size_memory;
	}

	char* getString(){

		return cadena;
	}
private:
	void alloc(unsigned int size_memory){
		this->size_memory = size_memory;
		cadena = new char[size_memory];
	}

	void clear(){
		cadena[0] = '\0';
	}
};

#endif