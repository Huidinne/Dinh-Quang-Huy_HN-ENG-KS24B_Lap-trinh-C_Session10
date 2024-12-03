#include<stdio.h>
int main(){
	int arr[8]={4,2,6,5,9,7,10,8};
	int start = 0;
	int end = 7;
	int item;
	printf("nhap gia tri can tim kiem: ");
	scanf("%d",&item);
	for(int i= 0; i<8; i++){
		for(int j = 0; j< 8-1-i; j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("Mang sau khi sap xep: \n");
	for(int i= 0; i<8; i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	while(start<=end){
		int mid = (start + end ) / 2;
		if(arr[mid]==item){
			printf("phan tu %d nam tai vi tri: %d", item,mid);
			return 0;
		}else if(arr[mid]<item){
			start = mid + 1;
		}else{
			end = mid - 1;
		}
	}
	printf("khong tim thay phan tu %d",item);
}
