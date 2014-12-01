// linkedListPractice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

template <typename T>
class Node
{
public:
	T data;
	Node *next;
};

template <typename T>
class LinkedList
{
private:
	Node<T> *start;
public:
	LinkedList();
	~LinkedList();

	Node<T> *Begin();
	Node<T> *End();

	void AddToFront(T value);
	void Remove(int n);
};

template <typename T>
void LinkedList<T>::AddToFront(T value)
{
	Node<T> *n = new Node<T>;
	n->value = value;
	n->next = start;
	start = n;
}


int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}

