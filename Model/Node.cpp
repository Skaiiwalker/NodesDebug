/*
 * Node.cpp
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#include "Node.h"

//using namespace std;
template <class Type>
Node<Type>::Node()
{
	pointers = nullptr;
}

template <class Type>
Node<Type>::Node(const Type& value)
{
	this->value = value;
	pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{
	//TODO Auto-generated destructor stub
}

template <class Type>
Type Node<Type> :: getValue()
{
	return this->value;
}

template <class Type>
void Node<Type> :: setValue(const Type& value)
{
	this->value = value;
}

template <class Type>
Node<Type> * Node<Type> :: getPointers()
{
	return this->pointers;
}


