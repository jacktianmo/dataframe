/************************
2.2.19.c
用一个集合表示集合，设计一个算法实现集合的求交集运算。

**************************/

#include<stdio.h>
#define max_number  50

typedef struct{
	int length;
	int data[max_number];
}sqist;


//初始化顺序表
void init(sqist *l,int len)
{	int i=0;
	l->length=len;
	for(i;i<l->length;i++)
	{
	   if((i/2)==2)	
	      l->data[i]=3;
	    else 
		l->data[i]=i;
	}
       printf("初始化%d个，已完成\n",i);
}

//打印顺序表
void printf_sqist(sqist *l)
{
	int i=0;
	for(i;i<l->length;i++)
	{
		printf("第%d的值为：%d\n",i,l->data[i]);
	}
}

//思路：
void intersection(sqist* a, sqist *b,sqist* c)
{
	int i,j,k=0;
	for(i=0;i<a->length;i++)
	{	j=0;
		while(j<b->length && a->data[i]!=b->data[j])
		{
			j++;
		}
		if(j<b->length)
			{	
				c->data[k]=a->data[i];
				k++;
			}	
	c->length=k;
}
}



void main()
{
	int i;
	sqist a,b,c;	
	int temp;
	init(&a,10);
	init(&b,2);
	printf_sqist(&a);
	printf_sqist(&b);
	intersection(&a,&b,&c);	
	printf_sqist(&c);
}
