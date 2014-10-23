//
#include<stdio.h>

//从大到小
int partition(int *v,int low ,int high){
  int temp,j;
  int privot=v[low];
  int i=low;
  for(j=low+1;j<=high;j++){
    if(v[j]>privot){
      temp=v[++i];
      v[i]=v[j];
      v[j]=temp;
    }
      temp=v[i];
      v[i]=v[low];
      v[low]=temp;
  }
}

void sort(int *v,int low ,int high){
  int mid;
  if(low<high){
    mid=partition(v,low,high);
    sort(v,low,mid-1);
    sort(v,mid+1,high);

  }

}

void QuickSort(int *v,int low ,int high){
  sort(v,low,high);

}
