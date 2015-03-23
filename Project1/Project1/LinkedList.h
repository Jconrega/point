#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdio.h>

template <class TYPE>

struct  node{
	TYPE value;
	node<TYPE>* next;
};


template <class TYPE>

class SList{
	node<TYPE>* start;

	unsigned TYPE Count() const{

		node<TYPE>* tmp = start;
		TYPE counter = 0;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			counter++;
		}
		return counter;
	};

	void Add(TYPE valor){

		node<TYPE>* tmp = start;
		if (start != NULL)
		while (tmp->next != NULL){
			tmp = tmp->next;
		}
		node<TYPE>* last = new node;
		last->next = NULL;
		last->value = valor;

		tmp->next = last;

	};

	void Delete(node<TYPE>* delete_nodes){

		if (delete_nodes != NULL && start != NULL)
		{
			if (delete_nodes != NULL && start != NULL)
			{
				node<TYPE>* nextNode = start;
				while (nextNode && nextNode->next != delete_nodes)
				{
					nextNode = nextNode->next;
				}
				if (nextNode)
				{
					nextNode->next = delete_nodes->next;
				}
				else return;
			}
		}
		else
		{
			start = start->next;
		}
		delete delete_nodes;
		return true;
	};
	void DeleteList(){
		
		node<TYPE>* tmp;
		while (start != NULL){
			tmp = start->next;
			delete start;
			start = tmp;
		}
		
	}
};

#endif
	