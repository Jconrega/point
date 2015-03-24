#infdef _ARRAYDYNAMIC_H_
#define _ARRAYDYNAMIC_H_

#include "utilities.h"
#include <assert.h>
#include <stdio.h>

template <class TYPE>
class ArrayDynamic
{
private:
	//Enters que conten llocs de momria on es guardaran les coses
	TYPE* data;
	//Tamany de memoria
	unsigned int allocated_memory;
	//Numero de elements de la memoria alocatada. Sempre es mes petit que allocated_memory
	unsigned int num_elements;
	
public:
	//Constructor	
	ArrayDynamic() : data(NULL), allocated_memory(0), num_elements(0) { ModifyMemory(DYN_ARRAY_SIZE); }
	//Constructor perque comenci amb una dada donada
	ArrayDynamic(unsigned int mem_size) {ModifyMemory(mem_size);}
	//Destructor
	~ArrayDynamic()
	{
		if(data != NULL)
			delete[]data;
	}
	//Realocatar memoria
	void ModifyMemory(unsigned int new_memory_size)
	{
		TYPE* tmp = data;
		allocated_memory = new_memory_size;
		data = new TYPE[allocated_memory];

		if (tmp != NULL)
		{
			for (int i = 0; i < num_elements; i++){
				data[i] = tmp[i];
			}
			delete[] tmp;
		}

	}
	//Afegir Memoria
	void PushBack(TYPE value){
		
		if (allocated_memory <= num_elements) //No tenim memoria extra
		{
			ModifyMemory(allocated_memory + DYN_ARRAY_SIZE);
		}
		data[num_elements] = value;
		num_elements++;
	
	}
	//ExtreuMemoria
	bool Pop()
	{
		if (num_elements != NULL){

			num_elements--;
			return data[num_elements];
		}
		else
			return false;
	}
	//Canvia la posicio que te per un valor
	bool Insert(const TYPE value, const unsigned int position){

		if (position > num_elements)
			return false;
		if (position == num_elements)
		{
			PushBack(value);
			return true;
		}
		if (allocated_memory <= num_elements){

			ModifyMemory(allocated_memory + DYN_ARRAY_SIZE);
		}
		for (unsigned int i = num_elements; i > position; i--){

			data[i] = data[i - 1];
		}
		data[position] = value;
		num_elements++;
		return true;
	}
	//Torna referencia no constant
	TYPE& operator[](const unsigned int index){
		assert(index < num_elements);
		return data[index];
	}
	//sobre carga de operador. Torna referencia constant
	const TYPE& operator [](unsigned int index)const{
		assert(index < num_elements);
		return data[index];
	}
};

#endif // _ARRAYDYNAMIC_H_
