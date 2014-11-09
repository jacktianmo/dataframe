/*
 * d_wordfreq.h
 *
 *  Created on: 2014年11月8日
 *      Author: young
 */

#ifndef D_WORDFREQ_H_
#define D_WORDFREQ_H_
#include<iostream>
using namespace std;

class wordFreq{
public:
	wordFreq(const string& str):word(str),freq(1){}
	void increment(){
		freq+=1;
	}
	friend bool operator ==(const wordFreq& lhs,const wordFreq& rhs){
		return lhs.word==rhs.word;
	}
	friend bool operator <(const wordFreq& lhs,const wordFreq& rhs){
		return lhs.word<rhs.word;
	}
	friend ostream& operator <<(ostream& ostr,const wordFreq& obj){

		ostr<<obj.word<<"("<<obj.freq<<")"<<endl;
		return ostr;
	}

private:
	string word;
	int freq;

};



#endif /* D_WORDFREQ_H_ */
