/*
 *Find the Missing Number in an Array:
Given an array containing n distinct numbers taken from 0, 1, 2, ..., n, write a program to find the missing number.
 * */

#include<stdio.h>
#include<stdlib.h>
int main(){
	
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);

	int hash[n+1];
	int arr[n];

	for(int i=0;i<=n;i++)hash[i]=0;

	printf("\nEnter the %d elements: ",n);
	
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
		hash[arr[i]]=1;
	}
	
	for(int i=0;i<=n;i++){
		if(hash[i]==0)
			printf("\n Missing number is %d\n",i);
	}
	

	return 0;

}
