/*
 * d_inftop.h
 *
 *  Created on: 2014年11月9日
 *      Author: young
 */

#ifndef D_INFTOP_H_
#define D_INFTOP_H_

#include<iostream>
#include<string>
#include<ctype.h>
#include<stack>
#include"d_7symbol.h"

using namespace std;

const char lParen='(',rParen=')';
class infix2Postfix{
public:
	infix2Postfix();
	infix2Postfix(string& infixExp);

	void setINfixExp(const string& infixExp);
	string postfix();
private:
	string infixExpress;
//	中缀表达式
	string postExpress;
//	后缀表达式
	stack<expressionSymbol> operatorStack;

	void outputHigherOrEqual(const expressionSymbol& op);
	bool isOperator(char ch) const;
};
infix2Postfix::infix2Postfix(){}
infix2Postfix::infix2Postfix(string& infixExp):infixExpress(infixExp){
}
void infix2Postfix::setINfixExp(const string& infixExp){
//	重置中缀和后缀运算符
	infixExpress=infixExp;
	postExpress="";
}
string infix2Postfix::postfix(){
	int i, rank;
	expressionSymbol op;
	char ch;
	for(i=0;i<infixExpress.length();i++){
			ch=infixExpress[i];
			if(isdigit(ch)){
				//如果是数字，直接放入后缀运算符
				postExpress+=ch;
				postExpress+=' ';
				rank++;
			if(rank>1)
				throw exception;
			}else if(isOperator(ch) || ch=='('){
				if(ch!='(')
					rank--;
				if(rank<0)
					throw exception;
				else{
					op=expressionSymbol(ch);
					operatorStack.push(op);
					outputHigherOrEqual(op);
				}
			}
			else if(ch==rParen){
				op=expressionSymbol(ch);
				outputHigherOrEqual(op);
				if(operatorStack.empty())
					throw exception;
				else
					operatorStack.pop();
			}
			else if(!isspace(ch))
				throw exception;
		}
//处理完输出
		if(rank!=1)
			throw exception;
		else{
			while(!operatorStack.empty()){
				op=operatorStack.top();
				operatorStack.pop();
				if(op.getOp()==lParen)
					throw exception;
				else{
					postExpress+=operatorStack.top();
					postExpress+=' ';
				}
			}
		}
	return postExpress;
}
void infix2Postfix::outputHigherOrEqual(const expressionSymbol& op){
//输入到后缀表达式中
	expressionSymbol op2;
	while(!operatorStack.empty() &&
			(op2=operatorStack.top()).stackPrecedence>=op.inputPrecedence){
		operatorStack.pop();
		postExpress+=op.getOp();
		postExpress+=' ';
	}
}
bool infix2Postfix::isOperator(char ch) const{
	return ch=='+' || ch=='-' || ch=='/' || ch=='%' ||ch=='^' || ch=='*';
}

#endif /* D_INFTOP_H_ */
