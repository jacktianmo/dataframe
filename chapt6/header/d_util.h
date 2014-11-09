/*
 * d_util.h
 *
 *  Created on: 2014年11月8日
 *      Author: young
 */

#ifndef D_UTIL_H_
#define D_UTIL_H_

#include<iostream>
#include<vector>
#include<list>

using namespace std;

template<typename T>
void writeList(const list<T>& obj);

//typename why typename?
template<typename T>
typename list<T>::iterator seqSearch(typename list<T>::iterator first,typename  list<T>::iterator last,const T& obj);





template<typename T>
void writeList(const list<T>& obj){

	typename list<T>::const_iterator iter;
    iter=obj.begin();

	while(iter != obj.end()){
		cout<<*iter<<"  ";
		iter++;
	}

}
template<typename T>
typename list<T>::iterator seqSearch(typename list<T>::iterator first,typename list<T>::iterator last,const T& obj){
	typename list<T>::iterator iter;
	iter=first;
//   cannot match the operator !=;
	while(iter !=last && !(*iter==obj))
		iter++;

	return iter;
}

#endif /* D_UTIL_H_ */
