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
