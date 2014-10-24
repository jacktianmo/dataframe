/********
* 2.2.23.c
*
*用顺序表表示集合，实现集合的求差集运算。
*c=a-b
*
*
********/





void diference(sqist a,sqist b,sqist* c)
{
	int i,j,k=0;
	for(i=0;i<a.length;i++)
	{	j=0;
		while(i<a.length && a.data[i]!=b.data[j])
		{
			j++;
		}
		if(i<a.length && j==b.length)	
		{
			c.data[k++]=a.data[i];
		}	
		c.length=k;
	}
}




