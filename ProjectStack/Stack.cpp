#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int size)
{
	head = NULL;
	size = 0;
	capacity = size;
}


Stack::~Stack()
{
}

void Stack::push(int value)
{
	if (head == NULL)
	{
		head = new Node();
	}

	if (size < capacity)
	{
		Node * newNode = new Node();
		head->value = value;
		newNode->prev = head;
		head->next = newNode;
		head = newNode;
		size++;
	}
	else
	{
		throw new _exception;
	}
}

int Stack::fetch()
{
	if (head == NULL)
	{
		return -1;
	}
	else
		return head->value;
}

int Stack::pop()
{
	if (head == NULL)
	{
		return -1;
	}
	else
	{
		Node *pr = new Node();
		pr = head;
		head = (*head).prev;
		int value_prev = (*pr).value;
		free(pr);
		size--;
		return (value_prev);
	}
}

void Stack::show()
{
	if (head != NULL)
	{
		Node *pr = new Node();
		pr = head;
		while (pr != NULL)
		{
			cout << pr->value << " ";
			pr = pr->prev;
		}

		cout << "\n";
	}
}

int Stack::getSize()
{
	return size + 1;
}