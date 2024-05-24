/*
 * program to find largest of three numbers
 * */

#include<stdio.h>
#include<limits.h>
int main(){


int arr[3],largest=INT_MIN;


printf("Enter three numbers: ");
for(int i=0;i<3;i++){
scanf("%d",&arr[i]);
}

for(int i=0;i<3;i++){
	if(arr[i]>largest){
		largest=arr[i];
}
}

printf("\nThe largest number is: %d \n",largest);


return 0;
}
