/*
 * 6_2.cpp
 *
 *  Created on: 2014年11月8日
 *      Author: young
 */

#include<iostream>
#include"d_util.h"
#include"d_wordfreq.h"
#include<fstream>
#include<cstdlib>

using namespace std;

int main(){
	ifstream fin;
	list<wordFreq> wf;
	list<wordFreq>::iterator iter;

	string filename,word;
	cout<<"enter name of the file containing the words: ";
	cin>>filename;
	fin.open(filename.c_str());

	if(!fin){
		cerr<<"cannot open file:"<<filename<<endl;
		exit(1);
	}

	while(fin>>word){
		wordFreq obj(word);

		iter=seqSearch<wordFreq>(wf.begin(),wf.end(),obj);
		if(iter!=wf.end())
			(*iter).increment();
		else
			wf.push_back(obj);
	}

	wf.sort();

	cout<<endl;
	writeList(wf);

	return 0;
}

