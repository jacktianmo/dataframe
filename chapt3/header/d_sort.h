/*
 * d_sort.h
 *
 *  Created on: 2014锟斤拷10锟斤拷29锟斤拷
 *      Author: Administrator
 */

#ifndef D_SORT_H_
#define D_SORT_H_

#include<iostream>

using namespace std;

void selectionSort(int arr[],int number){
	int i,j,smallindex;
	int temp;

	//range from 0 to number-1
	for(i=0;i<number-1;i++){
		smallindex = i;
		//从一开始已经被选好的到最后
		for(j=i+1;j<number;j++){
			if(arr[smallindex ] > arr[j]){
				smallindex=j;
			}

		}
		if(i != smallindex){
			temp=arr[smallindex];
			arr[smallindex ] = arr[i];
			arr[i]=temp;
		}
	}

}

template <typename T>
void selectionSort(T arr[],int number){
	int i,j,smallindex;
	T temp;

	//range from 0 to number-1
	for(i=0;i<number-1;i++){
		smallindex = i;
		//从一开始已经被选好的到最后
		for(j=i+1;j<number;j++){
			if(arr[smallindex ] > arr[j]){
				smallindex=j;
			}

		}
		if(i != smallindex){
			temp=arr[smallindex];
			arr[smallindex ] = arr[i];
			arr[i]=temp;
		}
	}

}

template <typename T>
T max(T& a, T& b){
	return a<b? b : a;
}

template <typename T>
void writeArray(const T arr[],int n){
	int i;

	for(i=0;i<n;i++)
		cout<<arr[i]<<"  ";
	cout<<endl;

}
/**
 * 求n!
 */
int factorial(int n){
	if(n==1){

		return 1;

	}else{

		return n*factorial(n-1);
	}


}

void displayInBase(int n,int base)
{
	if(n>0)
	{
		displayInBase(n/base,base);

		cout<<n % base;
	}
}



#endif /* D_SORT_H_ */
