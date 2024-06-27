/*
 * Array 
 *
 * */

#include<stdio.h>
#define SIZE 5

int main(){

	int a=10,b=20;
	int arr[SIZE]={3,4,5};

	for(int i=0;i<SIZE;i++){
		printf("%d\t",arr[i]);
	
	}
	printf("\n%d",arr[6]);

	printf("\n%d\n",arr[-2]);

	return 0;

}
