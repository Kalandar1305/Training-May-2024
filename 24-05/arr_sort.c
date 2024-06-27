
/*
 * Bubble sort array *
 * */

#include<stdio.h>

void swap(int* m,int* n){
	int temp;
	temp =*m;
	*m=*n;
	*n=temp;
}
int main(){
	int n,i;
	printf("Enter the size of the array: ");
	scanf("%d",&n);
	int arr[n];
	
	printf("Enter %d elements: ",n);

	for( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	
	}

	printf("Bubble sort\n ");

	for(i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			swap(&arr[i],&arr[j]);
		}
		}
	}
	
	for(i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}

	return 0;

}

