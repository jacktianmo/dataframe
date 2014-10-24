/***************************************************
2.2.17.c
删除重复的元素，并使剩余的元素间没有相对次序保持不变

void delsame(sqist* l)

*****************************************************/
#include<stdio.h>

#define max_number 50

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
	   else l->data[i]=i;
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

//思路:从1开始遍历其元素，设l.data[0..j]中没有重复的元素。检测l.data[i](j<i<l.length),若l.data[i]和l.data[0..j]中任何一个元素都不相同，则将l.data[i]存入l.data[j+1]中。
//
void delsame(sqist* l)
{
	int i,j=0,k;
	sqist temp_l;
	for(i=0;i<l->length;i++)
	{
		k=0;
		while(k<=j && l->data[i]!=l->data[k])
			k++;
		if(k>j)
		{
			j++;
			l->data[j]=l->data[i];
		}  	
		
	  	
	}
	l->length=j+1;
}  		

	  
void main()
{
	int i;
	sqist l;	
	int temp;
	init(&l,10);
	printf_sqist(&l);
	delsame(&l);	
	printf_sqist(&l);



	

}













