#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#include <stdio.h>

struct  node{
	int value;
	node* next;
};


class SList{
	node* start;

	unsigned int Count() const{

		node* tmp = start;
		int counter = 0;
		while (tmp != NULL)
		{
			tmp = tmp->next;
			counter++;
		}
		return counter;
	};

	void Add(int valor){

		node* tmp = start;
		if (start != NULL)
		while (tmp->next != NULL){
			tmp = tmp->next;
		}
		node* last = new node;
		last->next = NULL;
		last->value = valor;

		tmp->next = last;

	};

	void Delete(node* delN){

		if (delN != NULL && start != NULL)
		{
			if (delN != NULL && start != NULL)
			{
				node* nextNode = start;
				while (nextNode && nextNode->next!= delN)
				{
					nextNode = nextNode->next;
				}
				if (nextNode)
				{
					nextNode->next = delN->next;
				}
				else return;
			}
		}
		else
		{
			start = start->next;
		}
		delete delN;
	};
	void DeleteList(){
		
		if (start != NULL){
			node* tmp = start;
			while (tmp->next !=NULL)
			{
				node* tmp2 = tmp;
				tmp = tmp->next;
				delete tmp2;
			}
			delete tmp;
			start = NULL;
		}

		
	}
};

#endif