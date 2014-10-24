/*
从顺序表中删除所有元素值为x的元素，要求空间复杂度为O(1)。


解：函数名为delalll()


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
	      l->data[i]=i*2;
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

//删除元素
void delalll(sqist* l,int x)
{
	int i=0,j;
	while(i<l->length)
	{
		if(l->data[i]==x)
		{	
			for(j=i;j<l->length;j++)
			{
				l->data[j]=l->data[j+1];
			}
			l->length--;				
		}
	
		i++;
	}
}


void main()
{
	sqist l;
	init(&l,10);
	printf_sqist(&l);
	delalll(&l,0);
	printf("删除了0后\n");
	printf_sqist(&l);
}
