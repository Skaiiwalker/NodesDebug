/*
 * timer.h
 *
 *  Created on: Mar 16, 2016
 *      Author: lbar8299
 */

#ifndef MODEL_TIMER_H_
#define MODEL_TIMER_H_
#include <time.h>
class Timer
{
	clock_t executionTime;
public:
	Timer();
	virtual ~Timer();
	void startTimer();
	void stopTimer();
	void resetTimer();
	void displayTimerInformation();
	long getExecutionTimeInMicroseconds();
};

#endif /* MODEL_TIMER_H_ */
