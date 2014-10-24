/************************
2.2.22.c

设计一个有序表的，做集合的并运算。

*************/




void unionl(sqist* a,sqist* b,sqist* c)
{
	int i=0,j=0,k=0;

	while(i<a->length && j<b->length)
	{
		if(a->data[i]==b->data[j])
		{
				c->data[k++]=b->data[j];
				i++;j++;
		}else if(a->data[i]<b->data[j])
		{
			c->data[k++]=a->data[i++];

		}else 
		{

			c->data[k++]=b->data[j++];

		}	
	}
	while(i<a->length)
	{	
		c->data[k]=a->data[i];
		i++;k++;
	}
	while(j<length)
	{
		c->data[k]=b->data[j];
		i++;j++;
	}
	c->length=k;
}
