#ifndef _TREE_H_
#define _TREE_H_

#include <stdio.h>
#include "2LinkedList.h"

template <class TYPE>

struct nodeTree{
	TYPE data;
	node* root;
	List2P leat;
};

template <class TYPE>

class Tree
{
public:

	nodeTree<TYPE>*rootnode;

	Tree(){ rootnode = NULL; }

	~Tree();

	void Add(const TYPE& data, nodeTree<TYPE>* rootfather)
	{
		
		nodeTree<TYPE>* item;
		
		item = new nodeTree <TYPE>;

		if (rootfather){

			item->root = rootfather;
		}

		else
		{
			rootfather = item;
			item->root = NULL;
		}
		
		rootfather = item;
		item->leat = NULL;

		rootfather->leat.Add(item);
	}


private:

};

#endif // !_TREE_H_
