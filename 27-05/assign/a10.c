/*
 *
 *Write a program to merge two sorted arrays into a single sorted array.

 */

#include<stdio.h>

void merge_arr(int arr1[],int n1,int arr2[],int n2,int res[n1+n2]);

int main(){
	
	int n1,n2;

	printf("Enter the size of the array1 and arrya2: ");
	scanf("%d%d",&n1,&n2);

	int arr1[n1],arr2[n2],res[n1+n2];

	printf("\nEnter the array1 elements: ");
	for(int i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}	

	printf("\nEnter the array2 elements: ");
	for(int i=0;i<n2;i++){
		scanf("%d",&arr2[i]);
	}

	merge_arr(arr1,n1,arr2,n2,res);

	printf("\n merged array: ");
	for(int i=0;i<n1+n2;i++)	
	{
		printf("%d\t",res[i]);
	}
	return 0;
}
 
void merge_arr(int arr1[],int n1,int arr2[],int n2,int res[n1+n2]){
	int i=0,j=0,k=0;

	while(i<n1 && j<n2){
		if(arr1[i]<=arr2[j]){
			res[k++]=arr1[i++];
		}
		else{
			res[k++]=arr2[j++];
		}
	}

	while(i<n1){
		res[k++]=arr1[i++];
	}

	while(j<n2){
		res[k++]=arr2[j++];
	}
}
