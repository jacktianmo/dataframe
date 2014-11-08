/*
 * d_random.h
 *
 *  没搞懂！
 *  用到了位运算 得到seed
 *
 *
 *  Created on: 2014年10月29日
 *      Author: Administrator
 */

#ifndef D_RANDOM_H_
#define D_RANDOM_H_

#include<time.h>
#include<iostream>


class randomNumber{
	public:
		randomNumber(long s=0);

		long random();

		long random(long n);

		double frandom();

	private:
		static const long A;
		static const long M;
		static const long Q;
		static const long R;

		long seed;


};

const long randomNumber::A=48271;
const long randomNumber::M=2147483647;
const long randomNumber::Q=M / A;
const long randomNumber::R=M % A;

randomNumber::randomNumber(long s){
	if(s<0)
		s=0;

	if(s==0){
		long t_time = time(NULL);

		t_time *= t_time;

		if(t_time>0)
			s=t_time ^ 0x5EECE66DL;
		else if(t_time <0)
			s=(t_time & 0x7fffffff) ^ 0x5EECE66DL;
		else
			s=0x5EECE66DL;
	}

	seed=s;
}

long randomNumber::random()
{
	long tmpSeed = A * ( seed % Q ) - R * ( seed / Q );

	if( tmpSeed >= 0 )
		 seed = tmpSeed;
	else
		 seed = tmpSeed + M;

	return seed;
}

long randomNumber::random(long n)
{
	double fraction = double(random())/double(M);

	return int(fraction * n);
}

#endif /* D_RANDOM_H_ */
