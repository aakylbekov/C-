#pragma once
#include "Node.h"

template <typename T>
class DoubledLinkedList
{
public:
	Node<T> *first, *last;
	template <typename T> DoubledLinkedList();
	template <typename T> ~DoubledLinkedList();
	template <typename T> void addToLast(const T &);
	template <typename T> void addToFirst(const T &);
	template <typename T> void show();
};

