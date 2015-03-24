#include <stdarg.h>
#include <Windows.h>
#include <stdio.h>

template <class TYPE> void swap(TYPE& a, TYPE& b) //ON hi ha variació de tipus (int,char,double...) ara posem el tipus template "TYPE"
{
	TYPE tmp;
	tmp = a;
	a = b;
	b = tmp;
}
#define MIN(a,b)(a<b ? a:b) 
// Es lo mateix que MIN(a,b)
//if (a<b) a
//else b
#define MAX(a,b)(a>b ? a:b)
// Es lo mateix que MAX(a,b)
//if (a>b) a
//else b

#define ESPAI 40000000

#define DYN_ARRAY_SIZE 16

#define LOG(format, ...) log(__FILE__, __LINE__, format, __VA_ARGS__);

void log(const char file[], int line, const char* format, ...)
{
	static char tmp_string[4096];
	static char tmp_string2[4096];
	static va_list  ap;

	// Construct the string from variable arguments
	va_start(ap, format);
	vsprintf_s(tmp_string, 4096, format, ap);
	va_end(ap);
	sprintf_s(tmp_string2, 4096, "\n%s(%d) : %s", file, line, tmp_string);
	OutputDebugString(tmp_string2);
}
