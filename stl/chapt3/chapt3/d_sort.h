#ifndef _d_sort_h_
#define  _d_srot_h_

void selectionSort(int  arr[],int number){
	int i=0,j,smallindex;
	int temp;
	//range from 0 to number-1
	for(i=0;i<number-1;i++){
		smallindex = i;
		//��һ��ʼ�Ѿ���ѡ�õĵ����
		for(j=i+1;j<number;j++){
			if(arr[smallindex ] > arr[j]){
				smallindex=j;
			}
		
		}
		if(i != smallindex){
			temp=arr[smallindex];
			arr[smallindex ] = arr[i];
			arr[i]=temp;
		}
	}

}


#endif // !_d_sort_
