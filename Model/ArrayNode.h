/*
 * ArrayNode.h
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#ifndef MODEL_ARRAYNODE_H_
#define MODEL_ARRAYNODE_H_

#include "Node.h"

template <class Type>
class ArrayNode: public Node<Type>
{
private:
	ArrayNode * next;
public:
	ArrayNode();
	ArrayNode(const Type& value);
	ArrayNode(const Type& value, ArrayNode<Type> * next);
	virtual ~ArrayNode();
	ArrayNode * getNext();
	void setNext(ArrayNode<Type> * next);
};

#endif /* MODEL_ARRAYNODE_H_ */
