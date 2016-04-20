/*
 * CTECArray.h
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#ifndef MODEL_CTECARRAY_H_
#define MODEL_CTECARRAY_H_

#include "ArrayNode.h"

template <class Type>
class CTECArray
{
private:
	int size;
    void calculateSize();
	ArrayNode<Type> * head;
    ArrayNode<Type> * end;
private:
	CTECArray(int size);
	virtual ~CTECArray();
	int getSize();
	Type get(int position);
	void set(int position, const Type& value);
    int indexOf(Type value);
};



#endif /* MODEL_CTECARRAY_H_ */
