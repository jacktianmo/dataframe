/*
 * d_matrix.h
 *
 *  Created on: 2014年11月7日
 *      Author: young
 */

#ifndef MATRIX_CLASS
#define MATRIX_CLASS

#include <iostream>
#include <vector>

#include "d_except.h"

using namespace std;

template<typename T>
class matrix{
public:
	matrix(int numrows=1,int numcols=1,const T& initVal=T());
	~ matrix();

	vector<T>& operator[](int i);
	const vector<T>& operator[](int i) const;

	int rows() const;
	int cols() const;
	void resize(int numRows,int numCols);

private:
//变量名为rows和cols会出现模糊定义！
	int nRows;
	int nCols;
	vector<vector<T> >mat;
};

template<typename T>
matrix<T>::~matrix(){
}

template <typename T>
matrix<T>::matrix(int numRows, int numCols, const T& initVal):
	nRows(numRows), nCols(numCols),
	mat(numRows, vector<T>(numCols,initVal))
{}

template <typename T>
vector<T>& matrix<T>::operator[] (int i)
{
	if (i < 0 || i >= nRows)
		throw overflowerror(
			"matrix: invalid row index");

   return mat[i];
}


template <typename T>
const vector<T>& matrix<T>::operator[] (int i) const
{
	if (i < 0 || i >= nRows)
		throw overflowerror(
			"matrix: invalid row index");

   return mat[i];
}

template <typename T>
int matrix<T>::rows() const
{
   return nRows;
}

template <typename T>
int matrix<T>::cols() const
{
   return nCols;
}

template<typename T>
void matrix<T>::resize(int numRows,int numCols){
	int i;
	if(numRows==nRows && numCols==nCols)
		return;

	cout<<"in .h"<<nRows<<endl;
	nRows=numRows;
	nCols=numCols;
	cout<<"in .h"<<nRows<<endl;

	mat.resize(nRows);

	for(i=0;i<nRows;i++)
		mat[i].resize(nCols);

}

#endif	// MATRIX_CLASS

