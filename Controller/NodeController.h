/*
 * NodeController.h
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#ifndef CONTROLLER_NODE_H_
#define CONTROLLER_NODE_H_

#include <iostream>

template <class Type>
class Node
{
private:
	Type value;
	Node * pointers;
public:
	Node();
	Node(const Type& value);
	virtual ~Node();
	Type getValue();
	void setValue(const Type& value);
	Node * getPointers();
};



#endif /* CONTROLLER_NODECONTROLLER_H_ */
