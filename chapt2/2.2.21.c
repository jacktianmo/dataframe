/*************
2.2.21.c

用顺序表表示集合，实现集合的并集运算。
*************/

#include<stdio.h>
#define max_number  50
 
 typedef struct{
         int length;
        int data[max_number];
 }sqist;
 
 
 //初始化顺序表
 void init(sqist *l,int len)
 {       int i=0;
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

void Union(sqist* a,sqist* b,sqist* c)
{	
	int i=0,j=0,temp;
	while(i<a->length)
		{
			c->data[i]=a->data[i];
			i++;
		}
	for(j=0;j<b->length;j++)
	{
		temp=0;
		while(j<a->length && a->data[j]!=b->data[temp])
			temp++;
		if(temp==a->length)
			c->data[i++]=b->data[j];
	
	}
	c->length=i;			

}

int  main()
{
         int i;
         sqist a,b,c;
         init(&a,10);
         init(&b,2);
         printf_sqist(&a);
         printf_sqist(&b);
        Union(&a,&b,&c);
         printf_sqist(&c);
	return 0;
 }
