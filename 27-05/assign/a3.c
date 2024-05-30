
/*

Write a program to check if two strings are anagrams of each other.
 * */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
	char str1[50],str2[50];
	int hash[100]={0};

	printf("Enter string1: ");
	scanf("%s",str1);

	printf("Enter string2: ");
	scanf("%s",str2);
	
	if(strlen(str1)!=strlen(str2)){
		printf("Given strings are not anagrams of each other\n");
		exit(0);
	}

	for(int i=0;i<str1[i]!='\0';i++){
		
		hash[str1[i]-'A']++;
		hash[str2[i]-'A']--;
	}
	for(int i=0;i<str1[i]!='\0';i++){
		if(hash[str1[i]-'A'] !=0){	
			printf("Given strings are not anagrams of each other\n");
			exit(0);
		}

	}
	printf("Given two strings are anagrams of each other\n");

	return 0;

}
