/*2.2.16.c	
设计一个顺序表l,其元素为整形数据，设计一个算法使得l中所有小于0的整数放在前半部分，大于等于0的整数放在后半部分。

在前半部分找到比0大的，在后半部分找到比0小的；然后互换值。
*/
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
	      l->data[i]=i*(-2)+10;
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



void move(sqist *l)
{
	int i=0,j=l->length-1;
	int temp;
	while(i<j)
	{
		while(i<j && l->data[i]<0)
		{	i++;
		}
		while(i<j && l->data[j]>=0)
		{	
			j--;
		}
		if(i<j)
		{
			temp=l->data[i];
			l->data[i]=l->data[j];
			l->data[j]=temp;
		}
	}	

}
void main()
{
	sqist l;
	init(&l,10);
	printf_sqist(&l);
	move(&l);
	printf_sqist(&l);

}
