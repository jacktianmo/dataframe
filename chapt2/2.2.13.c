/*
思路：先将这n个元素的数据序列（x0,...,xn-1）原地逆置，得到的数据序列为（xn-1,...,x0），然后再将前n-p个元素（xn-1,...,xp）和后p个元素(xp-1,...x0)分别原地逆置，得到最终结果（xp,..,xn-1,x0,...,xp-1）
该算法使用2个函数，即reverse()和leftShift（）实现相应的功能，后者调用reverse（）函数3次。
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

void printf_sqist(sqist *l)
{
	int i=0;
	for(i;i<l->length;i++)
	{
		printf("第%d的值为：%d\n",i,l->data[i]);
	}
}


//做一个逆置。
void reverse(sqist *l,int left,int right)
{
	int i=0;
	int temp;
	while(left<right)
	{
		temp=l->data[left];
		l->data[left]=l->data[right];
		l->data[right]=temp;
		left++;
		right--;  
	
	}

	

}

void leftShift(sqist *l,int n,int p)
{
	if(p>0 && p<n)
	{
		reverse(l,0,n-1);
		reverse(l,0,n-p-1);	
		reverse(l,n-p,n-1);
	}

}
//end 


void  main()
{
	sqist l;
	init(&l,10);
	leftShift(&l,10,2);   
	printf_sqist(&l);
}
