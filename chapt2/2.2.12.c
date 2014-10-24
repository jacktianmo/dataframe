/*
将顺序表的所有元素逆置，要求算法空间复杂度为O(1)
解：遍历顺序表的前半部分元素，对于l.data[i](0=< i <l.length/2)将后半部分的对应元素l.data[l.length-i-1]。
       
reverse函数

时间算法复杂度为O(n)
*/

#include<stdio.h>
#define max_number  50

typedef struct{
	int length;
	int data[max_number];
}sqist;

void init(sqist *l,int len)
{	int i=0;
	l->length=len;
	for(i;i<l->length;i++)
	{
	      l->data[i]=i*2;
	}
       printf("初始化%d个，已完成\n",i);
}

void reverse(sqist *l)
{
	int i=0;
	int temp;
	for(i;i<(l->length/2);i++)
	{  	
		temp=l->data[i];
		l->data[i]=l->data[l->length-i-1];
		l->data[l->length-i-1]=temp;	
	}

}
void printf_sqist(sqist *l)
{
	int i=0;
	for(i;i<l->length;i++)
	{
		printf("第%d的值为：%d\n",i,l->data[i]);
	}
}

void main()
{
	int i;
	sqist l;	
	int temp;
	init(&l,10);
	reverse(&l);	
	printf_sqist(&l);



	

}


