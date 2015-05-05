#ifndef _TREE_H_
#define _TREE_H_

#include "2LinkedList.h"
#include "Stack.h"

template <class TYPE>
struct nodeT{
public:
	TYPE data;
	nodeT<TYPE>* parent;
	List2P<TYPE> root;

};


template <class TYPE>
class TreeG{
public:
	nodeT<TYPE>* rootNode;

	TreeG(){ rootNode = NULL; }
	TreeG(const TYPE& _data){ rootNode->data = _data; rootNode->parent = NULL; }


	nodeT<TYPE>* Add(const TYPE& data, nodeT<TYPE>* _parent){
		nodeT<TYPE>*item = new nodeT<TYPE>;
		if (_parent)
		{
			item->parent = _parent;
		}
		else
		{
			rootNode = item;
			item->parent = NULL;
		}
		item->data = data;

		rootNode->root.Add(item->data);

		return item;
	}


	nodeT<TYPE>* Add(const TYPE& _data){
		nodeT<TYPE>* item = new nodeT<TYPE>;

		item->parent = rootNode;
		item->data = _data;

		rootNode->root.Add(item->data);

		return item;
	}

	void VisitAllNodes(List2P<TYPE>* list) const{

		nodeT<TYPE>* item = rootNode;
		list->Add(rootNode->data);

		for (int i = 0; i < item->root.Count(); i++)
		{
			if (item->root[i]->data)
			{
				list->Add(item->root[i]->data);
				printf("%s", item->root[i]->data);
			}

			else
				VisitAllNodes(item->root[i]);

		}
	}

	void InOrder(List2P<TYPE>* list) const{
		nodeT<TYPE>* item = rootNode;
		Stack<TYPE> s;
		for (int i = 0; i < item->root.Count(); i++)
		{
			if (item->root[i]->data)
				s.Push(item->root[i]->data);

			else
			{

			}

		}
	}
	

};
#endif // !_TREE_H_
