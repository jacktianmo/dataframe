/*
 * d_minVector.h
 *
 *  Created on: 2014年11月7日
 *      Author: young
 */

#ifndef D_MINVECTOR_H_
#define D_MINVECTOR_H_

#include<iostream>
#include"d_except.h"
using namespace std;

template<typename T>
class minVector{
public:
	minVector(int size=0);
	minVector(const minVector<T>& obj);

	~minVector();
	minVector<T>& operator =(const minVector<T>& rhs);
	T& back();
	const T& back() const;

	T& operator [](int i);
	const T& operator[](int i) const;

	void push_back(const T& item);

	void pop_back();

	int size() const;

	bool empty() const;

	int capacity() const;

private:
	int vCapacity;
	int vSize;
	T *vArr;
	void reserve(int n,bool copy);
};

template<typename T>
minVector<T>::minVector(int size):vSize(0),vCapacity(0),vArr(NULL){
	int i;
	if(size==0)
		return;
	reserve(size,false);
	vSize=size;
	for(i=0;i<size;i++)
		vArr[i]=T();

}

template<typename T>
minVector<T>::~minVector(){

	if(vArr!=NULL)
		delete[] vArr;
}

template<typename T>
minVector<T>::minVector(const minVector<T>& obj){
	int i;
	vSize=obj.vSize;
	vCapacity=obj.vCapacity;
	vArr=new T[vCapacity];

	if(!obj.vArr)
		for(i=0;i<size;i++)
			vArr[i]=obj.vArr[i];

}

template<typename T>
minVector<T>& minVector<T>::operator =(const minVector<T>& obj){
	int i;
	if(vCapacity<obj.vCapacity)
		reverse(obj.vSize,false);
	vSize=obj.vSize;

	for(i=0;i<vSize;i++)
		vArr[i]=obj.vArr[i];

	return *this;
}

template<typename T>
void minVector<T>::reserve(int n,bool copy){
	T *newArr;
	int i;
	newArr=new T[n];
	if(newArr==NULL)
//		throw memoryAllocationError(
//				"miniVector reserve():memory allocation failure");
	if(copy)
		for(i=0;i<n;i++)
			newArr[i]=vArr[i];
	if(vArr!=NULL)
		delete[] vArr;
	vCapacity=n;
	vArr=newArr;
}

template<typename T>
T& minVector<T>::back(){
	if(vSize==0)
		throw underflowError("vSize is 0");

	return vArr[vSize-1];
}

template<typename T>
T& minVector<T>::operator[](int i)
{
	if(0<=i<vSize)
		return vArr[i];
	else{
		throw overflowerror("vsize<0 || over vsize");

	}
}

template<typename T>
void minVector<T>::push_back(const T& item){
	if(vSize==vCapacity){
		if(vCapacity==0)
			reserve(1,false);
		else
			//容量增加
			reserve(2*vCapacity,true);
	}
	vArr[vSize]=item;
	vSize+=1;
}

template<typename T>
void minVector<T>::pop_back(){
	if(vSize==0){
		//exception
		throw underflowError("vSize is 0");

	}else{
		vSize--;
	}
}

template<typename T>
int minVector<T>::size() const{

	return vSize;
}



#endif /* D_MINVECTOR_H_ */
