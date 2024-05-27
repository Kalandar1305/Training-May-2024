

/*
C program to check if a number is an automorphic number (a number whose square ends in the same digits as the number itself).
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	int num,dig=0,pdig,sq,n;

	printf("Enter a positive integer: " );
	scanf("%d",&num);
	
	if(num<0){
	printf("Invalid!!");
	exit(0);
	}

	n=num;

	while(n>0){
		n/=10;
		dig++;
	}
	
	sq = num*num;
	pdig = pow (10,dig);

	if( (sq% pdig) == (num) ) {
	
		printf("The number %d is an automorphic number\n",num);
	} 
	else{
		
		printf("The number %d is not an automorphic number\n",num);
	}
	

	return 0;
}
