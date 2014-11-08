/*
 * d_except.h
 *
 *  Created on: 2014年11月7日
 *      Author: young
 */

#ifndef D_EXCEPT_H_
#define D_EXCEPT_H_

#include<iostream>

using namespace std;

class baseException{
public:
	baseException(const string& str=""):msg(str){
		if(str=="")
			msg="undefined Exception";
		else
		  msg=str;
	}
	string what() const{
		return msg;
	}

private:
	string msg;

};

//公有继承和私有继承
class underflowError: public baseException
{
public:
	underflowError(const string& msg=""):baseException(msg){}

};

class overflowerror:public baseException{
public:
	overflowerror(const string& msg=""):baseException(msg){}
};




#endif /* D_EXCEPT_H_ */
