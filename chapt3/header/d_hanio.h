/*
 * d_hanio.h
 *
 *  Created on: 2014Äê10ÔÂ31ÈÕ
 *      Author: Administrator
 */

#ifndef D_HANIO_H_
#define D_HANIO_H_

#include <stdio.h>
#include<string.h>

using namespace std;

void hanio(int n,const string& initNeedle,const string& endNeedle,const string& tempNeedle){
	if(n==1){
		cout<<"move"<<initNeedle<<"to"<<endNeedle<<endl;
	}else{
		hanio(n-1,initNeedle,tempNeedle,endNeedle);
		cout<<"move"<<initNeedle<<"to"<<endNeedle<<endl;
		hanio(n-1,tempNeedle,endNeedle,initNeedle);

	}

}

#endif /* D_HANIO_H_ */
