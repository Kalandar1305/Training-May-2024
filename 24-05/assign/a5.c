/*
 *
 * Remove the duplicate elements in the given array of intergers
 *
 * */

#include<stdio.h>
#include<stdlib.h>

void sort(int arr[], int n);
void swap(int* ,int*);

int main(){

	int n;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int arr[n],temp[n],j=0;

	printf("\nEnter %d elements: ",n);

	for(int i=0;i<n;i++){

		scanf("%d",&arr[i]);	
	
	}

	sort(arr,n);

	for(int i=0;i<n-1;i++){
	
		if(arr[i]!=arr[i+1]){
			temp[j++] = arr[i];
		}
	}
	temp[j++]=arr[n-1];

	for(int i=0;i<n;i++){

	arr[i]=temp[i];
	}

	printf("\nArray elemts after removing duplicates: ");

	for(int i=0;i<j;i++){
		
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

void sort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
		if(arr[i]>arr[j]){
			swap(&arr[i],&arr[j]);
		}
		}
	}
}

void swap(int* m,int *n){
	
	int temp = *m;
	*m = *n;
	*n = temp;
}
