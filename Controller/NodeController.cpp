/*
 * NodeController.cpp
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#include "NodeController.h"

using namespace std;

NodeController::NodeController()
{
	notHipsterInts = new CTECArray<int>(5);
}

void NodeController::start()
{
    doMergesort();
}

void NodeController::testList()
{
    
}

void NodeController::searchText()
{
    
}

void NodeController::sortData()
{
    sortTimer.resetTimer();
    
    sortTimer.startTimer();
    std::sort(std::begin(myCPlusPlusArray), std::end(myCPlusPlusArray));
    sortTimer.stopTimer();
    sortTimer.displayTimerInformation();
    
    sortTimer.resetTimer();
}

void NodeController::doMergesort()
{
    mergeData = new int[5000];
    
    for(int spot = 0; spot < 50; spot++)
    {
        int myRandom = rand();
        mergeData[spot] = myRandom;
    }
    for (int spot = 0; spot < 50; spot ++)
    {
        cout << mergeData[spot] << ", " ;
    }
    
    Timer mergeTimer;
    mergeTimer.startTimer();
    mergesort(mergeData, 5000);
    mergeTimer.startTimer();
    mergeTimer.displayTimerInformation();
    for ( int spot =0; spot < 50; spot++)
    {
        cout << mergeData[spot] <<", " ;
    }
    delete [] mergeData;
}

void NodeController::mergesort(int data[], int size )
{
    int sizeOne;
    int sizeTwo;
    
    if(size > 1)
    {
        sizeOne = size/2;
        sizeTwo = size-sizeOne;
        
        mergesort(data, sizeOne);
        mergesort((data+sizeOne), sizeTwo);
        
        merge(data, sizeOne, sizeTwo);
    }
    
    
}

void NodeController::merge(int data[], int sizeOne, int sizeTwo)
{
    int * temp; //Link for a temporary array.
    int copied = 0;
    int copied1 = 0;
    int copied2 = 0;
    int index;
    
    temp = new int[sizeOne + sizeTwo];
    
    while ((copied1 < sizeOne) && (copied2 < sizeTwo))
    {
        if(data[copied1] < (data + sizeOne) [copied2])
        {
            temp[copied++] = data[copied1++];
        }
        else
        {
            temp[copied++] = (data + sizeOne) [copied2++];
        }
    }
    
    while(copied1 < sizeOne)
    {
        temp[copied++] = data[copied1++];
    }
    
    while(copied2 < szieTwo)
    {
        temp[copied++] = (data + sizeOne) [copied2++];
    }
    
    for(index =0; index < sizeOne + sizeTwo; index++)
    {
        data[index] = temp[index];
    }
    delete [] temp;
}

void NodeController::doBogo()
{
    int temp [10];
    int check [10];
    
    for(i index = 0; index < 10; index++)
    {
        check[index] = index;
    }
}

void NodeController::quicksort(int data[], int size)
{
    int pivotIndex;
    int sizeOne;
    int sizeTwo;
    
    
                                   
}
