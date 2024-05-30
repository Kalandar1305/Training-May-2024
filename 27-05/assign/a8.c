/*
 *
 * Write a program to find all common elements in two given arrays.
 * */

#include<stdio.h>

int main(){

	int m,n;

	printf("Enter the size of the array1 and array2: ");
	scanf("%d%d",&m,&n);
	
	int arr1[m],arr2[n];
	int hash[50000]={0};

	printf("\nEnter the elements of array1:");
	for(int i=0;i<m;i++){
		scanf("%d",&arr1[i]);
		hash[arr1[i]]++;
	}
	printf("\nEnter the elements of array2:");
	for(int i=0;i<n;i++){
		scanf("%d",&arr2[i]);
	}

	for(int i=0;i<n;i++){
		if(hash[arr2[i]]==1)
			printf("%d\t",arr2[i]);
	}
	printf("\n");
	return 0;
}
