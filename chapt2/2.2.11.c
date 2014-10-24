/*p33





*/
   #include<stdio.h>
  typedef struct {
           int data[20];
           int length;
   
   }sqlist;
  
  void insert(sqlist* l,int x)
  {
          int i=0,j;
          while(i<l->length && l->data[i]<=x)
                  i++;
          for(j=l->length-1;j>=i;j--)
                  l->data[j+1]=l->data[j];
          l->data[i]=x;
          l->length++;
  }
  
  int main()
  {		  int i=0,j=0;
          sqlist temp;
          temp.length=10;
		 
          for(i;i<10;i++)
          {
                  temp.data[i]=i;
                  printf("i初始化%d\n",temp.data[i]);
         }
          insert(&temp,12);
		  printf("**********************************************\n");
          for(j;j<temp.length;j++)
                  printf("i重排后%d\n",temp.data[j]);
  
          return 0;
  }
