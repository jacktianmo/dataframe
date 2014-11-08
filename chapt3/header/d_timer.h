/*
 * d_timer.h
 *
 *  Created on: 2014Äê10ÔÂ29ÈÕ
 *      Author: Administrator
 */

#ifndef D_TIMER_H_
#define D_TIMER_H_

#include<time.h>

class timer{
	public:
		timer();
		void start();
		void stop();
		double time() const;
	private:
		clock_t startTime,endTime;


};

timer::timer():startTime(0),endTime(0)
{
	}

void timer::start(){

	startTime=clock();
}

void timer::stop(){

	endTime=clock();
}

double timer::time() const {

	return (endTime-startTime)/double(CLOCKS_PER_SEC);


}



#endif /* D_TIMER_H_ */
