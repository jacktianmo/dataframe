/**********
* 2.2.24.c
*
* 假设表示集合的顺序表是一个有序顺序表，设计一个高效的算法实现集合的求差运算。
*
*
**********/




void diffencel(sqist a,sqist b,sqist* c)
{
	int i=0,j,k=0;
	while(i<a.length && j<b.length)
	{	j=0;
		if(a.data[i]==b.data[j])
		{ 	
			i++;j++;
		}else if(a.data[i]<b.data[j])
		{
			c->data[k++]=a.data[i];
			i++;	
		}else 
			j++;
			
	}
	while(i<a.length)
	{
		c->data[k++]=a.data[i];
		i++;
	}	
	c->length=k;

}




