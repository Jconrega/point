#include <stdio.h>
#include <assert.h>
#include "List2P.h"

#define STACK_BLOCK_SIZE 16

template <class Type>
class Stack{

private:
	
	List2P<Type> list;

public:


	void Push(const Type& value){

		list.Add(value);
	}


	Type Pop(Type& result){
		if (list.Count() > 0)
		{
			result = list.end->value;
			list.Delete(list->end);
			return true;
		}
		else
			return false;
	}

	const Type* Peek(unsigned int index) const
	{
		if (index < list.Count())
			return &list[index];

		return NULL;
	}

	unsigned int Count()
	{
		return list.Count();
	}



};


#endif