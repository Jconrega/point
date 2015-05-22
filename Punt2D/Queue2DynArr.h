#ifndef __QEUE_H__
#define __QEUE_H__

#include "DynArray.h"


template<class Type>
class Qeue{

private:
	
	unsigned int index;
	DynArray<Type>	data;

public:

	

	unsigned int Count(){

		return data.numElements;
		
	}

	//Methods



	void Push(const Type item){

		data.PushBack(item);

	}

	bool Pop(Type& value){
		
		if (index < data.numElements)
		{
			value = data[index++];
			return true
		}

		return false;
	}

	const Type* Peek(unsigned int value) const
	{
		value = value + index;

		if (value < data.numElements)
			return &data[value];
		
		return NULL;
	}


};


#endif