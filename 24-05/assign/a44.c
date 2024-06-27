/*
Write a C program to determine whether a given positive integer is an Armstrong number. An Armstrong number (also known as a narcissistic number or pluperfect number) is a number that is equal to the sum of its own digits each raised to the power of the number of digits.
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){

	int num,n,dig=0,sum=0,rem;

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
	
	n=num;

	while(n>0){
		
		rem = n%10;
		sum+= pow(rem,dig);
		n/=10;
	}

	if( sum  == num) {
	
		printf("The number %d is an armstrong number\n",num);
	} 
	else{
		
		printf("The number %d is not an armstrong number\n",num);
	}
	

	return 0;
}
