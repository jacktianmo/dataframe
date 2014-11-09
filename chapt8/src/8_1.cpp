/*
 * 8_1.cpp
 *
 *  Created on: 2014年11月9日
 *      Author: young
 */

#include<iostream>
#include"d_sort.h"
#include<stdlib.h>
#include<vector>
#include<stdio.h>

using namespace std;
void displayVector(const vector<int>& v);
int main(){
	int i;
	vector<int> intVector;

	for(i=0;i<50;i++)
		intVector.push_back(rand()%100);

	radixSort(intVector,2);

 	displayVector(intVector);

	return 0;

}
void displayVector(const vector<int>& v){
	int i;
	for(i=0;i<v.size();i++)
		cout<<v[i]<<" ";
}
