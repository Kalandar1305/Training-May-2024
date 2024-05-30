/*
 *
 * Write a program to rotate an array of n elements to the right by k steps.
 */

#include<stdio.h>

void rev(int arr[],int a, int b);
        void rotate(int arr[],int n,int k);
int main(){


	int n,k;

	printf("Enter the size of the array: ");
	scanf("%d",&n);

	int arr[n];

	printf("\nEnter the elements:");

	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\nEnter the k value: ");
	scanf("%d",&k);
	k=k%n;
	rotate(arr,n,k);

	printf("\nArray elements after rotating %d steps: ",k);
	for(int i =0;i<n;i++){
		printf("%d\t",arr[i]);
	}

	printf("\n");
	return 0;
}

void rev(int arr[],int a,int b){
	
	while(a<b){
	
	int temp;
	temp=arr[a];
	arr[a]=arr[b];
	arr[b]=temp;

	a++;
	b--;
	}
}

void rotate(int arr[],int n,int k){

	rev(arr,0,(n-1));
	rev(arr,0,(k-1));
	rev(arr,k,(n-1));
}
