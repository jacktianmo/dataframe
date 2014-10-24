/*********
*2.2.25.c
* 1.设计一个算法，使得2个顺序表归并到另外一个顺序表中。

* 2.如果顺序表b的大小为m+n个单元，是否不利用顺序表c而将合并成的线性表存放于顺序表b中，设计此算法。

* 3.设计顺序表a中前m个元素递增有序，后n个元素递增有序，设计一个算法，使得整个顺序表有序。要求算法的复杂度
为o(1)
 
* 4.对于（3）小题的算法，在对空间复杂度没有限制的情况下，能否设计出具有相同的功能的算法时间复杂度为o(m+n)
的算法。
*************/



void merge1(sqlist a,sqist b,sqist* l)
{
	int i=0,j=0,k=0;
	while(i<a.length && j<b.length)
	{
		if(a.data[i]<b.data[j])
		{
			c->data[k++]=a.data[i];
			i++;
		}else if(a.data[i]>b.data[j])
		{
			c->data[k++]=b.data[j];
			j++;

		}else
		{	
			c->data[k++]=b.data[j];
			i++;j++;
		}	
	while(i<a.length)
	{
		//需要修改 后面保证顺序
		c->data[k]=a.data[i];
		k++;i++;
	}	
	while(j<b.length)
	{
		//同上。
		c->data[k++]=b.data[j];
		j++;
		
	}
	}
	c.length=k;
}


void merge2(sqist a,sqist* b)
{
	int i=0,j=0,k;
	while(i<a.length)
	{
		if(a.data[i]>b->data[length-1])
		{
			b->data[length]=a.data[i];
			length++;i++;
		}else if(a.data[i]<b->data[j])
		{	
			for(k=b->length-1;k>=j;k--)
			{
				b->data[k+1]=b->data[k];			
		
			}
			b->data[k]=a.data[i];	
			b->length++;i++;j++;
		}else
		{
			j++;
		}
	}	

}

void merge3(sqist* b,int m,int n)
{
	int i=0,j=m,k;

}


