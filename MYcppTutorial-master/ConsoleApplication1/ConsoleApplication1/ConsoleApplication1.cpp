#include "stdafx.h"
#include "DoubledLinkedList.h"

int main()
{
	DoubledLinkedList<int> *a = new DoubledLinkedList<int>();
	a->addToLast(5);
	a->addToLast(6);
	a->addToFirst(2);
	a->show();
	delete a;
    return 0;
}

