#include "Stack.h"
#include <iostream>
using namespace std;

Stack::Stack(int _size)
{
	head = NULL;
	this->size = 0;
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
		Node *newNode = new Node();
		newNode->value = value;
		newNode->prev = head;
		head = newNode;
		size++;
	}
	else
	{
		throw new out_of_range("kek");
	}
}

int Stack::fetch()
{
	if (head == NULL)
	{
		return -1;
	}
	else
	{
		return head->value;
	}	
}

int Stack::pop()
{
	if (head == NULL)
	{
		return -1;
	}
	else
	{
		Node *last = new Node();
		last = head;
		head = head->prev;
		int valueLast = last->value;
		free(last);
		size--;
		return valueLast;
	}
}

void Stack::show()
{
	if (head != NULL)
	{
		Node *temp = new Node();
		temp = head;
		while (temp->prev != NULL)
		{
			cout << temp->value << " ";
			temp = temp->prev;
		}

		cout << "\n";
	}
}

int Stack::getSize()
{
	return size;
}