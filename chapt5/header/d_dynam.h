/*
 * d_dynam.h
 *
 *  Created on: 2014年11月6日
 *      Author: young
 */

#ifndef D_DYNAM_H_
#define D_DYNAM_H_

#include<iostream>
using namespace std;

template<typename T>
class dynamicClass{
public:
	dynamicClass(const T& m1,const T& m2);
	dynamicClass(const dynamicClass<T>& 	obj);
	~dynamic_cast();

	dynamicClass<T>& operator=(const dynamicClass<T>& rhs);

private:
	T member1;
	T* member2;
};

template<typename T>
dynamicClass<T>::dynamicClass(const T& m1,const T& m2):member1(m1)
{
	member2=new T(m2);
	cout<<"counstructor: "<<member1<<"/"<<*member2<<endl;

}

template<typename T>
dynamicClass<T>::dynamicClass(const dynamicClass<T>& obj){
		member1=obj.member1;
		member2=new T(*obj.member2);
		cout<<"copy constructor: "<<member1<<"/"<<*member2<<endl;

}
template<typename T>
dynamicClass<T>::~dynamicClass(){
	delete member2;
}


template<typename T>
dynamicClass<T>&  dynamicClass<T>::operator =(const dynamicClass<T>& rhs){
		member1=rhs.member1;
		*member2=*rhs.member2;
		cout<<"assignment:"<<member1<<"/"<<*member2<<endl;
}



#endif /* D_DYNAM_H_ */
