#include<stdio.h>

struct list{
  int* array;
  int length;

}


/**
  *
  * 思路：把顺序表的后半段往前插值
  *
  *
  */
void merge3(list & a,int m,int n){
  int data;
  int i=0,j=a.length-1,k;
  while(j>=m)
    {
      for(k=0;k<m;k++)
      {
        if(a[j]<a[k]){
          for(i=j;i>=k;i++){
            data=a[i];
            a[i]=a[i-1];
            a[i]=data;

          }

        }
        j--;
      }
  }

}
