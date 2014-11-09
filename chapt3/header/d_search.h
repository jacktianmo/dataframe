/*
 * d_search.h
 *
 *  Created on: 2014��10��29��
 *      Author: Administrator
 */

#ifndef D_SEARCH_H_
#define D_SEARCH_H_


//�ҵ���һ��targetֵ
int seqSearch(const int arr[],int first,int last,int target){
	int i;
	if(first>last) return -1;  //return a index which isn't existened

	i=first;
	while(i!=last && arr[i]!=target) i++;

	return i;
}

int binSearch(const int arr[],int first,int last,int target){
	int mid;
	int origLast=last;

	while(first < last){
		mid=(first+last) / 2;
		if(arr[mid]== target){
			return mid;

		}else if(arr[mid]>target){
			last=mid;
		}else first=mid+1;
	}

	return origLast;
}



#endif /* D_SEARCH_H_ */
