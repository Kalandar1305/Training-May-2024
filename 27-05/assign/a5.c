/*
 *
 * Write a program to reverse the order of words in a given string.
 * */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	
	char str[1000];
	char *revstr[1000];
	int i=0;

	printf("Enter a string: ");
	scanf("%[^\n]s",str);

	printf("\n");

	char *token = (char *) malloc(1000);
	
	token = strtok(str," ");

	while(token!=NULL){
		
		revstr[i++]= token;
		token = strtok(NULL, " ");
		
	}
	
	for(int j=i-1;j>=0;j--){
		
		printf("%s\t",revstr[j]);

	}

	return 0;
}
