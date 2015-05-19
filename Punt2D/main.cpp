#include "Utilities.h"
#include "TreeG.h"
#include <stdio.h>

int fibonacci(int n)
{
	if (n<2)
		return n;
	else
		return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(int argc, char** args){ 

	TreeG<char> t('F');

	nodeT<char>* b = t.Add('B');
	nodeT<char>* g = t.Add('G');
	t.Add('A', b);
	nodeT<char>* d = t.Add('D', b);
	t.Add('C', d);
	t.Add('E', d);

	
	getchar();


	
}

