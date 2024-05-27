/*
 *
 * Write a program that prompts the user for a positive integer and then computes the sum of all the digits of the number. For example, if the user enters 2784, then the program reports 21. If the user enters 59, then the program reports 14. The program should work for any number having one to ten digits.
 *
 * */

#include<stdio.h>
#include<stdlib.h>

int main(){

	int num,rem,n,sum=0;

	printf("Enter a positive integer: " );
	scanf("%d",&num);
	
	n=num;

	if(num<0){
	printf("Invalid!!");
	exit(0);
	}

	while(n>0){
	
		rem= n%10;
		sum+=rem;
		n/=10;
		
	}

	printf("Sum of digits of number %d is : %d \n",num,sum);

	return 0;
}
