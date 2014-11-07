/*
 * 5_4.cpp
 *
 *  Created on: 2014年11月7日
 *      Author: young
 */
#include <iostream>
#include<cstdlib>
#include<fstream>

#include"d_matrix.h"

using namespace std;

template<typename T>
T matSum(const matrix<T>& mat);

int main(){
	int i,j;
	matrix<int> intmat(1,1);

	int numRows,numCols;

	ifstream fin("mat.dat");
	if(!fin){
		cerr<<"cannot open"<<endl;
		exit(1);
	}

//  output data from file fin
	fin>>numRows>>numCols;
	cout<<"in 5_4 "<<numRows<<" "<<numCols<<endl;

	intmat.resize(numRows,numCols);
	for(i=0;i<numRows;i++)
		for(j=0;j<numCols;j++)
			fin>>intmat[i][j];

	cout<<matSum(intmat)<<endl;

	return 0;
}

template<typename T>
T matSum(const matrix<T>& mat){
	T sum=T();
	int i,j;
	for(i=0;i<mat.rows();i++)
		for(j=0;j<mat.cols();j++)
			sum+=mat[i][j];
	return sum;
}
