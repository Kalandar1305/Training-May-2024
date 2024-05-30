/*
 *
 * Write a program to check if a given string is a palindrome or not.
 */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main(){

        char str[1000];

        printf("Enter a string: ");
        scanf("%[^\n]s",str);
	
        int i=0,j=strlen(str)-1;
	while(i<j){
		if(str[i]!=str[j]){
			printf("Given string is not palindrome\n ");
			exit(0);
		}	
		i++;
		j--;	
	}
	
	printf("Given string is a palindrome\n");

	return 0;

}

