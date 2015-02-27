#ifndef __String__
#define __String__

#include <string.h>
#include <stdarg.h>

class String
{
public:
	char* cadena;
	unsigned int sizeMemory;

	String()
	{
		sizeMemory = 1;
		cadena = new char[sizeMemory];
		cadena[0] = '\0';
	}
	String(const char* c)
	{
		sizeMemory = strlen(c) + 1;
		cadena = new char[sizeMemory];
		strcpy_s(cadena, sizeMemory, c);

	}
	String(const String& c)
	{
		sizeMemory = c.len() + 1;
		cadena = new char[sizeMemory];
		strcpy_s(cadena, sizeMemory, c.cadena);
	}
	String(const char* format, ...)
	{
		FILE *tmp = tmpfile();
		va_list ap;
		va_start(ap, format);
		sizeMemory = vfprintf(tmp, format, ap) + 1;
		cadena = new char[sizeMemory];
		vsprintf_s(cadena, sizeMemory, format, ap);
		va_end(ap);
	}


	~String(){
		delete[] cadena;
	}

	const String operator= (const char* c){
		if (c != NULL)
		{
			if (strlen(c) + 1 > sizeMemory)
			{
				delete[] cadena;
				alloc(strlen(c) + 1);

			}
			strcpy_s(cadena, sizeMemory, c);
		}
		else
		{
			clear();
		}
		return *this;
	}
	const String operator= (const String& c){

		if (c.len() + 1 > sizeMemory)
		{
			delete[] cadena;
			alloc(c.len() + 1);
		}
		strcpy_s(cadena, sizeMemory, c.cadena);

		return *this;
	}

	int len() const{
		return strlen(cadena);
	}
private:
	void alloc(unsigned int sizeMemory){
		this->sizeMemory = sizeMemory;
		cadena = new char[sizeMemory];
	}

	void clear(){
		cadena[0] = '\0';
	}
};

#endif