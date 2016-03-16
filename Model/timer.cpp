/*
 * timer.cpp
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#include "timer.h"
#include <iostream>
#include <iomanip> //Make output look nicer!
using namespace std;

Timer::Timer()
{
	executionTime = 0;
}

Timer::~Timer()
{

}

void Timer::displayTimerInformation()
{
	cout << fixed;
	cout << setprecision(8);

	cout << executionTime << " us (microseconds) for the code " << endl;
	cout << "Which is " << float(executionTime)/CLOCKS_PER_SEC<< " seconds" << endl;
}

void Timer::startTimer()
{
	executionTime = clock();
}

void Timer::stopTimer()
{
	executionTime = clock() - executionTime;
}

void Timer::resetTimer()
{
	executionTime = 0;
}

long Timer::getExecutionTimeInMicroseconds()
{
	return executionTime;
}

