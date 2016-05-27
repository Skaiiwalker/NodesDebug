/*
 * NodeController.h
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#ifndef CONTROLLER_NODE_H_
#define CONTROLLER_NODE_H_

#include <iostream>
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include "../Model/timer.h"
#include <string>

using namespace std;

class NodeController
{
private:
    CTECArray<int> * notHipsterInts;
    Timer arrayTimer;
    void sortData();
    void testList();
    void searchText();
    
    int * mergeData;
    void doMergesort();
    void mergesort(int data [], int size);
    void merge(int data [], int sizeOne, int sizeTwo);
public:
    NodeController();
    virtual ~NodeController();
    void start();
};



#endif /* CONTROLLER_NODECONTROLLER_H_ */
