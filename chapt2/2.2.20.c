/********
2.2.20.c
假设表示集合的顺序表是一个有序顺序表，实现集合的求交集运算。

*******/

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






void intersecitonl(sqist* a,sqist* b,sqist* c)
{
	int i=0,j=0,k=0;
	while(i<a->length && j<b->length)
	{
		if(a->data[i]==b->data[j])
		{	c->data[k]=a->data[i];
		 	i++;j++;k++;
		}else if(a->data[i]>b->data[j])
			{
				j++;
			}
		else
			i++;
	}
	c->length=k;

}




void main()
{
	int i;
	sqist a,b,c;	
	init(&a,10);
	init(&b,2);
	printf_sqist(&a);
	printf_sqist(&b);
	intersecitonl(&a,&b,&c);	
	printf_sqist(&c);
}
