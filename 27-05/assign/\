/*
 * Write a program to remove duplicate characters from a string.
 * */

#include<stdio.h>
#include<string.h>

int main(){
	char str[50];

	printf("Enter a string: ");
	scanf("%s",str);
	
	printf("\nString after removing duplicates: ");
	int hash[100] = {0};

	for(int i=0;i<str[i]!='\0';i++){
		if(hash[str[i]-'A'] !=0)
			continue;
		printf("%c",str[i]);

		hash[str[i]-'A']++;
	}
	printf("\n");

	return 0;

}
