/*
 * d_7symbol.h
 *
 *  Created on: 2014年11月9日
 *      Author: young
 */

#ifndef D_7SYMBOL_H_
#define D_7SYMBOL_H_

#include<ctype.h>    //
using namespace std;

class expressionSymbol{
public:
	expressionSymbol();
	expressionSymbol(char ch);
	//对运算数初始化
	friend bool operator >=(const expressionSymbol& left,const expressionSymbol& right);
	char getOp() const;

private:
	char op;
	//运算符
	int inputPrecedence;
//	op的输入等级
	int stackPrecedence;
// stack的优先级
};

expressionSymbol::expressionSymbol();
expressionSymbol::expressionSymbol(char ch):op(ch){
//对运算数初始化
//	if(isdigit(ch-'0'))
//	        return;
//	else if(ch=='+' || ch=='-'){
//		inputPrecedence=1;
//		stackPrecedence=1;
//	}else if(ch=='*' || ch=='/' || ch=='%'){
//		inputPrecedence=2;
//		stackPrecedence=2;
//	}else if(ch=='^'){
//		inputPrecedence=4;
//		stackPrecedence=3;
//	}else if(ch=='('){
//		inputPrecedence=5;
//		stackPrecedence=-1;
//	}else if(ch==')'){
//		inputPrecedence=0;
//		stackPrecedence=0;
//	}else if(isspace(ch))
//		throw exception;
	switch(op){
			case '+':
			case '-':
				inputPrecedence=1;
				stackPrecedence=1;
				break;
			case '*':
			case '%':
			case '/':
				inputPrecedence=2;
				stackPrecedence=2;
				break;
			case '^':
				inputPrecedence=4;
				stackPrecedence=3;
				break;
			case '(':
				inputPrecedence=5;
				stackPrecedence=-1;
				break;
			case ')':
				inputPrecedence=0;
				stackPrecedence=0;
				break;
	}
}
bool operator >=(const expressionSymbol& left,const expressionSymbol& right){
	//比较left和right的输入等级
	return left.stackPrecedence>=right.inputPrecedence;

}
char expressionSymbol::getOp() const{

	return op;
}


#endif /* D_7SYMBOL_H_ */
