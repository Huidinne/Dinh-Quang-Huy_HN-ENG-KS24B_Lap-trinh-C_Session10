#include<stdio.h>
int main(){
	int arr[]={4,5,3,2,7};
	int n= sizeof(arr)/sizeof(int);
	printf("Mang truoc khi sap xep: \n");
	for(int i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
	for(int i=0; i<n; i++){
		int minIndex= i;
		for(int j=i+1; j<n; j++){
			if( arr[j]<arr[minIndex]){
				minIndex=j;
			}
		}
		if(minIndex != i){
			int temp = arr[minIndex];
			arr[minIndex] = arr[i];
			arr[i] = temp;
		}
	}
	printf("\n");
	printf("Mang sau khi sap xep: \n");
	for(int i=0; i<n; i++){
		printf("%d\t",arr[i]);
	}
}
