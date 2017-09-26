// ProjectStack.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include "Stack.h"
using namespace std;
int main()
{
	Stack * st = new Stack(10);
	st->push(1);
	st->push(2);
	st->push(3);
	cout << "Added 3 el-s: 1,2,3"<< endl;
	st->show();
	cout << "Deleted:"<<st->pop() << endl;
	st->show();
	cout << "Last:" << st->fetch() << endl;
	
	getch();
    return 0;
}

