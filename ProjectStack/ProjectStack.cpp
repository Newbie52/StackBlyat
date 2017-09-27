// ProjectStack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Stack.h"
using namespace std;

bool pushTest() {
	Stack *st = new Stack(10);
	st->push(10);
	if (st->fetch() == 10 && st->getSize() == 1) return true;
	return false;
}

bool fetchAndPopTest() {
	Stack *st = new Stack(10);
	st->push(10);
	if (st->fetch() == 10 && st->pop() == 10 && st->getSize() == 0) return true;
	return false;
}

bool getSizeTest() {
	Stack *st = new Stack(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	st->push(10);
	
	if (st->getSize() == 10) return true;
	return false;
}

void showAllTest() {
	Stack *st = new Stack(10);
	st->push(1);
	st->push(2);
	st->push(3);
	st->push(4);
	st->push(5);
	st->push(6);
	st->push(7);
	st->push(8);
	st->push(9);
	st->push(10);

	st->show();
}

void outOfRangeTest() {
	Stack *st = new Stack(10);
	st->push(1);
	st->push(2);
	st->push(3);
	st->push(4);
	st->push(5);
	st->push(6);
	st->push(7);
	st->push(8);
	st->push(9);
	st->push(10);
	st->push(11);

	st->show();

}


int main()
{

	if (pushTest())
		cout << "pushTest is TRUE" << endl;
	else
		cout << "pushTest is FALSE" << endl;

	cout << endl;

	if (fetchAndPopTest())
		cout << "fetchAndPopTest is TRUE" << endl;
	else
		cout << "fetchAndPopTest is FALSE" << endl;

	cout << endl;

	if (getSizeTest())
		cout << "getSizeTest is TRUE" << endl;
	else
		cout << "getSizeTest is FALSE" << endl;

	cout << endl;

	cout << "Now if will be print \"10 9 8 7 6 5 4 3 2 1\" test showAllTest is TRUE" << endl;
	showAllTest();

	cout << endl;

	cout << "Now if will be error test outOfRangeTest is TRUE" << endl;
	outOfRangeTest();

	cout << endl;

	getch();
    return 0;
}

