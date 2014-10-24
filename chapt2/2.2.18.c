/***************
2.2.18.c

从有序表中删除重复的元素，并使剩下的元素之间的相对次序保持不变
***************/

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


//在所有的有序表中，所有重复的元素应该是相邻的。用k保存不重复出现的元素个数，先将不重复的有序区看成是l.data[0..0],置e=l.data[0],用i从1开始遍历l的所有元素：
//当l.data[i]不等于e时，将他放在l.data[k]中，k加一，置e=l.data[i],最后把l的长度修改为,最后把l的长度修改为k。
void delsamel(sqist *l)
{	
	int i,k=0;
        int temp=l->data[0];
	for(i=1;i<l->length;i++)
	{
		if(temp!=l->data[i])
		{	
			
			l->data[k]=l->data[i];
			k++;
			temp=l->data[k];
			
		}	
	}
	l->length=k;

}
void main()
{
	int i;
	sqist l;	
	int temp;
	init(&l,10);
	printf_sqist(&l);
	delsamel(&l);	
	printf_sqist(&l);
}

