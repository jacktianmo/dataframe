/*
 * main.cpp
 *
 *  Created on: 2014年11月6日
 *      Author: young
 */

#include <iostream>
#include<d_dynam.h>

using namespace std;

void destroy(int m1,int m2);

int main(){
	dynamicClass<int> obj1(1,100);
	dynamicClass<int>* ptrobj2;

	ptrobj2=new dynamicClass<int>(obj1);

	destroy(3,300);

	return 0;
}

void destroy(int m1,int m2){
	dynamicClass<int>(m1,m2);

}

