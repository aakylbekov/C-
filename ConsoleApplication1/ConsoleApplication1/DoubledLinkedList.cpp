#include "stdafx.h"
#include "DoubledLinkedList.h"

template <typename T>
DoubledLinkedList<T>::DoubledLinkedList()
{
	first = last = NULL;
}

template <typename T>
DoubledLinkedList<T>::~DoubledLinkedList()
{

}

template<typename T>
void DoubledLinkedList<T>::addToLast(const T &value)
{
	if (first = NULL) {
		first = last = new Node<T>(value); // первый элемент листа
	}
	else {
		T *temp = new Node<T>(value);
		last->next = temp; // создание первого элемента второго элемента листа
		temp->prev = last;
		last = temp;
	}
}

template<typename T>
void DoubledLinkedList<T>::addToFirst(const T & value)
{
	if (first = NULL) {
		last = first = new Node<T>(value);
	}
	else {
		T *temp = new Node<T>(value);
		first->prev = temp;
		tenp->next = first;
		first = temp;
	}
}

template<typename T>
void DoubledLinkedList<T>::show()
{
	if (first = NULL) {
		cout << "List is empty" << endl;
		}
	else {
		for (Node<T> *temp = first; temp != NULL;
			temp = temp->next;
			cout << temp->value << '\t';)
			cout << endl;
		/*Node<T> *temp = first;
		while (temp != NULL) {
			cout << temp->value << '\t';
			temp = temp->next;*/
		

	}
}
