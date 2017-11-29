#pragma once
template <typename T>
class Node
{
public:
	T value;
	Node<T> *next, *prev;

	Node();
	Node(const T &);
	~Node();
};

