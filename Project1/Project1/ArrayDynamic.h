#ifdef _ARRAYDYNAMIC_H_
#define _ARRAYDYNAMIC_H_

class ArrayDynamic
{
private:
	//Enters que conten llocs de momria on es guardaran les coses
	int* data;
	//Tamany de memoria
	unsigned int allocated_memory;
	//Numero de elements de la memoria alocatada. Sempre es mes petit que allocated_memory
	unsigned int num_elements;
	
public:
	//Constructor	
	ArrayDynamic(): data(NULL),allocated_memory(0),num_elements(0) ;
	//Constructor perque comenci amb una dada donada
	ArrayDynamic(unsigned int mem_size)
	{
		ModifyMemory(mem_size);
	}
	//Destructor
	~ArrayDynamic()
	{
		if(data != NULL)
			delete[]data;
	}
	//Realocatar memoria
	void ModifyMemory(unsigned int new_memory_size);
	//Afegir Memoria
	void PushBack(int value);
	//ExtreuMemoria
	int Pop();
	//Canvia la posicio que te per un valor
	void Insert(int value, unsigned int position);
	//Torna referencia no constant
	int& operator[](unsigned int index);
	//sobre carga de operador. Torna referencia constant
	const int& operator [](unsigned int index)const;
};

#endif // _ARRAYDYNAMIC_H_
