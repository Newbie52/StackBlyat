#pragma once

struct Node
{
	Node * next, *prev;
	int value;
};

/**
*  \brief Класс - реализация стека.
*
*   Этот класс предназначен для использования стека.
*/
class Stack
{
public:
	Stack(int size);
	~Stack();

	/**
	*   \brief Добавляет элемент в стек.
	*
	*   Добавляет элемент в конец стека.
	*   @param value добавляемый элемент.
	*/
	void push(int value);

	/**
	*   \brief Вернёт последний элемент стека.
	*
	*   Вернёт последний элемент стека и удалит его.
	*   @result последний элемент стека.
	*/
	int pop();

	/**
	*   \brief Вернёт последний элемент стека.
	*
	*   Вернёт последний элемент стека и НЕ удалит его.
	*   @result последний элемент стека.
	*/
	int fetch();

	/**
	*   \brief Вернёт размер стека.
	*
	*   Вернёт размер стека.
	*   @result размер стека.
	*/
	int size();

	void show();

private:
	Node *head;
	int top;
	int capacity;
};

